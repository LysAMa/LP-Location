#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QBoxLayout>
#include <QPushButton>
#include <QFormLayout>
#include <QLineEdit>
#include <QComboBox>
#include <QSpinBox>

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

    QMenu *menuHome;
    QMenu *menuAffichage;
    QMenu *menuClient;
    QMenu *menuVehicule;
    QMenu *menuLocation;
    QMenu *menuSettings;
    QMenu *menuWindows;
    QMenu *menuHelp;

    QAction *actionQuitter;
    QAction *actionEnregistrer;
    QAction *actionAfficher;

    QToolBar *barreOutilHome;

    QVBoxLayout *layoutpetitcontainer;
    QHBoxLayout *layoutasideright;
    QHBoxLayout *layoutasideleft;
    QHBoxLayout *layoutmiddle;
    QVBoxLayout *boutonform;

    QFormLayout *formulaireClient;

    QLineEdit *codeclient;
    QLineEdit *nomclient;
    QLineEdit *prenomclient;
    QLineEdit *adresseclient;
    QLineEdit *telclient;
    QLineEdit *nationaliteclient;
    QComboBox *sexeclient;
    QSpinBox *ageclient;

    QPushButton *enregistrer;
    QPushButton *annuler;


};

#endif // MAINWINDOW_H
