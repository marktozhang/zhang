#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "poppler-qt5.h"

#include <QFileDialog>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle(tr("灏夏星辰 - 打开pdf文件"));

    this->setWindowIcon(QIcon(":/image/image/image.png"));

    ui->scrollArea->setFrameShape(QFrame::NoFrame); //设置滑动区域无边框
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpenPdf_triggered()
{
    /*********************************************************************************
     * 思路：
     * 将打开的pdf每页提取成图片，将每张图片放入一个label控件中，
     * 设置一个垂直布局，将多个label控件垂直起来放入widget
     * 然后将widget放入scrollArea控件中
     * *******************************************************************************/
    QString fileName = QFileDialog::getOpenFileName(this, tr("选择文件"), tr(""), tr("pdf文件 (*.pdf)"));

    if(fileName.isNull() || !fileName.contains(".pdf")) return;

    Poppler::Document * document = Poppler::Document::load(fileName); //将pdf文件加载进Document

    QWidget * widget = new QWidget(this);          

    QVBoxLayout *vboxLayout = new QVBoxLayout(this);

    for(int i = 0; i < document->numPages(); i ++)                 //根据获取到的pdf页数循环
    {
        QLabel * label = new QLabel(this);

        QImage image = document->page(i)->renderToImage(216, 216); //截取pdf文件中的相应图片

        label->setPixmap(QPixmap::fromImage(image));               //将该图片放进label中

        vboxLayout->addWidget(label);
        vboxLayout->setAlignment(widget,Qt::AlignCenter);
    }
    widget->setLayout(vboxLayout);     //设置布局

    ui->scrollArea->setWidget(widget); //设置widget
}
