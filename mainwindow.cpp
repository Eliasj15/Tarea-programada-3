#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButton_3_clicked()
{
    if(ui->pushButton_3->text()=="0"){
        ui->pushButton_3->setText("1");
    }
    else{
        if((ui->pushButton_3->text()=="1")){
            ui->pushButton_3->setText("0");
        }
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(ui->pushButton_4->text()=="0"){
        ui->pushButton_4->setText("1");
    }
    else{
        if((ui->pushButton_4->text()=="1")){
            ui->pushButton_4->setText("0");
        }
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    if(ui->pushButton_6->text()=="0"){
        ui->pushButton_6->setText("1");
    }
    else{
        if((ui->pushButton_6->text()=="1")){
            ui->pushButton_6->setText("0");
        }
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if(ui->pushButton_5->text()=="0"){
        ui->pushButton_5->setText("1");
    }
    else{
        if((ui->pushButton_5->text()=="1")){
            ui->pushButton_5->setText("0");
        }
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    if(ui->pushButton_9->text()=="0"){
        ui->pushButton_9->setText("1");
    }
    else{
        if((ui->pushButton_9->text()=="1")){
            ui->pushButton_9->setText("0");
        }
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    if(ui->pushButton_7->text()=="0"){
        ui->pushButton_7->setText("1");
    }
    else{
        if((ui->pushButton_7->text()=="1")){
            ui->pushButton_7->setText("0");
        }
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    if(ui->pushButton_10->text()=="0"){
        ui->pushButton_10->setText("1");
    }
    else{
        if((ui->pushButton_10->text()=="1")){
            ui->pushButton_10->setText("0");
        }
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    if(ui->pushButton_8->text()=="0"){
        ui->pushButton_8->setText("1");
    }
    else{
        if((ui->pushButton_8->text()=="1")){
            ui->pushButton_8->setText("0");
        }
    }
}

void MainWindow::on_pushButton_16_clicked()
{
    if(ui->pushButton_16->text()=="0"){
        ui->pushButton_16->setText("1");
    }
    else{
        if((ui->pushButton_16->text()=="1")){
            ui->pushButton_16->setText("0");
        }
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    if(ui->pushButton_11->text()=="0"){
        ui->pushButton_11->setText("1");
    }
    else{
        if((ui->pushButton_11->text()=="1")){
            ui->pushButton_11->setText("0");
        }
    }
}

void MainWindow::on_pushButton_17_clicked()
{
    if(ui->pushButton_17->text()=="0"){
        ui->pushButton_17->setText("1");
    }
    else{
        if((ui->pushButton_17->text()=="1")){
            ui->pushButton_17->setText("0");
        }
    }
}

void MainWindow::on_pushButton_14_clicked()
{
    if(ui->pushButton_14->text()=="0"){
        ui->pushButton_14->setText("1");
    }
    else{
        if((ui->pushButton_14->text()=="1")){
            ui->pushButton_14->setText("0");
        }
    }
}

void MainWindow::on_pushButton_15_clicked()
{
    if(ui->pushButton_15->text()=="0"){
        ui->pushButton_15->setText("1");
    }
    else{
        if((ui->pushButton_15->text()=="1")){
            ui->pushButton_15->setText("0");
        }
    }
}

void MainWindow::on_pushButton_12_clicked()
{
    if(ui->pushButton_12->text()=="0"){
        ui->pushButton_12->setText("1");
    }
    else{
        if((ui->pushButton_12->text()=="1")){
            ui->pushButton_12->setText("0");
        }
    }
}

void MainWindow::on_pushButton_18_clicked()
{
    if(ui->pushButton_18->text()=="0"){
        ui->pushButton_18->setText("1");
    }
    else{
        if((ui->pushButton_18->text()=="1")){
            ui->pushButton_18->setText("0");
        }
    }
}

void MainWindow::on_pushButton_13_clicked()
{
    if(ui->pushButton_13->text()=="0"){
        ui->pushButton_13->setText("1");
    }
    else{
        if((ui->pushButton_13->text()=="1")){
            ui->pushButton_13->setText("0");
        }
    }
}
