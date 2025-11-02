#include "updatebox.h"
#include "ui_updatebox.h"

updateBox::updateBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::updateBox)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&updateBox::updateSub);
}

updateBox::~updateBox()
{
    delete ui;
}

void updateBox::updateSub()
{
    QString RollNo = ui->lineEdit->text();
    QString sub = ui->lineEdit_2->text();

    emit newSub(RollNo,sub);
}
