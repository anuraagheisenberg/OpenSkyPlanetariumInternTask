/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *size;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QTextEdit *matrixa;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QTextEdit *matrixb;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *about;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *clear;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *calculate;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(637, 538);
        MainWindow->setStyleSheet(QLatin1String("color:grey\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Condensed"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color:red"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        verticalLayout_2->addWidget(label_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("TlwgTypewriter"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:black"));
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font2;
        font2.setFamily(QStringLiteral("UnDinaru"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        label_6->setStyleSheet(QLatin1String("color: black\n"
""));

        horizontalLayout->addWidget(label_6);

        size = new QLineEdit(centralWidget);
        size->setObjectName(QStringLiteral("size"));
        size->setStyleSheet(QLatin1String("border-width:3px;\n"
"border-style:solid;\n"
"border-color:darkblue;\n"
"color:black;\n"
"font:20px;"));

        horizontalLayout->addWidget(size);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font3;
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_5->setFont(font3);
        label_5->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-style:faint;\n"
"border-color:grey;\n"
"color:blue;\n"
"font:20px;"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);

        matrixa = new QTextEdit(centralWidget);
        matrixa->setObjectName(QStringLiteral("matrixa"));
        matrixa->setStyleSheet(QLatin1String("border-width:5px;\n"
"border-style:solid;\n"
"border-color:darkblue;\n"
"color:black;\n"
"font:20px;"));

        verticalLayout_3->addWidget(matrixa);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);
        label_7->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-style:faint;\n"
"border-color:grey;\n"
"color:blue;\n"
"\n"
"font:20px;"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_7);

        matrixb = new QTextEdit(centralWidget);
        matrixb->setObjectName(QStringLiteral("matrixb"));
        matrixb->setStyleSheet(QLatin1String("border-width:5px;\n"
"border-style:solid;\n"
"border-color:darkblue;\n"
"color:black;\n"
"font:20px;"));

        verticalLayout->addWidget(matrixb);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        about = new QPushButton(centralWidget);
        about->setObjectName(QStringLiteral("about"));
        about->setStyleSheet(QLatin1String("color:black;\n"
"font:20px;"));

        horizontalLayout_2->addWidget(about);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setEnabled(false);
        clear->setCursor(QCursor(Qt::ArrowCursor));
        clear->setAutoFillBackground(false);
        clear->setStyleSheet(QLatin1String("\n"
"font:20px;"));

        horizontalLayout_2->addWidget(clear);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        calculate = new QPushButton(centralWidget);
        calculate->setObjectName(QStringLiteral("calculate"));
        calculate->setEnabled(false);
        calculate->setStyleSheet(QLatin1String("\n"
"font:20px;"));

        horizontalLayout_2->addWidget(calculate);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        exit = new QPushButton(centralWidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setStyleSheet(QLatin1String("\n"
"color:black;\n"
"font:20px;\n"
"\n"
""));

        horizontalLayout_2->addWidget(exit);


        verticalLayout_4->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(size, matrixb);
        QWidget::setTabOrder(matrixb, calculate);
        QWidget::setTabOrder(calculate, exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>sda</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("MainWindow", "  Equation Solver", 0));
        label->setText(QApplication::translate("MainWindow", "Ax=B", 0));
        label_6->setText(QApplication::translate("MainWindow", "Enter the value of n (size of square Matrix A)", 0));
        label_5->setText(QApplication::translate("MainWindow", "Enter Matrix A", 0));
        label_7->setText(QApplication::translate("MainWindow", "Enter Matrix B", 0));
        about->setText(QApplication::translate("MainWindow", "About", 0));
        clear->setText(QApplication::translate("MainWindow", "Reset", 0));
        calculate->setText(QApplication::translate("MainWindow", "Calculate x", 0));
        exit->setText(QApplication::translate("MainWindow", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
