#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPoint>
#include "FileMd5.h"
#include <QThread>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    virtual void  mouseMoveEvent(QMouseEvent *event);
    virtual void  mousePressEvent(QMouseEvent *event);
    virtual void  mouseReleaseEvent(QMouseEvent *event);

    virtual void  keyPressEvent(QKeyEvent *event);

signals:
    void checkDumplate(const QString &path);

private slots:
    void on_btnMin_clicked();
    void on_btnMax_clicked();
    void on_btnClose_clicked();

    void on_btnFile_clicked();
    void onGotDumplate(const QHash<QByteArray,QStringList> &dumplates);

    void onProgress(int current, int total);

    void on_listWidgetMd5_currentTextChanged(const QString &currentText);

private:
    Ui::Widget *ui;
    QPoint z;
    QThread thread;
    FileMd5 md5;
    QHash<QByteArray, QStringList> dumplates;
};

#endif // WIDGET_H
