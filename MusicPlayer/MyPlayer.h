#ifndef MYPLAYER_H
#define MYPLAYER_H

#include <QObject>

class MyPlayer : public QObject
{
    Q_OBJECT
public:
    explicit MyPlayer(QObject *parent = nullptr);
public slots:
    void playSong(QString val);
signals:
};

#endif // MYPLAYER_H
