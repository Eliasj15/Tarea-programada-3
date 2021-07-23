#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(1);
    agregarRaiz("Funcion");
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

void MainWindow::on_pushButton_19_clicked()
{
    c->rellenarMatriz(ui->pushButton_3->text().toInt(),0,0);
    c->rellenarMatriz(ui->pushButton_4->text().toInt(),0,1);
    c->rellenarMatriz(ui->pushButton_6->text().toInt(),0,2);
    c->rellenarMatriz(ui->pushButton_5->text().toInt(),0,3);
    c->rellenarMatriz(ui->pushButton_9->text().toInt(),1,0);
    c->rellenarMatriz(ui->pushButton_7->text().toInt(),1,1);
    c->rellenarMatriz(ui->pushButton_10->text().toInt(),1,2);
    c->rellenarMatriz(ui->pushButton_8->text().toInt(),1,3);
    c->rellenarMatriz(ui->pushButton_16->text().toInt(),2,0);
    c->rellenarMatriz(ui->pushButton_11->text().toInt(),2,1);
    c->rellenarMatriz(ui->pushButton_17->text().toInt(),2,2);
    c->rellenarMatriz(ui->pushButton_14->text().toInt(),2,3);
    c->rellenarMatriz(ui->pushButton_15->text().toInt(),3,0);
    c->rellenarMatriz(ui->pushButton_12->text().toInt(),3,1);
    c->rellenarMatriz(ui->pushButton_18->text().toInt(),3,2);
    c->rellenarMatriz(ui->pushButton_13->text().toInt(),3,3);
}

void MainWindow::agregarRaiz(QString funcion){
    QTreeWidgetItem *t=new QTreeWidgetItem(ui->treeWidget);
    t->setText(0,funcion);
    ui->treeWidget->addTopLevelItem(t);
    agregarHijo(t,"uno");//aquí se modifican los parámetros a mostrar
    agregarHijo(t,"dos");
}

void MainWindow::agregarHijo(QTreeWidgetItem *padre, QString mintermino){
    QTreeWidgetItem *h=new QTreeWidgetItem();
    h->setText(0,mintermino);
    padre->addChild(h);
}

void MainWindow::on_pushButton_20_clicked()
{
    QString text = QString::fromStdString(c->refresh());
    ui->textEdit->setText(text);
}

void MainWindow::on_pushButton_21_clicked()
{
    QString v=ui->lineEdit_2->text();
    bool aEstado=(v=="True")?true:false;
    v=ui->lineEdit_2->text();
    bool bEstado=(v=="True")?true:false;
    v=ui->lineEdit_2->text();
    bool cEstado=(v=="True")?true:false;
    v=ui->lineEdit_2->text();
    bool dEstado=(v=="True")?true:false;
    bool resultado=c->devolverResultado(aEstado,bEstado,cEstado,dEstado);
    v=(resultado==true)?"True":"False";
    ui->lineEdit_5->setText(v);

}

