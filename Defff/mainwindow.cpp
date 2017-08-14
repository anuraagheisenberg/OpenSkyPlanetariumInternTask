#include <mainwindow.h>
#include <ui_mainwindow.h>
#include <QString>
#include <QCoreApplication>
#include <QDebug>
#include <QMessageBox>
#include <outputwindow.h>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include<QDir>
typedef double lf;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_calculate_clicked()
{
    QString t1,t2,t3,t4;
    t1=ui->size->text().trimmed();
    t4=t1;
    t2=ui->matrixa->toPlainText().trimmed();
    t3=ui->matrixb->toPlainText().trimmed();
    int countr=0,countc=0;
    lf k=t1.toDouble();
    int m=t4.toInt();
    lf A[m][m+1];
    int errorflag1=0,errorflag2=0;
    QString number="";
    int numcount=0;
    int flag=1;
    if(t1=="")
    {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Enter the size of Matrix");
        //QMessageBox::critical(this,"Error","Enter the size of Matrix") ;
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setWeight( QFont::Black );
          font.setItalic(true );
          font.setPixelSize(15);
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
    }
    else if(k>0&&m==0)
            {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Size of Matrix can't be in decimal");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setWeight( QFont::Black );
          font.setItalic(true );
          font.setPixelSize(15);
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
       // QMessageBox::critical(this,"Error","");
            }
    else if(k<0&&m==0){
        QMessageBox msgBox(QMessageBox::Critical,"Error","Size of Matrix can't be negative or decimal");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setWeight( QFont::Black );
          font.setItalic(true );
          font.setPixelSize(15);
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
         //  QMessageBox::critical(this,"Error","Size of Matrix can't be negative or decimal");
    }

    else if(m==0)
            {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Please enter correct Matrix size");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setWeight( QFont::Black );
          font.setItalic(true );
          font.setPixelSize(15);
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();

            }
    else if(m<0)
            {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Size of Matrix can't be negative");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setWeight( QFont::Black );
          font.setItalic(true );
          font.setPixelSize(15);
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
              //  QMessageBox::critical(this,"Error","Size of Matrix can't be negative");
    }
    else
    {
    for (int i=0;i<t2.length();i++)
    {
        if(t2.at(i).isDigit()||t2.at(i)=='.'||t2.at(i)=='-')
        {
            number+=t2.at(i);
            flag=1;
        }
        else if(flag==0)
        {
            if(t2.at(i)!=' ')
                   errorflag1=1;
            continue;
        }
        else
        {
            double op=number.toDouble();
            A[countr][countc]=op;
            number="";
            flag=0;
            if(countc==m-1)
            {
                   countr++;
                   countc=0;
            }
            else
            {
                    countc++;
            }
            numcount++;
        }
    }
    A[countr][countc]=number.toDouble();
    numcount++;
    int numcount2=0;
    countc=0;
    number="";
    for (int i=0;i<t3.length();i++)
    {
        if(t3.at(i).isDigit()||t3.at(i)=='.'||t3.at(i)=='-')
        {
            number+=t3.at(i);
            flag=1;
        }
        else if(flag==0)
        {
            if(t3.at(i)!=' ')
                   errorflag2=1;
            continue;
        }
        else
        {
            double op=number.toDouble();
            A[countc][m]=op;
            countc++;
            number="";
            numcount2++;
            flag=0;
        }
    }
    A[countc][m]=number.toDouble();
    numcount2++;
    if(errorflag1==1&&errorflag2==1)
            {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Invalid Input in both Matrix A and B");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setWeight( QFont::Black );
          font.setItalic(true );
          font.setPixelSize(15);
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
             //   QMessageBox::critical(this,"Error","Insufficient Input (not according to the value of n");

          }
    else if(errorflag1!=1&&errorflag2==1)
            {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Invalid Input in Matrix B");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setWeight( QFont::Black );
          font.setItalic(true );
          font.setPixelSize(15);
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
             //   QMessageBox::critical(this,"Error","Insufficient Input (not according to the value of n");

          }
    else if(errorflag1==1&&errorflag2!=1)
            {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Invalid Input in Matrix A");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setWeight( QFont::Black );
          font.setItalic(true );
          font.setPixelSize(15);
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
             //   QMessageBox::critical(this,"Error","Insufficient Input (not according to the value of n");

          }
    else if((numcount<m*m)&&(numcount2<m))
            {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Insufficient/Invalid Input in both Matrix A and B (not according to the value of n)");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setWeight( QFont::Black );
          font.setItalic(true );
          font.setPixelSize(15);
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
             //   QMessageBox::critical(this,"Error","Insufficient Input (not according to the value of n");
            }
    else if((numcount<m*m)&&(numcount2==m))
            {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Insufficient/Invalid Input in Matrix A (not according to the value of n)");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setWeight( QFont::Black );
          font.setItalic(true );
          font.setPixelSize(15);
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
             //   QMessageBox::critical(this,"Error","Insufficient Input (not according to the value of n");
            }
    else if((numcount==m*m)&&(numcount2<m))
            {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Insufficient/Invalid Input in Matrix B (not according to the value of n)");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setWeight( QFont::Black );
          font.setItalic(true );
          font.setPixelSize(15);
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
             //   QMessageBox::critical(this,"Error","Insufficient Input (not according to the value of n");
            }
    else if((numcount>m*m) && (numcount2>m))
            {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Excessive/Invalid Input in both matrix A and B (not according to the value of n)");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setPixelSize(15);
          font.setWeight( QFont::Black );
          font.setItalic(true );
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
      //        QMessageBox::critical(this,"Error","Excessive Input/ Invalid Input(not according to the value of n");
            }
    else if((numcount>m*m) && (numcount2==m))
            {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Excessive/Invalid Input in Matrix A (not according to the value of n)");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setPixelSize(15);
          font.setWeight( QFont::Black );
          font.setItalic(true );
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
      //        QMessageBox::critical(this,"Error","Excessive Input/ Invalid Input(not according to the value of n");
            }
    else if((numcount==m*m) && (numcount2>m))
            {
        QMessageBox msgBox(QMessageBox::Critical,"Error","Excessive/Invalid Input in Matrix B (not according to the value of n)");
        QPalette palette;
          palette.setColor(QPalette::Background, Qt::yellow);
          msgBox.setPalette(palette);
          QFont font( "Times Roman" );
          font.setPointSize( 12 );
          font.setPixelSize(15);
          font.setWeight( QFont::Black );
          font.setItalic(true );
          msgBox.setFont(font);
          msgBox.exec();
          msgBox.show();
      //        QMessageBox::critical(this,"Error","Excessive Input/ Invalid Input(not according to the value of n)");
            }
    else
    {
    int flag2=0;
    for(int k=0;k<m;k++)
        {
            int limiti=k;
            lf limitv=A[limiti][k];
            for(int i=k+1;i < m;i++)
                if (abs(A[i][k])>limitv)
                {
                    limitv = A[i][k];
                    limiti = i;
                }
            if(!A[k][limiti])
                flag2=1;
            if(limiti!=k)
            {
                    for (int i=0; i<=m; i++)
                    {
                            lf temp = A[k][i];
                            A[k][i] = A[limiti][i];
                            A[limiti][i] = temp;
                    }
            }
            for (int i=k+1; i<m; i++)
            {
                lf f=A[i][k]/(A[k][k]*1.0);
                for (int j=k+1;j<=m;j++)
                    A[i][j]-=A[k][j]*f;
                A[i][k]=0;
            }
        }
      if(flag2==1)
        {
            if(A[flag][m])
            {

                QMessageBox msgBox(QMessageBox::Critical,"Error","Singular Matrix::Inconsistent System");
                QPalette palette;
                  palette.setColor(QPalette::Background, Qt::yellow);
                  msgBox.setPalette(palette);
                  QFont font( "Times Roman" );
                  font.setPointSize( 12 );
                  font.setPixelSize(15);
                  font.setWeight( QFont::Black );
                  font.setItalic(true );
                  msgBox.setFont(font);
                  msgBox.exec();
                  msgBox.show();
            }
            else
            {
                QMessageBox msgBox(QMessageBox::Critical,"Error","Singular Matrix::Infinitely many solutions");
                QPalette palette;
                  palette.setColor(QPalette::Background, Qt::yellow);
                  msgBox.setPalette(palette);
                  QFont font( "Times Roman" );
                  font.setPointSize( 12 );
                  font.setPixelSize(15);
                  font.setWeight( QFont::Black);
                  font.setItalic(true );
                  msgBox.setFont(font);
                  msgBox.exec();
                  msgBox.show();
            }
      }
      else
      {
      double x[m];
      for(int i=m-1;i>=0;i--)
        {
            x[i]=A[i][m];
            for(int j=i+1;j<m;j++)
            {
                x[i]-=A[i][j]*x[j];
            }
            x[i]=x[i]/A[i][i];
        }
      QString path = QDir::currentPath();
      QString filename = "/answerData.txt";
      path.append(filename);
      QFile file(path);
      if (file.open(QIODevice::WriteOnly))
      {
              QTextStream stream(&file);
              for(int i=0; i<m; i++)
              {
                stream << x[i] << endl;
              }
      }
      outputwindow newwindow;
      newwindow.setModal(true);     // Main Window matrix cant be edited until this window is clodes
      newwindow.exec();
      }
    }
    }
}

void MainWindow::on_clear_clicked()
{
    ui->size->setText("");
    ui->matrixa->setText("");
    ui->matrixb->setText("");
    ui->calculate->setEnabled(false);
    ui->clear->setEnabled(false);
    ui->calculate->setStyleSheet("color:grey;font:20px");
    ui->clear->setStyleSheet("color:grey;font:20px");
}

void MainWindow::on_exit_clicked()
{
    QMessageBox msgBox(QMessageBox::Question,"Message","Are you sure you want to Quit",QMessageBox::Yes | QMessageBox::No );
    QPalette palette;
      palette.setColor(QPalette::Background, Qt::yellow);
      msgBox.setPalette(palette);
      QFont font( "Times Roman" );
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
void MainWindow::on_size_textChanged(const QString &arg1)
{
    QString p=arg1;
    ui->calculate->setEnabled(true);
    ui->calculate->setStyleSheet("color:black;font:20px");
    ui->clear->setStyleSheet("color:black;font:20px");
    ui->clear->setEnabled(true);
}

void MainWindow::on_about_clicked()
{    QMessageBox msgBox(QMessageBox::Information,"About","This is a <B>Ax=B</B> Matrix Solver<BR> <BR>Made in QT/C++ as a part of coding assignment given my OpenSky Planetarium FOSSEE<BR> <BR>Matrix A and B is n*n and n*1 respectively<BR><BR>First Enter the Size of n then the values of Matrix A and B and hit Calculate to get the value of Matrix x.<BR><BR><B>Algorithm Used:-<BR></B>Gauss Jordan Elimination<BR><BR><B>Time Complexity:-</B><br>O(n^3)<br><br><B>Input Format:-</B><BR> Please Enter Matrix A and B in the correct(row wise) to get correct answer as the text is processed in <B>row wise</B> order only<BR><BR>Example:-<br> for n=2 <br><B>A</B><BR>5 2<br>3 4<br> <B>OR</B><br> 5 2 3 4 <br>is treated the <B>same</B> <BR> For<B> negative/decimal numbers </B> please put<B> '-' or '.' sign</B>, with the number in the correct format without any space(s) or it will be treated as an invalid input<BR><BR>Built by :-<BR><B> Anuraag Singh</B> <BR> PDPM Indian Institute of Information Technology Design and Manufacturing, Jabalpur<BR> <B>anuraagsingh@iiitdmj.ac.in</B><BR><B>9407296106</B><BR>");
     QFont font("Times Roman");
     font.setPixelSize(15);
     msgBox.setFont(font);
     msgBox.exec();
}
