#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMimeData>
#include<QDebug>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setAcceptDrops(true);//接受拖放
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
    event->acceptProposedAction();
}

void MainWindow::dropEvent(QDropEvent *event)
{
    QList<QUrl> urls = event->mimeData()->urls();
    if (urls.isEmpty()) return ;
    QString path = urls.first().toLocalFile();
    QImage image(path); // QImage对I/O优化过, QPixmap对显示优化
    if (!image.isNull())
    {
        image = image.scaled(ui->label->size(),
        Qt::KeepAspectRatio,
        Qt::SmoothTransformation);
        ui->label->setPixmap(QPixmap::fromImage(image));
    }
    else
    {
        QMessageBox::information(this,"提示","放入图片失败");
    }
}
