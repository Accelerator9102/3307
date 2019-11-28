#include "startgame.h"
#include "ui_startgame.h"

StartGame::StartGame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StartGame)
{
    ui->setupUi(this);
    this->setFixedSize(1600,900);
        this->setWindowTitle("Playing Game!");
        this->setStyleSheet("background-color: pink;");
        QMenuBar * bar = menuBar();

        setMenuBar(bar);

        QMenu * startMenu = bar->addMenu("Options");

        QAction * quitAction=startMenu->addAction("Quit");

        connect(quitAction,&QAction::triggered,[=](){
            this->close();
        });

        MyPushButton *nextbtn = new MyPushButton();
        nextbtn->setText("Next!");
        nextbtn->move(300,700);
        nextbtn->setParent(this);


}

StartGame::~StartGame()
{
    delete ui;
}
