#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::set_mousehook()
{
   // hook=SetWindowsHookEx(WH_MOUSE_LL,mouseHook,GetModuleHandle (0),NULL);
        keyhook=SetWindowsHookA(WH_KEYBOARD_LL,KeyBoard,GetModuleHandle (0),NULL);
}

LRESULT CALLBACK MainWindow::mouseHook(int nCode, WPARAM wParam, LPARAM lParam)
{
    if (wParam == WM_XBUTTONDOWN)
            {
                 qDebug()<< wParam;
            }
            else if (wParam == WM_XBUTTONUP)
            {
                qDebug() << wParam;
            }
    return CallNextHookEx(0, nCode, wParam, lParam);
}

LRESULT CALLBACK MainWindow::KeyBoard(int nCode, WPARAM wParam, LPARAM lParam)
{

}

void MainWindow::unload_mousehook()
{
    UnhookWindowsHookEx(hook);
}
