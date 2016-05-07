#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QBoxLayout>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
public slots:

private:
    Ui::MainWindow *ui;

    QVBoxLayout *layoutgrandcontainer;
    QVBoxLayout *layoutmenu;
    QVBoxLayout *layoutpetitcontainer;
    QHBoxLayout *layoutasideright;
    QHBoxLayout *layoutasideleft;
    QHBoxLayout *layoutmidle;
    QVBoxLayout *layoutfooter;

    QPushButton *boutonvehicule;
    QPushButton *boutonlocation;
    QPushButton *boutonclient;



};

#endif // MAINWINDOW_H
