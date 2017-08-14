/********************************************************************************
** Form generated from reading UI file 'outputwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTWINDOW_H
#define UI_OUTPUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_outputwindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *q1;
    QHBoxLayout *horizontalLayout;
    QPushButton *closeapp;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *solveanother;

    void setupUi(QDialog *outputwindow)
    {
        if (outputwindow->objectName().isEmpty())
            outputwindow->setObjectName(QStringLiteral("outputwindow"));
        outputwindow->resize(569, 447);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(outputwindow->sizePolicy().hasHeightForWidth());
        outputwindow->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(outputwindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(outputwindow);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color:red;\n"
"font:40px;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        q1 = new QTextBrowser(outputwindow);
        q1->setObjectName(QStringLiteral("q1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(q1->sizePolicy().hasHeightForWidth());
        q1->setSizePolicy(sizePolicy2);
        q1->setFont(font);
        q1->setStyleSheet(QLatin1String("border-width:5px;\n"
"border-style:solid;\n"
"border-color:darkblue;\n"
"color:black;\n"
"font:20px;"));

        verticalLayout->addWidget(q1);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        closeapp = new QPushButton(outputwindow);
        closeapp->setObjectName(QStringLiteral("closeapp"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(closeapp->sizePolicy().hasHeightForWidth());
        closeapp->setSizePolicy(sizePolicy3);
        closeapp->setStyleSheet(QLatin1String("color:black;\n"
"font:20px;\n"
""));

        horizontalLayout->addWidget(closeapp);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        solveanother = new QPushButton(outputwindow);
        solveanother->setObjectName(QStringLiteral("solveanother"));
        sizePolicy3.setHeightForWidth(solveanother->sizePolicy().hasHeightForWidth());
        solveanother->setSizePolicy(sizePolicy3);
        solveanother->setStyleSheet(QLatin1String("\n"
"color:black;\n"
"font:20px;"));

        horizontalLayout->addWidget(solveanother);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(outputwindow);

        QMetaObject::connectSlotsByName(outputwindow);
    } // setupUi

    void retranslateUi(QDialog *outputwindow)
    {
        outputwindow->setWindowTitle(QApplication::translate("outputwindow", "Dialog", 0));
        label->setText(QApplication::translate("outputwindow", "Value of Matrix x", 0));
        closeapp->setText(QApplication::translate("outputwindow", "Close Application", 0));
        solveanother->setText(QApplication::translate("outputwindow", "Solve Another", 0));
    } // retranslateUi

};

namespace Ui {
    class outputwindow: public Ui_outputwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTWINDOW_H
