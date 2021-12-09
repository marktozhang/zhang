#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<Windows.h>
static HHOOK hook;//定义静态钩子
static HHOOK keyhook;//定义静态钩子
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //安装钩子
    int set_mousehook();
    //鼠标钩子回调函数
    LRESULT CALLBACK mouseHook(int nCode,WPARAM wParam,LPARAM lParam);
    //键盘钩子回调函数
    LRESULT CALLBACK KeyBoard(int nCode,WPARAM wParam,LPARAM lParam);

    //4卸载钩子，同样定义个函数
    void unload_mousehook();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
