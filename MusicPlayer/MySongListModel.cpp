#include "MySongListModel.h"
#include<QDebug>
#include<QTimer>
MySongListModel::MySongListModel(QObject *parent)
    : QObject{parent}
{
    qDebug()<< Q_FUNC_INFO<<"Constructor called"<<Qt::endl;
    init();
}
void MySongListModel::init()
{
    QTimer *t1=new QTimer;
    t1->setInterval(5000);

    QObject::connect(t1,&QTimer::timeout,
                    this,&MySongListModel ::sendSong);
    t1->start();
}
void MySongListModel::sendSong()
{
    qDebug()<<Q_FUNC_INFO<<"Sending song"<<Qt::endl;
    m_songList = new QList<QString>;
    for(int i=1;i<=100;i++)
    {
        m_songList->push_back("SongName_"+QString::number(i));
    }
    QList<QString>::iterator it;
    it= m_songList->begin();
    while(it!=m_songList->end())
    {
    emit dataComplete((*it));
    it++;
   // it->end();
    }
}
