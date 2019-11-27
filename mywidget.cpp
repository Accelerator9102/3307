#include "mywidget.h"
#include "ui_mywidget.h"
#include <QPushButton>
mywidget::mywidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mywidget)
{
    ui->setupUi(this);
    QPushButton *btn = new QPushButton;
    btn->setParent(this);
    btn->setText("Start!");
    btn->setStyleSheet("background-color: rgb(0,255,127);"
                       "border-style:solid;"
                       "border-width:5px;"
                       "border-color: #339;"
                       "font-size: 30px;");

    QPushButton *btn2 = new QPushButton("Close!",this);
    btn2->setStyleSheet("background-color: rgb(0,255,255);"
                        "border-style:solid;"
                        "border-width: 5px;"
                        "border-color: #339;"
                        "font-size: 30px;");
    btn->move(600,700);
    btn2->move(1240,700);
    btn->resize(200,100);
    btn2->resize(200,100);


    resize(600,400);
    setFixedSize(1980,1020);
    setWindowTitle("Welcome!");
    this->setStyleSheet("background-color:pink;");


    connect(btn2,&QPushButton::clicked,this,&mywidget::close);
}

mywidget::~mywidget()
{




    delete ui;
}

