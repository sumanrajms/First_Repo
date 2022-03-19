#ifndef MYPLAYERMANAGER_H
#define MYPLAYERMANAGER_H
#include"MyPlayer.h"
#include "MySongListModel.h"
#include <QObject>

class MyPlayerManager : public QObject
{
    Q_OBJECT
public:
    explicit MyPlayerManager(QObject *parent = nullptr);
    void display();
signals:

private:
    MyPlayer *m_mp;
    MySongListModel *m_mslm;
};

#endif // MYPLAYERMANAGER_H
