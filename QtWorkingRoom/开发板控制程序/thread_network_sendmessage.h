#ifndef THREAD_NETWORK_SENDMESSAGE_H
#define THREAD_NETWORK_SENDMESSAGE_H

#include <QThread>
#include"thread_network.h"
class thread_network_sendmessage : public QThread
{
    Q_OBJECT
public:
    explicit thread_network_sendmessage(QObject *parent = 0);

signals:

public slots:

};

#endif // THREAD_NETWORK_SENDMESSAGE_H
