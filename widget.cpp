#include "widget.h"
#include "ui_widget.h"

#include <QMouseEvent>
#include <QKeyEvent>
#include <QGraphicsDropShadowEffect>
#include <qDebug>
#include <QFileDialog>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);    //无边框
    this->setAttribute(Qt::WA_TranslucentBackground);   //透明

    //阴影边框效果类 属性设置
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect();
    shadow->setBlurRadius(10);
    shadow->setColor(Qt::black);
    shadow->setOffset(0);

    ui->shadowWidget->setGraphicsEffect(shadow); //..shadowWidget是白色背景
    //this->setGraphicsEffect(shadow); //不能对最外层widget设置阴影

    //多线程
    thread.start();
    md5.moveToThread(&thread);

    qRegisterMetaType<QHash<QByteArray,QStringList>> ("QHash<QByteArray,QStringList>");
    connect(&md5, SIGNAL(gotDumplate(const QHash<QByteArray,QStringList>)),
            this, SLOT(onGotDumplate(const QHash<QByteArray,QStringList>)));

    connect(this, SIGNAL(checkDumplate(QString)),
            &md5, SLOT(checkDumplate(QString)));

    connect(&md5, SIGNAL(progress(int,int)),
            this, SLOT(onProgress(int,int)));
}

Widget::~Widget()
{
    thread.exit();
    thread.wait(10*1000);
    delete ui;
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    QWidget::mouseMoveEvent(event);

    if(this->z == QPoint())
        return;

    QPoint x = event->globalPos();
    QPoint y = x - z;

    this->move(y);
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    QWidget::mousePressEvent(event);

    QPoint x = event->globalPos();
    QPoint y = this->geometry().topLeft();
    z = x - y;
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    QWidget::mouseReleaseEvent(event);
    this->z = QPoint();
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    QWidget::keyPressEvent(event);

    if(event->key() == Qt::Key_Escape)
    {
        //QApplication::quit();
        qApp->quit();
    }
}




void Widget::on_btnMin_clicked()
{
    this->showMinimized();
}

void Widget::on_btnMax_clicked()
{
    if(this->isMaximized())
    {
        ui->vlMain->setMargin(9);
        this->showNormal();
    }
    else
    {
        ui->vlMain->setMargin(0);
        this->showMaximized();
    }
}

void Widget::on_btnClose_clicked()
{
    this->close();
}

void Widget::on_btnFile_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this, "select a forder", ".");

    ui->lineEdit->setText(path);
    ui->progressBar->setValue(0);

    //md5.checkDumplate(path);
    emit checkDumplate(path);
}

void Widget::onGotDumplate(const QHash<QByteArray, QStringList> &dumplates)
{
    ui->listWidgetMd5->clear();
    this->dumplates = dumplates;

    for(QHash<QByteArray, QStringList>::const_iterator itr = dumplates.begin();
        itr != dumplates.end(); ++itr)
    {
        //qDebug()<< "md5:" << itr.key()<<"count:" << itr.value().count();
        if(itr.value().count() > 1)
        {
            //qDebug() << "file:"<<itr.value();
            ui->listWidgetMd5->addItem(itr.key());
        }
    }
}

void Widget::onProgress(int current, int total)
{
    ui->progressBar->setMaximum(total);
    ui->progressBar->setValue(current);
}

void Widget::on_listWidgetMd5_currentTextChanged(const QString &currentText)
{
    ui->listWidgetDumplates->clear();
    QStringList files = this->dumplates[currentText.toLocal8Bit()];
    ui->listWidgetDumplates->addItems(files);
}
