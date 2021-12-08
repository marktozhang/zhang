#include"mainwindow.h"
#include<QtCharts>
#include <QApplication>
QT_CHARTS_USE_NAMESPACE



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //![1]
    QBarSet *set0 = new QBarSet("以单一信息的最短路径问题");
    QBarSet *set1 = new QBarSet("开始引入不确定新信息的概念");
    QBarSet *set2 = new QBarSet("对确定信息与不确定信息的量化研究");
    *set0 << 33;
    *set1 << 66;
    *set2 << 99;
    //![2]
    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    //![3]
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("最短路径问题");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    //![4]
    QStringList categories;
    categories << "最短路径问题研究过程";
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();//创建默认的左侧的坐标轴（根据 QBarSet 设置的值）
    chart->setAxisX(axis, series);//设置坐标轴
    //![5]
    chart->legend()->setVisible(true); //设置图例为显示状态
    chart->legend()->setAlignment(Qt::AlignBottom);//设置图例的显示位置在底部
    //![6]
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    //![7]
    QMainWindow window;
    window.setCentralWidget(chartView);
    window.resize(1000, 400);
    window.show();

    return a.exec();
}
