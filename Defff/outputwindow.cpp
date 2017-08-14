#include "outputwindow.h"
#include "ui_outputwindow.h"
#include "QMessageBox"
#include "QFile"
#include "QTextStream"
#include <QIODevice>
#include<QDir>
outputwindow::outputwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::outputwindow)
{
    ui->setupUi(this);
    QString path = QDir::currentPath();
    QString filename = "/answerData.txt";
    path.append(filename);
    QFile file(path);
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);
    ui->q1->setText(in.readAll());
}
outputwindow::~outputwindow()
{
    delete ui;
}

void outputwindow::on_closeapp_clicked()
{
    QMessageBox msgBox(QMessageBox::Question,"Message","Are you sure you want to Quit",QMessageBox::Yes | QMessageBox::No );
    QPalette palette;
      palette.setColor(QPalette::Background, Qt::yellow);
      msgBox.setPalette(palette);
      QFont font( "Tokyo" );
      font.setPointSize( 12 );
      font.setPixelSize(15);
      font.setWeight( QFont ::Black);
      font.setItalic(true );
      msgBox.setFont(font);

    if(msgBox.exec()==QMessageBox::Yes)
    {
      QApplication::quit();
   }

}

void outputwindow::on_solveanother_clicked()
{
    close();
}
