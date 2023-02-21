#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Set_Left_clicked()
{
    ui->LeftLine->setText("zxc");
}


void MainWindow::on_Set_All_clicked()
{
    MainWindow::on_Set_Right_clicked();
    MainWindow::on_Set_Left_clicked();
}


void MainWindow::on_Set_Right_clicked()
{
    ui->Right_Line->setText("curced");

}


void MainWindow::on_Clear_Left_clicked()
{
    ui->LeftLine->setText("");
}


void MainWindow::on_Clear_All_clicked()
{
    MainWindow::on_Clear_Right_clicked();
    MainWindow::on_Clear_Left_clicked();
}


void MainWindow::on_Clear_Right_clicked()
{

    ui->Right_Line->setText("");

}


void MainWindow::on_Swap_clicked()
{
    QString str= ui->LeftLine->text();
    ui->LeftLine->setText(ui->Right_Line->text());
    ui->Right_Line->setText(str);
}




void MainWindow::on_Move_Left_clicked()
{
    QString str=ui->Right_Line->text();
    ui->LeftLine->setText(str);
}


void MainWindow::on_Move_Right_clicked()
{
    QString str=ui->LeftLine->text();
    ui->Right_Line->setText(str);
}

void MainWindow::on_pushButton_clicked()
{
    int index = ui->comboBox->currentIndex();
    if (index==1){
        MainWindow::on_Set_Left_clicked();
    }
    if (index==2){
        MainWindow::on_Set_Right_clicked();
    }
    if (index==3){
        MainWindow::on_Set_All_clicked();
    }
    if (index==4){
        MainWindow::on_Clear_Left_clicked();
    }
    if (index==5){
        MainWindow::on_Clear_Right_clicked();
    }
    if (index==6){
        MainWindow::on_Clear_All_clicked();
    }
    if (index==7){
        MainWindow::on_Move_Left_clicked();
    }
    if (index==8){
        MainWindow::on_Move_Right_clicked();
    }
    if (index==9){
        MainWindow::on_Swap_clicked();
    }
}


