#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    baud_rate=128000;
    data_bits = 6;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_radioButton_clicked(bool checked)
{
    if (checked)
    baud_rate=600;
}
void MainWindow::on_radioButton_2_clicked(bool checked)
{
    if (checked)
    baud_rate=1200;
}

void MainWindow::on_radioButton_3_clicked(bool checked)
{
    if (checked)
    baud_rate=2400;
}

void MainWindow::on_radioButton_4_clicked(bool checked)
{
    if (checked)
    baud_rate=4800;
}

void MainWindow::on_radioButton_5_clicked(bool checked)
{
    if (checked)
    baud_rate=9600;
}

void MainWindow::on_radioButton_6_clicked(bool checked)
{
    if (checked)
    baud_rate=14400;
}

void MainWindow::on_radioButton_7_clicked(bool checked)
{
    if (checked)
    baud_rate=19200;
}

void MainWindow::on_radioButton_8_clicked(bool checked)
{
    if (checked)
    baud_rate=28800;
}

void MainWindow::on_radioButton_9_clicked(bool checked)
{
    if (checked)
    baud_rate=38400;
}

void MainWindow::on_radioButton_10_clicked(bool checked)
{
    if (checked)
    baud_rate=56000;
}

void MainWindow::on_radioButton_11_clicked(bool checked)
{
    if (checked)
    baud_rate=57600;
}

void MainWindow::on_radioButton_12_clicked(bool checked)
{
    if (checked)
    baud_rate=115200;
}

void MainWindow::on_radioButton_13_clicked(bool checked)
{
    if (checked)
    baud_rate=128000;
}

void MainWindow::on_radioButton_14_clicked(bool checked)
{
    if (checked)
    baud_rate=256000;
}

void MainWindow::on_radioButton_15_clicked(bool checked)
{
    if (checked)
    baud_rate=ui->spinBox->value();
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->textEdit->setText(QString::number(baud_rate)+'  '+QString::number(data_bits));
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    if (ui->radioButton_15->isChecked())
        baud_rate=arg1;
}

void MainWindow::on_radioButton_16_clicked(bool checked)
{
    if (checked)
        data_bits=5;
}
void MainWindow::on_radioButton_17_clicked(bool checked)
{
    if (checked)
        data_bits=6;
}
void MainWindow::on_radioButton_18_clicked(bool checked)
{
     if (checked)
        data_bits=7;
}
void MainWindow::on_radioButton_19_clicked(bool checked)
{
     if (checked)
         data_bits=8;
}
