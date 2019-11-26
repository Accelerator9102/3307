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
    QPushButton *btn2 = new QPushButton("Close!",this);
    btn->move(100,100);
    btn2->move(300,100);
    btn2->resize(50,50);
    resize(600,400);
    setFixedSize(600,400);
    setWindowTitle("Welcome!");

    connect(btn2,&QPushButton::clicked,this,&mywidget::close);
}

mywidget::~mywidget()
{




    delete ui;
}

