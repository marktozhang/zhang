#ifndef DTU_H
#define DTU_H

#include <QThread>
#include<windows.h>


class DTU : public QThread
{
    Q_OBJECT
public:
    explicit DTU(QObject *parent = 0);
    DTU(SOCKET socket=INVALID_SOCKET,QString uid="");
    SOCKET socket;//使用的socket
    void exepro();
    void adddevice();
    int NUMBER;//表中编号
    QString  UID;//产品编号

    void ExitTHREAD();
signals:

public slots:

protected:
    void run();
};

#endif // DTU_H
