#include "MyPlayer.h"
#include<QDebug>
MyPlayer::MyPlayer(QObject *parent)
    : QObject{parent}
{
    qDebug()<< Q_FUNC_INFO<<"Constructor"<<Qt::endl;
}

void MyPlayer::playSong(QString val)
{
    qDebug()<<Q_FUNC_INFO<<val<<Qt::endl;
    QObject* obj = sender();
    if(obj==nullptr)
    {
        return;
    }
    qDebug()<< "Playing Song:  "<<val<<"sender="<<obj<<Qt::endl;
}
