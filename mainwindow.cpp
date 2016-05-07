#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    boutonvehicule = new QPushButton("VEHICULE");
    layoutmenu->addWidget(boutonvehicule);

    boutonlocation = new QPushButton("LOCATION");
    layoutmenu->addWidget(boutonlocation);

    boutonclient = new QPushButton("CLIENT");
    layoutmenu->addWidget(boutonclient);

    layoutpetitcontainer = new QVBoxLayout;
    layoutpetitcontainer->addLayout(layoutasideleft);
    layoutpetitcontainer = new QVBoxLayout;
    layoutpetitcontainer->addLayout(layoutmidle);
    layoutpetitcontainer = new QVBoxLayout;
    layoutpetitcontainer->addLayout(layoutasideright);

    layoutgrandcontainer = new QVBoxLayout;
    layoutgrandcontainer->addLayout(layoutmenu);
    layoutgrandcontainer = new QVBoxLayout;
    layoutgrandcontainer->addLayout(layoutpetitcontainer);
    layoutgrandcontainer = new QVBoxLayout;
    layoutgrandcontainer->addLayout(layoutfooter);


    layoutgrandcontainer = new QVBoxLayout;
    this->setLayout(layoutgrandcontainer);


}

MainWindow::~MainWindow()
{
    delete ui;
}
