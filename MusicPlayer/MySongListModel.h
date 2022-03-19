#ifndef MYSONGLISTMODEL_H
#define MYSONGLISTMODEL_H
#include<QString>
#include <QObject>


class MySongListModel : public QObject
{
    Q_OBJECT
public:
    explicit MySongListModel(QObject *parent = nullptr);
    void init();
signals:
    void dataComplete(QString);
public slots:
    void sendSong();
private:
    QList<QString> *m_songList;
};

#endif // MYSONGLISTMODEL_H
