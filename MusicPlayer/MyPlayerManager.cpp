#include "MyPlayer.h"
#include "MyPlayerManager.h"
#include<QDebug>
#include <MySongListModel.h>

MyPlayerManager::MyPlayerManager(QObject *parent)
    : QObject{parent}
{
    qDebug()<<Q_FUNC_INFO<<"Constructor"<<Qt::endl;
}
void MyPlayerManager::display()
{
    m_mslm=new MySongListModel;
    m_mp=new MyPlayer;
    m_mslm->setObjectName("SongList");
    QObject :: connect(m_mslm,&MySongListModel::dataComplete,
                      m_mp,&MyPlayer::playSong );
}

