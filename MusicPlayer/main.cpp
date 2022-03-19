#include "MyWidget.h"
#include"MyPlayerManager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();

    MyPlayerManager *m=new MyPlayerManager;
    m->display();
    return a.exec();
}
