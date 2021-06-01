#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Task3();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnTask1Calc_clicked()
{
    int a=ui->edParamA->text().toInt();
    int b=ui->edParamB->text().toInt();
    int c=ui->edParamC->text().toInt();
    int d=ui->edParamD->text().toInt();
    float result=a*(b+(static_cast<float>(c)/d));
    ui->edTask1Result->setText(QString().setNum(result, 'f'));
}



void MainWindow::on_btnTask2Calc_clicked()
{
    int a = ui->edParamInt->text().toInt();
    int b =  a <= 21 ? 21 - a : (a - 21) << 1;

    ui->edTask2Result->setText(QString().setNum(b));
}

void MainWindow::Task3()
{
    ptrArray = &myArray[0][0][0];

    for(int x=0;x<3;x++) {
        for(int y=0;y<3;y++) {
            QTableWidgetItem *itm = new QTableWidgetItem(QString().setNum(*(ptrArray++)));
            ui->grdMatrix->setItem(y, x, itm);
        }
    }

    ui->grdMatrix->update();
}

void MainWindow::on_btnTask3Calc_clicked()
{
    ptrArray = &myArray[0][0][0];
    int var=ui->edParam111->text().toInt();
    *(ptrArray + sizeof(int))=var;

    Task3();
}

