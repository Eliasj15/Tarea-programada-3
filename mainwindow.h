#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Controlador.h"

#include <QMainWindow>

#include <QTreeWidgetItem>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Controlador;
class MainWindow : public QMainWindow
{
    Q_OBJECT

    void agregarRaiz(QString funcion);
    void agregarHijo(QTreeWidgetItem *padre, QString mintermino);
    QTreeWidgetItem *padre;

public:
    Controlador *c;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setControlador(Controlador *p){c=p;};
    void nuevoHijo(std::string mintermino);
    void mostrarHijos();
    void bitacoraKarnaugh();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
