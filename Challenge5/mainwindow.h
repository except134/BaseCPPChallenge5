#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnTask1Calc_clicked();
    void on_btnTask2Calc_clicked();
    void Task3();
    void on_btnTask3Calc_clicked();

private:
    Ui::MainWindow *ui;
    int myArray[3][3][3]{};
    int* ptrArray=nullptr;
};
#endif // MAINWINDOW_H
