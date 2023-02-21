#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void on_Clear_All_clicked();

    void on_Set_Left_clicked();

    void on_Set_All_clicked();

    void on_Set_Right_clicked();

    void on_Clear_Left_clicked();

    void on_Clear_Right_clicked();

    void on_Swap_clicked();

    void on_Move_Left_clicked();

    void on_Move_Right_clicked();

    void on_pushButton_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_comboBox_activated(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
