#include "form.h"
#include "ui_form.h"
#include"widget.h"
#include"QDebug"
float arr_gailv[20][20];
int arr_qiyou[20][20];
QLineEdit** ui_gailv;
QLineEdit** ui_qiyou;
float **     arr_end;
#include<iostream>
using namespace std;
int arr_row=20;
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    int gezi_step=30;
    int num=arr_row;
    ui_gailv=new QLineEdit*[num];
    ui_qiyou=new QLineEdit*[num];
    arr_end=new float*[num];
    for(int i=0;i<num;i++)
    {
        ui_gailv[i]=new QLineEdit[num];
        ui_qiyou[i]=new QLineEdit[num];
        arr_end[i]=new float[num];
    }
    int step=700;


    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(i==j)
            {
                ui_gailv[i][j].setParent(this);
                ui_qiyou[i][j].setParent(this);
                ui_gailv[i][j].setText("0");
                ui_qiyou[i][j].setText("0");
                ui_gailv[i][j].setGeometry(j*gezi_step+30,i*gezi_step+30,gezi_step,gezi_step);
                ui_gailv[i][j].setStyleSheet("QLineEdit{background-color: rgb(255, 255, 255);;}");

                ui_gailv[i][j].show();
                ui_qiyou[i][j].setStyleSheet("QLineEdit{background-color: rgb(255, 255, 255);}");
                ui_qiyou[i][j].setGeometry(j*gezi_step+step+50+40,i* gezi_step+30,gezi_step,gezi_step);
                ui_qiyou[i][j].show();
                continue;
            }
            ui_gailv[i][j].setParent(this);
            ui_qiyou[i][j].setParent(this);
            ui_gailv[i][j].setGeometry(j*gezi_step+30,i*gezi_step+30,gezi_step,gezi_step);
            ui_gailv[i][j].setStyleSheet("QLineEdit{background-color: rgb(255, 255, 255);;}");
            ui_gailv[i][j].setText("∞");

            ui_gailv[i][j].show();
            ui_qiyou[i][j].setStyleSheet("QLineEdit{background-color: rgb(255, 255, 255);}");
            ui_qiyou[i][j].setGeometry(j*gezi_step+step+50+40,i* gezi_step+30,gezi_step,gezi_step);
            ui_qiyou[i][j].show();
            ui_qiyou[i][j].setText("∞");
        }
    }
    ui->weight_card->setText("0.5");
    ui->weight_oil->setText("1");
    ui->yiniz->setText("80");
}

Form::~Form()
{
    delete ui;
}
//接受信息
void Form::receive(int size)
{
    this->show();
    ui->size->setText(QString::number(size));
    for(int i=0;i<arr_row;i++)
    {
        for(int j=0;j<arr_row;j++)
        {
            if(i==j)
            {
                ui_gailv[i][j].setText("0");
                ui_qiyou[i][j].setText("0");
                continue;
            }
            ui_gailv[i][j].setText("1");
            ui_qiyou[i][j].setText("∞");
        }
    }
    on_pushButton_4_clicked();

    for(int i=0;i<size;i++)
    {
            QLabel *t=new QLabel(this);
            t->setGeometry(i*30+30,0,30,30);
            t->setText("v"+QString::number(i+1));
            t->show();
            t->setAlignment(Qt::AlignCenter);
            QLabel *t1=new QLabel(this);
            t1->setGeometry(0,i*30+30,30,30);
            t1->setText("v"+QString::number(i+1));
            t1->show();
            t1->setAlignment(Qt::AlignCenter);
            QLabel *t2=new QLabel(this);
            t2->setGeometry(i*30+790,0,30,30);
            t2->setText("v"+QString::number(i+1));
            t2->setAlignment(Qt::AlignCenter);
            t2->show();
            QLabel *t3=new QLabel(this);
            t3->setGeometry(760,i*30+30,30,30);
            t3->setText("v"+QString::number(i+1));
            t3->setAlignment(Qt::AlignCenter);
            t3->show();
    }
}
//设定最终矩阵
void Form::on_pushButton_clicked()
{
    float  yinzi=ui->yiniz->text().toFloat();
    float w1=ui->weight_card->text().toFloat();

    float w2=ui->weight_oil->text().toFloat();//原本消耗的占比
    for(int i=0;i<arr_row;i++)
    {
        for(int j=0;j<arr_row;j++)
        {
            if(i==j)
            {
               arr_qiyou[i][j]=0;

            }
            else
            {
                if(ui_qiyou[i][j].text()==QString("∞"))
                {

                    arr_qiyou[i][j]=100.0;
                }
                else
                {
                    arr_qiyou[i][j]=ui_qiyou[i][j].text().toInt();
                }
            }
        }
    }

   /* for(int i=0;i<arr_row;i++)
    {
        cout<<endl;
        for(int j=0;j<arr_row;j++)
        {
            cout<<arr_qiyou[i][j];
        }
    }*/
    for(int i=0;i<arr_row;i++)
    {
        for(int j=0;j<arr_row;j++)
        {
            arr_end[i][j]=arr_qiyou[i][j];
        }
    }
    for(int i=0;i<arr_row;i++)
    {
        for(int j=0;j<arr_row;j++)
        {
            if(i==j)
            {
                ;
            }
            else if(ui_gailv[i][j].text()==QString("1"))
            {
                ;
            }
            else//堵车概率修正矩阵
            {
                arr_gailv[i][j]=ui_gailv[i][j].text().toFloat();
                arr_end[i][j]=(int)(arr_qiyou[i][j]*w2+w1*arr_gailv[i][j]*yinzi);

            }
        }
    }







    this->hide();
    emit re(arr_end);
}
//保存函数
void Form::on_pushButton_2_clicked()
{
    for(int i=0;i<arr_row;i++)
    {
       // cout<<endl;
        for(int j=0;j<arr_row;j++)
        {
            if(ui_qiyou[i][j].text()==QString("∞"))
            {
                arr_qiyou[i][j]=100;
            }
            else
            {
                arr_qiyou[i][j]=ui_qiyou[i][j].text().toInt();
            }
            arr_gailv[i][j]=ui_gailv[i][j].text().toFloat();
        }
    }
    QString path=QCoreApplication::applicationDirPath();
    QString path2=QCoreApplication::applicationDirPath();
    path+="/gailv.txt";
    path2+="/qiyou.txt";
    FILE *file=fopen(path.toUtf8().data(),"wb");
    if(!file)
    {
      QMessageBox::information(this,"hi","file no");
      return ;
    }

    //写入
    fwrite(arr_gailv,sizeof(char),sizeof(float)*arr_row*arr_row,file);

    FILE *file2=fopen(path2.toUtf8().data(),"wb");
    if(!file2)
    {
        QMessageBox::information(this,"hi","file no");
        return;
    }
    else
    {
        ;
    }
    //xieru
    int len=0;
    len=fwrite(arr_qiyou,sizeof(char),sizeof(int)*arr_row*arr_row,file2);
    if(len)
    {
        qDebug()<<len;
        QMessageBox::information(this,"","完成");
    }
    else
    {
        QMessageBox::information(this,"","失败");
    }
    fclose(file2);
    fclose(file);
}

void Form::on_pushButton_3_clicked()
{

    for(int i=0;i<arr_row;i++)
    {
        for(int j=0;j<arr_row;j++)
        {
            arr_gailv[i][j]=0.0;
            arr_qiyou[i][j]=0;
        }
    }

    QString path=QCoreApplication::applicationDirPath();
    QString patdsh=QCoreApplication::applicationDirPath();
    path+="/gailv.txt";
    patdsh+="/qiyou.txt";

    FILE *file_gailv=fopen(path.toUtf8().data(),"rb");
    FILE *file_qiyou=fopen(patdsh.toUtf8().data(),"rb");
    if((file_gailv)&&(file_qiyou))
    {
        int len =0;
        len=fread(arr_gailv,sizeof(float),sizeof(float)*arr_row*arr_row,file_gailv);
        len=fread(arr_qiyou,sizeof(int),sizeof(int)*arr_row*arr_row,file_qiyou);
        for(int i=0;i<arr_row;i++)
        {
            for(int j=0;j<arr_row;j++)
            {
                if(i==j)
                {
                    ui_gailv[i][j].setText("0");
                    ui_qiyou[i][j].setText("0");
                }
                else
                {
                    if(QString::number(arr_qiyou[i][j])==QString::number(100))
                    {
                        ui_qiyou[i][j].setText("∞");
                    }
                    else
                    {
                        ui_qiyou[i][j].setText(QString::number(arr_qiyou[i][j]));
                    }
                    ui_gailv[i][j].setText(QString::number(arr_gailv[i][j]));
                }
            }
        }
    }
    fclose(file_gailv);
    fclose(file_qiyou);
}

void Form::on_pushButton_4_clicked()
{
    int size=ui->size->text().toInt();
    for(int i=0;i<arr_row;i++)
    {
        for(int j=0;j<arr_row;j++)
        {
            ui_gailv[i][j].hide();
            ui_qiyou[i][j].hide();
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            ui_gailv[i][j].show();
            ui_qiyou[i][j].show();
        }
    }
}
