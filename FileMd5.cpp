#include "FileMd5.h"

#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QApplication>
#include <QDir>
#include <QFileInfo>

FileMd5::FileMd5(QObject *parent) : QObject(parent)
{

}

QStringList FileMd5::getFiles(const QString &path)
{
    QStringList ret;

    QDir dir(path);
    QFileInfoList infolist = dir.entryInfoList(QDir::Files | QDir::Dirs | QDir::NoDotAndDotDot);

    //qDebug()<< "fileNum:" << infolist.count();
    for(int i = 0; i < infolist.count(); ++i)
    {
        QFileInfo info = infolist.at(i);
        if(info.isDir())
        {
            QString subDir = info.absoluteFilePath();
            QStringList files = getFiles(subDir);
            ret.append(files);
            //qDebug() << "subDir:" <<subDir;
        }
        else
        {
            QString fileName = info.absoluteFilePath();
            ret.append(fileName);
            //qDebug() << "fileName:" <<fileName;
        }
    }

    return ret;
}

QByteArray FileMd5::getFileMd5(const QString &fileName)
{
    QFile file(fileName);

    if(file.open(QIODevice::ReadOnly))
    {
        QCryptographicHash hash(QCryptographicHash::Md5);

        while(!file.atEnd())
        {
            QByteArray content = file.read(100 * 1024 * 1024);
            hash.addData(content);
        }
        QByteArray md5 = hash.result().toHex();
        //qDebug() << md5;

        file.close();

        return md5;
    }

    return QByteArray();
}

void FileMd5::checkDumplate(const QString &path)
{
    //检测文件重复
    QHash<QByteArray, QStringList> ret;

    QStringList files = getFiles(path);

    for(int i = 0; i < files.count(); ++i)
    {
        QString fileName = files.at(i);
        QByteArray md5 = getFileMd5(fileName);
        //qDebug() << "fileName:" << fileName <<"---md5:" << md5;

        ret[md5].append(fileName);

        emit progress(i+1, files.count());
    }

    emit gotDumplate(ret);
}
