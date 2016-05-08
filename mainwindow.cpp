#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    menuHome = menuBar()->addMenu("&Acceuil");
    menuAffichage = menuBar()->addMenu("A&ffichage");
    menuClient = menuBar()->addMenu("&Client");
    menuVehicule = menuBar()->addMenu("&Vehicule");
    menuLocation = menuBar()->addMenu("&Location");
    menuSettings = menuBar()->addMenu("&Parametres");
    menuWindows = menuBar()->addMenu("&Fenetre");
    menuHelp = menuBar()->addMenu("A&ide");

    actionQuitter = new QAction("&Quitter", this);
    actionQuitter->setShortcut(QKeySequence("Ctrl+Q"));
    actionQuitter->setIcon(QIcon("icone.jpg"));
    barreOutilHome = addToolBar("Acceuil");
    barreOutilHome->addAction(actionQuitter);

    actionEnregistrer = new QAction("&Enregistrer", this);
    actionEnregistrer->setShortcut(QKeySequence("Ctrl+S"));
    actionEnregistrer->setIcon(QIcon("icone.jpg"));
    barreOutilHome->addAction(actionEnregistrer);

    actionAfficher = new QAction("&Afficher", this);
    actionAfficher->setShortcut(QKeySequence("Ctrl+Q"));
    actionAfficher->setIcon(QIcon("icone.jpg"));
    barreOutilHome->addAction(actionAfficher);

    menuWindows->addAction(actionQuitter);
    menuClient->addAction(actionEnregistrer);
    menuAffichage->addAction(actionAfficher);

    boutonform = new QVBoxLayout;
    layoutpetitcontainer = new QVBoxLayout;
    layoutasideright = new QHBoxLayout;
    layoutasideleft = new QHBoxLayout;
    layoutmiddle = new QHBoxLayout;
    formulaireClient = new QFormLayout;

    codeclient = new QLineEdit;
    formulaireClient->addRow("Code: ",codeclient);
    nomclient = new QLineEdit;
    formulaireClient->addRow("Nom: ",nomclient);
    prenomclient = new QLineEdit;
    formulaireClient->addRow("Prenom: ",prenomclient);
    adresseclient = new QLineEdit;
    formulaireClient->addRow("Adresse: ",adresseclient);
    nationaliteclient = new QLineEdit;
    formulaireClient->addRow("Nationalite: ",nationaliteclient);
    telclient = new QLineEdit;
    formulaireClient->addRow("Telephone: ",telclient);
    sexeclient = new QComboBox;
    formulaireClient->addRow("Sexe: ",sexeclient);
    ageclient= new QSpinBox;
    formulaireClient->addRow("Age",ageclient);


    enregistrer = new QPushButton("Enregistrer");
    boutonform->addWidget(enregistrer);

    annuler = new QPushButton("vague");
    boutonform->addWidget(annuler);

    layoutmiddle->addLayout(formulaireClient);
    layoutmiddle->addLayout(boutonform);
    layoutpetitcontainer->addLayout(layoutasideleft);
    layoutpetitcontainer->addLayout(layoutmiddle);
    layoutpetitcontainer->addLayout(layoutasideright);

    this->setLayout(layoutpetitcontainer);

}

MainWindow::~MainWindow()
{
    delete ui;
}
