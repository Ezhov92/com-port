#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_radioButton_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_radioButton_3_clicked(bool checked);

    void on_radioButton_4_clicked(bool checked);

    void on_radioButton_5_clicked(bool checked);

    void on_radioButton_6_clicked(bool checked);

    void on_radioButton_7_clicked(bool checked);

    void on_radioButton_8_clicked(bool checked);

    void on_radioButton_9_clicked(bool checked);

    void on_radioButton_10_clicked(bool checked);

    void on_radioButton_11_clicked(bool checked);

    void on_radioButton_12_clicked(bool checked);

    void on_radioButton_13_clicked(bool checked);

    void on_radioButton_14_clicked(bool checked);

    void on_radioButton_15_clicked(bool checked);

    void on_radioButton_16_clicked(bool checked);

    void on_radioButton_17_clicked(bool checked);

    void on_radioButton_18_clicked(bool checked);

    void on_radioButton_19_clicked(bool checked);

    void on_pushButton_12_clicked();

    void on_spinBox_valueChanged(int arg1);



private:
    Ui::MainWindow *ui;
    int baud_rate, data_bits;

};

#endif // MAINWINDOW_H
