#include "widget.h"
#include "ui_widget.h"
Plabel *  h98dsa8;
QLineEdit **quan;
MGRAGH G;
int step;
int issis;


int *SPFA_visit;//表标记数组
int *SPFA_path;//路径记录
int *SPFA_dist;//最短路径
int *rudui_num;
int SPFA_source;//源点

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit_init->setText("1");
    pix_down.load(":/down.png");
    pix_up.load(":/up.png");
    pix_right.load(":/right.png");
    pix_left.load(":/left.png");
    G.num_arc=0;
    G.num_v=0;
    h98dsa8=new Plabel[G.num_v];
    freshenTime=new QTimer(this);
    connect(freshenTime,&QTimer::timeout,[=]()
    {
               this->repaint();
    });
    freshenTime->start(1000);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{


    int wdd=15;
    int  hdd=5;

        if(issis)
        {
            QPainter pai(this);
           // pai.setPen(Qt::red);
            QBrush brush;
            brush.setColor(Qt::black);
        QColor   SD;
        SD.setRgb(255,100,100);
            pai.setBrush(SD);


            for(int i=0;i<G.num_v;i++)
            {
                for(int j=0;j<G.num_v;j++)
                {
                    if(G.array_arc[i][j].weight!=MAV&&G.array_arc[i][j].weight)
                    {
                        int x1=G.vertex[i].j*step,y1=G.vertex[i].i*step,x2=G.vertex[j].j*step,y2=G.vertex[j].i*step;

                     //   pai.drawLine(x1,y1,x2,y2);
                        //int k=(y2-y1)/(x2-x1);

                        if(y2==y1)
                        {
                            if(x1<x2)
                             {
                                 pai.drawLine(x1,y1+20,x2,y2+20);
                                QPoint g[3]={QPoint(x2-wdd,y2+hdd+20),QPoint(x2-wdd,y2-hdd+20),QPoint(x2,y2+20)};
                                QPainterPath  path;
                                QPolygon F;
                                F.append(g[0]);
                                F.append(g[1]);
                                F.append(g[2]);
                                path.addPolygon(F);
                                pai.fillPath(path,brush);
                                pai.drawPolygon(g,3);
                             }
                            else
                              {
     pai.drawLine(x1,y1+20,x2,y2+20);
                                QPoint g[3]={QPoint(x2+wdd+40,y2+hdd+20),QPoint(x2+wdd+40,y2-hdd+20),QPoint(x2+40,y2+20)};
                                QPainterPath  path;
                                QPolygon F;
                                F.append(g[0]);
                                F.append(g[1]);
                                F.append(g[2]);
                                path.addPolygon(F);
                                pai.fillPath(path,brush);
                               pai.drawPolygon(g,3);
                                }
                        }
                        else if(x2==x1)
                        {
                            if(y1<y2)
                             {
                                 pai.drawLine(x1+20,y1+40,x2+20,y2);
                                 int by=20;
                                 int by2=40;
                                QPoint g[3]={QPoint(x2+by-5,y2-10),QPoint(x2+by+5,y2-10),QPoint(x2+by,y2)};
                                pai.drawPolygon(g,3);
                             }
                            else
                              {
 pai.drawLine(x1+20,y1,x2+20,y2+40);
 int by=20;
 int by2=40;
                                QPoint g[3]={QPoint(x2-5+by,y2+by2+10),QPoint(x2+5+by,y2+by2+10),QPoint(x2+by,y2+by2)};
                                 pai.drawPolygon(g,3);
                            }
                        }
                        else if(x2>x1&&y2>y1)
                        {
                                pai.drawLine(x1+20,y1+20,x2,y2);
                                QPoint g[3]={QPoint(x2-10,y2-5),QPoint(x2-5,y2-10),QPoint(x2,y2)};
                                pai.drawPolygon(g,3);
                        }
                        else if(x2<x1&&y2<y1)
                        {
                            x2+=20;
                            y2+=20;
                             pai.drawLine(x1,y1,x2+40,y2+40);
                             int k=18;
                                QPoint g[3]={QPoint(x2+k,y2+k),QPoint(x2+k+10,y2+k+5),QPoint(x2+k+5,y2+k+10)};
                                pai.drawPolygon(g,3);
                        }
                        else if(x2>x1&&y2<y1)
                        {

                                pai.drawLine(x1+40,y1,x2,y2+40);
                                QPoint g[3]={QPoint(x2-5,y2+40+10),QPoint(x2-10,y2+5+40),QPoint(x2,y2+40)};
                                pai.drawPolygon(g,3);
                        }
                        else if(x2<x1&&y2>y1)
                        {
                            pai.drawLine(x1,y1+40,x2+40,y2);
        int k=40;
                                QPoint g[3]={QPoint(x2+5+k,y2-10),QPoint(x2+k+10,y2-5),QPoint(x2+k,y2)};
                                pai.drawPolygon(g,3);
                        }


                     }

                  }
            }
            issis=0;
        }

}
//设定最终矩阵
void Widget::receive(float ** arr_end)
{



    this->show();
    for(int i=0;i<G.num_v;i++)
    {
        for(int j=0;j<G.num_v;j++)
        {

            if(i==j)
            {
                quan[i][j].setText("0");
                quan[i][j].show();
            }
            if(QString::number(arr_end[i][j])==QString("100"))
            {
                quan[i][j].setText("∞");
                quan[i][j].show();
            }
            else
            {
                quan[i][j].setText(QString::number(arr_end[i][j]));
                quan[i][j].show();
            }
        }
    }
    this->repaint();


}

void Widget::setbutton()
{
    QPushButton*btn = qobject_cast<QPushButton*>(sender());
    btn->setStyleSheet("QPushButton{border-style:solid;  border-width:4px;background-color: rgb(255, 255, 255);border-radius:17px;border-color: rgb(170, 255, 255);color:rgb(255,0,0);font-size:20px;}");
    QPoint  da=this->pos();
    int x=cursor().pos().x()-da.x()-10;
    int y=cursor().pos().y()-da.y()-40;
    G.vertex[G.num_v].i=y/step;
    G.vertex[G.num_v].j=x/step;
    G.vertex[G.num_v].number=(G.num_v+1);
    G.num_v++;
    btn->setText(QString::number(G.num_v));
    ui->label_number->setText(QString::number(G.num_v));
}


void Widget::on_pushButton_init_clicked()
{
    int g=(ui->lineEdit_init->text()).toInt();
    step=720/(g-1);
    int count=0;
    for(int i=0;i<g;i++)
    {
        for(int j=0;j<g;j++)
        {
            button=new QPushButton(this);
            button->setText("∞");
            button->setStyleSheet("QPushButton{border-style:solid;  border-width:4px;background-color: rgb(255, 255, 255);border-radius:17px;border-color: rgb(170, 255, 255);}");
            connect(button,SIGNAL(pressed()),this,SLOT(setbutton()));
            button->setGeometry(j*step,i*step,40,40);
            button->show();
        }
    }
    G.vertex=new VERTEX[1000];
}

//完成选点

void Widget::on_pushButton_wcxd_clicked()
{



    for(int i=0;i<G.num_v;i++)
    {
        QLabel *a=new QLabel(this);
        a->setGeometry(750,200+i*20,30,20);
        a->setText("v"+QString::number(i+1));
        a->show();
        QLabel *b=new QLabel(this);
        b->setGeometry(780+i*30,180,30,20);
        b->setText("v"+QString::number(i+1));
        b->show();
    }
    quan=new QLineEdit*[G.num_v];
    G.array_arc=new ARC*[G.num_v];

    for(int j=0;j<G.num_v;j++)
    {
        quan[j]=new QLineEdit[G.num_v];
         G.array_arc[j]=new ARC[G.num_v];
    }


    for(int i=0;i<G.num_v;i++)
    {
        for(int j=0;j<G.num_v;j++)
        {
            quan[i][j].setParent(this);

            quan[i][j].setStyleSheet("QLineEdit{background-color:rgb(255,255,255);}");
            quan[i][j].setGeometry(770+j*30,200+i*20,30,20);
            quan[i][j].show();
            if(i==j)
            {
                quan[i][j].setText("∞");
            }
            else
            {
                 quan[i][j].setText("0");
            }
        }
    }



}
//权值初始化
void Widget::on_pushButton_qz_clicked()
{

    for(int i=0;i<G.num_v;i++)
    {
        for(int j=0;j<G.num_v;j++)
        {
            if(quan[i][j].text()==QString("∞"))
            {
                G.array_arc[i][j].weight=MAV;
            }
            else
            {
                 G.array_arc[i][j].weight=quan[i][j].text().toInt();
            }

            if(G.array_arc[i][j].weight&&G.array_arc[i][j].weight!=MAV)
            {
                G.array_arc[i][j].start=i+1;
                G.array_arc[i][j].end=j+1;
                G.num_arc++;
            }
            else
            {
                G.array_arc[i][j].start=0;
                G.array_arc[i][j].end=0;
            }
        }
    }
    QMessageBox::information(this,"","wcqz");
}

void Widget::on_showquan_clicked()
{
    issis=1;
    for(int i=0;i<G.num_v;i++)
    {
        for(int j=0;j<G.num_v;j++)
        {
            if(quan[i][j].text()==QString("∞"))
            {
                G.array_arc[i][j].weight=MAV;
            }
            else
            {
                 G.array_arc[i][j].weight=quan[i][j].text().toInt();
            }

            if(G.array_arc[i][j].weight&&G.array_arc[i][j].weight!=MAV)
            {
                G.array_arc[i][j].start=i+1;
                G.array_arc[i][j].end=j+1;
                G.num_arc++;
            }
            else
            {
                G.array_arc[i][j].start=0;
                G.array_arc[i][j].end=0;
            }
        }
    }
/*
    qDebug()<<"权值";
    for(int i=0;i<G.num_v;i++)
    {
        cout<<endl;
        for(int j=0;j<G.num_v;j++)
        {
            cout<<G.array_arc[i][j].weight<<" ";
        }
    }
*/
    this->repaint();
}

void Widget::on_pushButton_dksl_clicked()
{

        ;

}
void Widget::Dijkstra(int v0,int g)
{
    int cishu=0;
    int* dis_min = new int[G.num_v];
    int* sign_isVisit = new int[G.num_v];
    int*  parentVertex = new int[G.num_v];
    //通路
    //临时标号组
    for (int i = 0; i <G.num_v; i++)
    {
        dis_min[i] = G.array_arc[v0][i].weight;
        sign_isVisit[i] = false;
        if (dis_min[i] < MAV)parentVertex[i] = v0;
        else parentVertex[i] = -1;
    }
    int position = 0;
    for (int i = 0; i < G.num_v; i++)
    {
        for (int j = 0; j < G.num_v;j++)
        {
            if(G.array_arc[i][j].weight&&G.array_arc[i][j].weight!=MAV)
            {
                if(G.array_arc[i][j].weight<0)
                {
                    QMessageBox::information(this,"dsa565621","you负权");
                    return ;
                }
            }
        }
    }
    for (int i = 0; i < G.num_v; i++)
    {
        // 找出最小权值，记录为拜访状态
        int min = MAV;
        for (int i = 0; i < G.num_v; i++)
        {
            cishu++;
            if (sign_isVisit[i] == 0 && dis_min[i] < min&&dis_min[i])
            {
                min = dis_min[i];
                position = i;
            }
        }
        //最短距离
         //以已求的路劲的集合S 未求的路径的集合U
        sign_isVisit[position] = true;//标记为已拜访过

        //松弛一下T(vj)=min{T(vj),P(vi)+Lij};
        for (int i = 0; i < G.num_v; i++)
        {
             cishu++;
            if ((!sign_isVisit[i]) && G.array_arc[position][i].weight < MAV)
            {
                if (dis_min[position] + G.array_arc[position][i].weight < dis_min[i])
                {
                    dis_min[i] = dis_min[position] + G.array_arc[position][i].weight;
                    parentVertex[i] = position;
                }
            }
        }
        ui->h23ad->append("第"+QString::number(i+1)+"轮"+"\n");
        for (int d = 0; d < G.num_v; d++)
        {
            ui->h23ad->append(QString::number(d+1)+"对应最优值"+QString::number(dis_min[d]));
        }
    }
    int i = g;
    ui->textEdit_dasd->append("尾 ："+QString::number(g+1));
    while(true)
    {
        if(parentVertex[i]==v0)
        {
            ui->textEdit_dasd->append("上一个 ："+QString::number(v0+1));
            break;
        }
        i=parentVertex[i];
        ui->textEdit_dasd->append("上一个 ："+QString::number(i+1));
    }

    ui->shobb->append("迪克斯拉算法次数"+QString::number(cishu));



    QList<QPushButton*>  bu=this->findChildren<QPushButton*>();
    foreach(QPushButton*  t,bu)
    {
            qDebug()<<t;
            qDebug()<<t->text();
            if(t->text()==QString::number(g+1))
            {
                qDebug()<<"找到孩子";
                QLabel* kd=new QLabel(this);
                kd->setStyleSheet("QLabel{background-color: rgb(255, 170, 127);}");
                kd->show();

                kd->setGeometry(t->x()+20,t->y()-20,30,30);
                kd->setText(QString::number(dis_min[g]));
                break;
            }
    }


}

void Widget::Ford(int source,int dsad)
{
    /*
        第一，初始化所有点。每一个点保存一个值，表示从原点到达这个点的距离，将原点的值设为0，其它的点的值设为无穷大（表示不可达）。
        第二，进行循环，循环下标为从1到n－1（n等于图中点的个数）。在循环内部，遍历所有的边，进行松弛计算。
        第三，遍历途中所有的边（edge（u，v）），判断是否存在这样情况：
        d（v） > d (u) + w(u,v)
    */
    int   cishu=0;
    int* dist=new  int[G.num_v];//带权顶点==============
    for(int i=0;i<G.num_v;i++)
    {
        dist[i]=MAV;
    }
    dist[source]=0;
    int asd=0;
    for(int i=0;i<G.num_v;i++)
    {
        for(int j=0;j<G.num_v;j++)
        {
            if(G.array_arc[i][j].weight&&G.array_arc[i][j].weight!=MAV)
            {
                asd++;
            }
        }
    }
    G.num_arc=asd;
    int *hsjaj90=new int[G.num_v];

    for(int i=0;i<G.num_v;i++)
    {
        hsjaj90[i]=i;
    }
    ARC *edge=new ARC[asd];
    int klkl=0;
    for(int i=0;i<G.num_v;i++)
    {
        for(int j=0;j<G.num_v;j++)
        {

            if(G.array_arc[i][j].weight&&G.array_arc[i][j].weight!=MAV)
            {
               edge[klkl].end=G.array_arc[i][j].end;
               edge[klkl].start=G.array_arc[i][j].start;
               edge[klkl].weight=G.array_arc[i][j].weight;
               klkl++;
            }
        }
    }

    for(int i=0;i<G.num_v;i++)
    {
        ui->h23ad->append("初始轮");
        ui->h23ad->append("顶点："+QString::number(i+1)+"权值"+QString::number(dist[i]));
    }


    for(int i=0; i<G.num_v; ++i)
    {

        h98dsa8[i]=new QLabel(this);
        h98dsa8[i]->setStyleSheet("QLabel{background-color: rgb(255, 170, 127);color: rgb(0, 0, 0);}");
        h98dsa8[i]->setGeometry(G.vertex[i].j*step+20,G.vertex[i].i*step,40,20);
        if(dist[i]==MAV||dist[i]==0)
        {
            h98dsa8[i]->setText("∞");
        }
        else
        {
            h98dsa8[i]->setText(QString::number(dist[i]));
        }
        h98dsa8[i]->show();
    }



    for(int i=0; i<G.num_v-1; ++i)//无回路
    {
        for(int j=0; j<G.num_arc; ++j)
        {
            cishu++;
            if(dist[edge[j].end-1] > dist[edge[j].start-1] + edge[j].weight)
            {
                    dist[edge[j].end-1] = dist[edge[j].start-1]+edge[j].weight;
                    hsjaj90[edge[j].end-1]=edge[j].start-1;
            }
        }
        ui->h23ad->append(QString::number(i+1)+"轮");
        for(int i=0;i<G.num_v;i++)
        {
            ui->h23ad->append("顶点："+QString::number(i+1)+"权值"+QString::number(dist[i]));
        }
        for(int i=0; i<G.num_v; ++i)//无回路
        {
            h98dsa8[i]->setText(QString::number(dist[i]));
            h98dsa8[i]->show();
        }
    }

    for(int j=0;j<G.num_arc;j++)
    {
        if(dist[edge[j].end-1] > dist[edge[j].start-1] + edge[j].weight)
        {
            QMessageBox::information(this,"dsasad51","有负回路，算法失效");
            return ;
        }
    }

    for(int i=0;i<G.num_v;i++)
    {
       ui->textEdit_dasd->append(QString::number(i+1)+"点:路径:");
       int pre=hsjaj90[i];
       QStringList  asdasd;
       int  kk;
       for(int j=0;j<G.num_v;j++)
       {
            if(i+1==pre+1)
            {
                ui->textEdit_dasd->append("无效");
            }
            else
            {
               asdasd.append(QString::number(pre+1));

            }
            if(pre==source)
            {
                break;
            }
            if(pre==hsjaj90[pre])
            {
                break;
            }
            pre=hsjaj90[pre];
       }

       for(int i=asdasd.count()-1;i>-1;i--)
       {
           ui->textEdit_dasd->append(asdasd.at(i)+"->");
       }
       ui->textEdit_dasd->append(QString::number(i+1));
    }
    ui->shobb->append("ford算法迭代次数: "+QString::number(cishu));
}

int  Widget::SPFA()
{

    SPFA_visit=new int[G.num_v];
    SPFA_dist=new int[G.num_v];
    SPFA_path=new int[G.num_v];
    for(int i=0;i<G.num_v;i++)
    {
        SPFA_dist[i]=MAV;
        SPFA_path[i]=SPFA_source;
        SPFA_visit[i]=0;
    }
    queue<int> Q;
    Q.push(SPFA_source);
    SPFA_dist[SPFA_source]=0;
    SPFA_visit[SPFA_source]=1;
    int cishu=0;
    int lunshu=0;
    rudui_num=new int[G.num_v];
    rudui_num[SPFA_source]++;

    while(!Q.empty())
    {

       int i=Q.front();
       Q.pop();
       SPFA_visit[i]=false;//记拜访
       lunshu++;
       ui->h23ad->append("轮数："+QString::number(lunshu));
qDebug()<<"2";
       for(int j=0;j<G.num_v;j++)
       {
          if(G.array_arc[i][j].weight!=MAV)//i与j邻接
          {
             if(SPFA_dist[i]+G.array_arc[i][j].weight< SPFA_dist[j])
             {
                SPFA_dist[j]=SPFA_dist[i]+G.array_arc[i][j].weight;
                SPFA_path[j]=i;
                cishu++;
                if(!SPFA_visit[j])//为拜访的加入数组
                {
                    Q.push(j);
                    rudui_num[j]++;
                    if(rudui_num[j]>=G.num_v)
                    {
                        return 0;
                    }
                    SPFA_visit[i]=1;
                }
             }
          }
      }
       qDebug()<<"3";
       for(int i=0;i<G.num_v;i++)
       {
           ui->h23ad->append(QString::number(SPFA_path[i]+1));
       }
       qDebug()<<"4"<<GetLastError();
    }
     qDebug()<<"5";
    ui->h23ad->append(QString("最终轮："));
    for(int i=0;i<G.num_v;i++)
    {
        ui->h23ad->append(QString::number(SPFA_path[i]+1));
    }
    qDebug()<<"6";
    ui->shobb->append("spfa算法次数:"+QString::number(cishu));

        qDebug()<<"a";
    QStringList  asdkl;
    for(int i=0;i<G.num_v;i++)
    {
        asdkl.clear();
        asdkl.append(QString::number(i+1));
        int t=i;
        qDebug()<<t+1;
        while(t!=SPFA_source)
        {
            t=SPFA_path[t];
            asdkl.append(QString::number(t+1));
            qDebug()<<t+1;
        }
        qDebug()<<"间隔";
        if(asdkl.size()==1)
        {
            ui->textEdit_dasd->append(asdkl.at(0)+"对自身无效");
        }
        else
        {
            for(int i=asdkl.size()-1;i>-1;i--)
            {
                if(i==asdkl.size()-1)
                {
                    ui->textEdit_dasd->append("源点："+asdkl.at(i));
                }
                else
                {
                    ui->textEdit_dasd->append("->"+asdkl.at(i));
                }
            }
        }
    }
    for(int i=0; i<G.num_v; ++i)
    {
        QLabel* gh =new QLabel(this);
        gh->setStyleSheet("QLabel{background-color: rgb(255, 170, 127);color: rgb(0, 0, 0);}");

        gh->setGeometry(G.vertex[i].j*step+20,G.vertex[i].i*step,40,20);
        if(SPFA_dist[i]==MAV||SPFA_dist[i]==0)
        {
            gh->setText("∞");
        }
        else
        {
            gh->setText(QString::number(SPFA_dist[i]));
        }
        gh->show();
    }
    return true;
}



void Widget::on_pushButton_clicked()
{

    QLabel *a=new QLabel(this);
    a->setGeometry(1300,20,100,20);
    a->setText("startV:");
    a->show();
    QLineEdit *b=new QLineEdit(this);
    b->setGeometry(1300,20,20,20);
    b->show();
    QLabel *c=new QLabel(this);
    c->setGeometry(1300,60,100,20);
    c->setText("endV:");
    c->show();
    QLineEdit *d=new QLineEdit(this);
    d->setGeometry(1300,80,20,20);
    d->show();
    QPushButton* jj=new QPushButton(this);
    jj->setGeometry(1300,100,30,30);
    jj->setText("ok");
    jj->show();
    connect(jj,&QPushButton::released,[=]()
    {
        int t=b->text().toInt();
        int k=d->text().toInt();
        Dijkstra(t-1,k-1);
    });
}
//保存函数
void Widget::on_pushButton_5_clicked()
{
    QString path=QCoreApplication::applicationDirPath();
    QString patdsh=QCoreApplication::applicationDirPath();
    path+="/fu.txt";
    patdsh+="/fu2.txt";
    int dsad4445sa=0;
     FILE *file=fopen(path.toUtf8().data(),"wb");
     char  *dasda=(char*)&G.num_v;
     int dasd890=ui->lineEdit_init->text().toInt();
     char*dasksdak99=(char*)&dasd890;
    if(!file)
    {
      QMessageBox::information(this,"hi","file no");
    }
    if(file)
    {
        int len=fwrite(dasda,sizeof(char),sizeof(int),file);
        fwrite(dasksdak99,sizeof(char),sizeof(int),file);
        if(len==sizeof(int))
        {
           dsad4445sa=1;
        }
    }
    FILE *dsadd1=fopen(patdsh.toUtf8().data(),"wb");
    char  *dasdddda=(char*)G.array_arc;
    if(dsadd1)
    {
        char *dsa678jhi=(char*)G.vertex;
        fwrite(dsa678jhi,sizeof(char),sizeof(VERTEX)*G.num_v,dsadd1);
        for(int i=0;i<G.num_v;i++)
        {
            char  *dasdddda=(char*)G.array_arc[i];
            int len=fwrite(dasdddda,sizeof(char),sizeof(int)*3*G.num_v,dsadd1);
        }
         if(dsad4445sa)
         {
                    QMessageBox::information(this,"hi","saveok");
         }
    }

   fclose(dsadd1);
   fclose(file);

}

void Widget::on_pushButton_4_clicked()
{


    /*
    QString path=QCoreApplication::applicationDirPath();
    QString patdsh=QCoreApplication::applicationDirPath();
    path+="/1.txt";
    patdsh+="/2.txt";
    int dsad4445sa=0;
    FILE *file=fopen(path.toUtf8().data(),"rb");

    char dasda[45];
    if(!file)
    {
      QMessageBox::information(this,"hi","file no");
    }
    if(file)
    {
        int len=fread(dasda,sizeof(char),sizeof(int)*2,file);
        if(len==sizeof(int))
        {
             dsad4445sa=1;
        }
    }
    memcpy(&G.num_v,dasda,sizeof(int));
    int fdsjnask78;
    memcpy(&fdsjnask78,&(*(dasda+sizeof(int))),sizeof(int));
    //qDebug()<<"ds"<<G.num_v;
    //qDebug()<<"大小"<<fdsjnask78;
    ui->lineEdit_init->setText(QString::number(fdsjnask78));
    step=720/(fdsjnask78-1);
    //初始化
    for(int i=0;i<G.num_v;i++)
    {
        QLabel *a=new QLabel(this);
        a->setGeometry(750,200+i*20,30,20);
        a->setText("v"+QString::number(i+1));
        a->show();
        QLabel *b=new QLabel(this);
        b->setGeometry(780+i*30,180,30,20);
        b->setText("v"+QString::number(i+1));
        b->show();
    }

    quan=new QLineEdit*[G.num_v];
    G.array_arc=new ARC*[G.num_v];
    for(int j=0;j<G.num_v;j++)
    {
        quan[j]=new QLineEdit[G.num_v];
        G.array_arc[j]=new ARC[G.num_v];
    }

    G.vertex=new VERTEX[1000];
    FILE *dsadd1=fopen(patdsh.toUtf8().data(),"rb");
     char* dasda55665[12];

    if(dsadd1)
    {
        char* asjkdk8890=new char[G.num_v*sizeof(VERTEX)];
        fread(asjkdk8890,sizeof(char),sizeof(VERTEX)*G.num_v,dsadd1);
        memcpy(G.vertex,asjkdk8890,G.num_v*sizeof(VERTEX));
        for(int i=0;i<G.num_v;i++)
        {
            for(int j=0;j<G.num_v;j++)
            {
                fread(dasda55665,sizeof(char),sizeof(int),dsadd1);
                memcpy(&G.array_arc[i][j].weight,dasda55665,sizeof(int));
                memset(dasda55665,0,sizeof(int));
                fread(dasda55665,sizeof(char),sizeof(int),dsadd1);
                memcpy(&G.array_arc[i][j].start,dasda55665,sizeof(int));
                memset(dasda55665,0,sizeof(int));
                fread(dasda55665,sizeof(char),sizeof(int),dsadd1);
                memcpy(&G.array_arc[i][j].end,dasda55665,sizeof(int));
            }
        }
         if(dsad4445sa)
         {
                    QMessageBox::information(this,"hi","saveok");
           }
    }

    for(int i=0;i<G.num_v;i++)
    {
        for(int j=0;j<G.num_v;j++)
        {
            quan[i][j].setParent(this);
            quan[i][j].setGeometry(770+j*30,200+i*20,30,20);
            quan[i][j].show();
            if(i==j)
            {
                quan[i][j].setText("0");
            }

            if(QString::number(G.array_arc[i][j].weight)==QString("100"))
            {
                quan[i][j].setText("∞");
                quan[i][j].show();
            }
            else
            {
                quan[i][j].setText(QString::number(G.array_arc[i][j].weight));
                quan[i][j].show();
            }
        }
    }

    int dsa89=0;
    for(int i=0;i<fdsjnask78;i++)
    {
        for(int j=0;j<fdsjnask78;j++)
        {
            button=new QPushButton(this);
            for(int k=0;k<G.num_v;k++)
            {
                if(G.vertex[k].i==i&&G.vertex[k].j==j)
                {

                    button->setStyleSheet("QPushButton{color: rgb(180, 0, 0);background-color: rgb(85, 255, 127);}");
                    button->setText(QString::number(G.vertex[k].number));
                    button->setGeometry(G.vertex[k].j*step,G.vertex[k].i*step,20,20);
                    button->show();
                    dsa89=1;
                    break;
                }
            }
            if(dsa89)
            {
                dsa89=0;
                continue;
            }
            button->setText("∞");
            connect(button,SIGNAL(pressed()),this,SLOT(setbutton()));
            button->setGeometry(j*step,i*step,20,20);
            button->show();

        }
    }

    fclose(dsadd1);
    fclose(file);*/
}

void Widget::on_pushButton_2_clicked()
{

        ;



}

void Widget::on_pushButton_3_clicked()
{
        ui->SPFA_txt->show();
        ui->SPFA_button->show();
        ui->dsadada54->show();
}

void Widget::on_SPFA_button_clicked()
{
    int value=ui->SPFA_txt->text().toInt();
    SPFA_source=value-1;
    SPFA();

}

void Widget::on_pushButton_6_clicked()
{
    QString path=QCoreApplication::applicationDirPath();
    QString patdsh=QCoreApplication::applicationDirPath();
    path+="/fu.txt";
    patdsh+="/fu2.txt";
    int dsad4445sa=0;
    FILE *file=fopen(path.toUtf8().data(),"rb");

    char dasda[45];
    if(!file)
    {
      QMessageBox::information(this,"hi","file no");
    }
    if(file)
    {
        int len=fread(dasda,sizeof(char),sizeof(int)*2,file);
        if(len==sizeof(int))
        {
             dsad4445sa=1;
        }
    }
    memcpy(&G.num_v,dasda,sizeof(int));
    int fdsjnask78;
    memcpy(&fdsjnask78,&(*(dasda+sizeof(int))),sizeof(int));
    //qDebug()<<"ds"<<G.num_v;
    //qDebug()<<"大小"<<fdsjnask78;
    ui->lineEdit_init->setText(QString::number(fdsjnask78));
    step=720/(fdsjnask78-1);
    //初始化
    for(int i=0;i<G.num_v;i++)
    {
        QLabel *a=new QLabel(this);
        a->setGeometry(750,200+i*20,30,20);
        a->setText("v"+QString::number(i+1));
        a->show();
        QLabel *b=new QLabel(this);
        b->setGeometry(780+i*30,180,30,20);
        b->setText("v"+QString::number(i+1));
        b->show();
    }

    quan=new QLineEdit*[G.num_v];
    G.array_arc=new ARC*[G.num_v];
    for(int j=0;j<G.num_v;j++)
    {
        quan[j]=new QLineEdit[G.num_v];
        G.array_arc[j]=new ARC[G.num_v];
    }

    G.vertex=new VERTEX[1000];
    FILE *dsadd1=fopen(patdsh.toUtf8().data(),"rb");
     char* dasda55665[12];

    if(dsadd1)
    {

        char* asjkdk8890=new char[G.num_v*sizeof(VERTEX)];
        fread(asjkdk8890,sizeof(char),sizeof(VERTEX)*G.num_v,dsadd1);
        memcpy(G.vertex,asjkdk8890,G.num_v*sizeof(VERTEX));
        for(int i=0;i<G.num_v;i++)
        {
            for(int j=0;j<G.num_v;j++)
            {
                fread(dasda55665,sizeof(char),sizeof(int),dsadd1);
                memcpy(&G.array_arc[i][j].weight,dasda55665,sizeof(int));
                memset(dasda55665,0,sizeof(int));

                fread(dasda55665,sizeof(char),sizeof(int),dsadd1);
                memcpy(&G.array_arc[i][j].start,dasda55665,sizeof(int));
                memset(dasda55665,0,sizeof(int));

                fread(dasda55665,sizeof(char),sizeof(int),dsadd1);
                memcpy(&G.array_arc[i][j].end,dasda55665,sizeof(int));
            }
        }
         if(dsad4445sa)
         {
                    QMessageBox::information(this,"hi","saveok");
           }
    }

    for(int i=0;i<G.num_v;i++)
    {
        for(int j=0;j<G.num_v;j++)
        {
            quan[i][j].setParent(this);
            quan[i][j].setGeometry(770+j*30,200+i*20,30,20);
            quan[i][j].setStyleSheet("QLineEdit{background-color:rgb(255,255,255);}");
            quan[i][j].show();
            if(i==j)
            {
                quan[i][j].setText("0");
            }

            if(QString::number(G.array_arc[i][j].weight)==QString("100"))
            {
                quan[i][j].setText("∞");
                quan[i][j].show();
            }
            else
            {
                quan[i][j].setText(QString::number(G.array_arc[i][j].weight));
                quan[i][j].show();
            }
        }
    }

    int dsa89=0;
    for(int i=0;i<fdsjnask78;i++)
    {
        for(int j=0;j<fdsjnask78;j++)
        {
            button=new QPushButton(this);
            for(int k=0;k<G.num_v;k++)
            {
                if(G.vertex[k].i==i&&G.vertex[k].j==j)
                {

                    button->setStyleSheet("QPushButton{border-style:solid;  border-width:4px;background-color: rgb(255, 255, 255);border-radius:17px;border-color: rgb(170, 255, 255);color:rgb(255,0,0);font-size:20px;}");
                    button->setText(QString::number(G.vertex[k].number));
                    button->setGeometry(G.vertex[k].j*step,G.vertex[k].i*step,40,40);
                    button->show();
                    dsa89=1;
                    break;
                }
            }
            if(dsa89)
            {
                dsa89=0;
                continue;
            }
            button->setStyleSheet("QPushButton{border-style:solid;  border-width:4px;background-color: rgb(255, 255, 255);border-radius:17px;border-color: rgb(170, 255, 255);}");
            button->setText("∞");
            connect(button,SIGNAL(pressed()),this,SLOT(setbutton()));
            button->setGeometry(j*step,i*step,40,40);
            button->show();

        }
    }
    ui->label_number->setText(QString::number(G.num_v));

    fclose(dsadd1);
    fclose(file);
}
//正权图处理
void Widget::on_pushButton_7_clicked()
{
    QString path=QCoreApplication::applicationDirPath();
    QString patdsh=QCoreApplication::applicationDirPath();
    path+="/a.txt";
    patdsh+="/b.txt";
    int dsad4445sa=0;
    FILE *file=fopen(path.toUtf8().data(),"rb");

    char dasda[45];
    if(!file)
    {
      QMessageBox::information(this,"hi","file no");
    }
    if(file)
    {
        int len=fread(dasda,sizeof(char),sizeof(int)*2,file);
        if(len==sizeof(int))
        {
             dsad4445sa=1;
        }
    }
    memcpy(&G.num_v,dasda,sizeof(int));
    int fdsjnask78;
    memcpy(&fdsjnask78,&(*(dasda+sizeof(int))),sizeof(int));
    //qDebug()<<"ds"<<G.num_v;
    //qDebug()<<"大小"<<fdsjnask78;
    ui->lineEdit_init->setText(QString::number(fdsjnask78));
    step=720/(fdsjnask78-1);
    //初始化
    for(int i=0;i<G.num_v;i++)
    {
        QLabel *a=new QLabel(this);
        a->setGeometry(750,200+i*20,30,20);
        a->setText("v"+QString::number(i+1));
        a->show();
        QLabel *b=new QLabel(this);
        b->setGeometry(780+i*30,180,30,20);
        b->setText("v"+QString::number(i+1));
        b->show();
    }

    quan=new QLineEdit*[G.num_v];
    G.array_arc=new ARC*[G.num_v];
    for(int j=0;j<G.num_v;j++)
    {
        quan[j]=new QLineEdit[G.num_v];
        G.array_arc[j]=new ARC[G.num_v];
    }

    G.vertex=new VERTEX[1000];
    FILE *dsadd1=fopen(patdsh.toUtf8().data(),"rb");
     char* dasda55665[12];

    if(dsadd1)
    {

        char* asjkdk8890=new char[G.num_v*sizeof(VERTEX)];
        fread(asjkdk8890,sizeof(char),sizeof(VERTEX)*G.num_v,dsadd1);
        memcpy(G.vertex,asjkdk8890,G.num_v*sizeof(VERTEX));
        for(int i=0;i<G.num_v;i++)
        {
            for(int j=0;j<G.num_v;j++)
            {
                fread(dasda55665,sizeof(char),sizeof(int),dsadd1);
                memcpy(&G.array_arc[i][j].weight,dasda55665,sizeof(int));
                memset(dasda55665,0,sizeof(int));

                fread(dasda55665,sizeof(char),sizeof(int),dsadd1);
                memcpy(&G.array_arc[i][j].start,dasda55665,sizeof(int));
                memset(dasda55665,0,sizeof(int));

                fread(dasda55665,sizeof(char),sizeof(int),dsadd1);
                memcpy(&G.array_arc[i][j].end,dasda55665,sizeof(int));
            }
        }
         if(dsad4445sa)
         {
                    QMessageBox::information(this,"hi","saveok");
           }
    }

    for(int i=0;i<G.num_v;i++)
    {
        for(int j=0;j<G.num_v;j++)
        {
            quan[i][j].setParent(this);
            quan[i][j].setGeometry(770+j*30,200+i*20,30,20);
            quan[i][j].show();
            quan[i][j].setStyleSheet("QLineEdit{background-color:rgb(255,255,255);}");
            if(i==j)
            {
                quan[i][j].setText("0");
            }

            if(QString::number(G.array_arc[i][j].weight)==QString("100"))
            {
                quan[i][j].setText("∞");
                quan[i][j].show();
            }
            else
            {
                quan[i][j].setText(QString::number(G.array_arc[i][j].weight));
                quan[i][j].show();
            }
        }
    }

    int dsa89=0;
    for(int i=0;i<fdsjnask78;i++)
    {
        for(int j=0;j<fdsjnask78;j++)
        {
            button=new QPushButton(this);
            for(int k=0;k<G.num_v;k++)
            {
                if(G.vertex[k].i==i&&G.vertex[k].j==j)
                {
                    button->setStyleSheet("QPushButton{border-style:solid;  border-width:4px;background-color: rgb(255, 255, 255);border-radius:17px;border-color: rgb(170, 255, 255);color:rgb(255,0,0);font-size:20px;}");
                    button->setText(QString::number(G.vertex[k].number));
                    button->setGeometry(G.vertex[k].j*step,G.vertex[k].i*step,40,40);
                    button->show();
                    dsa89=1;
                    break;
                }
            }
            if(dsa89)
            {
                dsa89=0;
                continue;
            }
            button->setStyleSheet("QPushButton{border-style:solid;  border-width:4px;background-color: rgb(255, 255, 255);border-radius:17px;border-color: rgb(170, 255, 255);}");
            button->setText("∞");
            connect(button,SIGNAL(pressed()),this,SLOT(setbutton()));
            button->setGeometry(j*step,i*step,40,40);
            button->show();

        }
    }
    ui->label_number->setText(QString::number(G.num_v));
    fclose(dsadd1);
    fclose(file);
}

void Widget::on_pushButton_8_clicked()
{


}
//ford按钮
void Widget::on_pushButton_9_clicked()
{
     int  yuandian=ui->F1->text().toInt();
     Ford(yuandian-1,0);
}

void Widget::on_pushButton_10_clicked()
{
    int t=ui->D1->text().toInt();
    int k=ui->D2->text().toInt();
    Dijkstra(t-1,k-1);
}

void Widget::on_pushButton_wcxd_released()
{

}

void Widget::on_setM_clicked()
{
    int size=ui->label_number->text().toInt();
    emit qita(size);


}
