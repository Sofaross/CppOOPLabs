/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Foto;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QFrame *line;
    QLabel *label;
    QLineEdit *LeftLine;
    QLabel *label_2;
    QLineEdit *Right_Line;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Set_Left;
    QPushButton *Set_All;
    QPushButton *Set_Right;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Clear_Left;
    QPushButton *Clear_All;
    QPushButton *Clear_Right;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Move_Left;
    QPushButton *Swap;
    QPushButton *Move_Right;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1148, 855);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Foto = new QLabel(centralwidget);
        Foto->setObjectName(QString::fromUtf8("Foto"));
        Foto->setGeometry(QRect(560, 20, 551, 491));
        Foto->setPixmap(QPixmap(QString::fromUtf8("C:/Users/sofar/Downloads/\320\224\320\260-\320\224\320\2602.jpg")));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 220, 491, 551));
        label_3->setPixmap(QPixmap(QString::fromUtf8("C:/Users/sofar/Pictures/Saved Pictures/\320\232\320\276\320\270\320\273-\320\232\320\276\320\270\320\273 .jpg")));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 30, 521, 176));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setBaseSize(QSize(0, 6));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        LeftLine = new QLineEdit(widget);
        LeftLine->setObjectName(QString::fromUtf8("LeftLine"));

        horizontalLayout->addWidget(LeftLine);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        Right_Line = new QLineEdit(widget);
        Right_Line->setObjectName(QString::fromUtf8("Right_Line"));

        horizontalLayout->addWidget(Right_Line);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Set_Left = new QPushButton(widget);
        Set_Left->setObjectName(QString::fromUtf8("Set_Left"));

        horizontalLayout_2->addWidget(Set_Left);

        Set_All = new QPushButton(widget);
        Set_All->setObjectName(QString::fromUtf8("Set_All"));

        horizontalLayout_2->addWidget(Set_All);

        Set_Right = new QPushButton(widget);
        Set_Right->setObjectName(QString::fromUtf8("Set_Right"));

        horizontalLayout_2->addWidget(Set_Right);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Clear_Left = new QPushButton(widget);
        Clear_Left->setObjectName(QString::fromUtf8("Clear_Left"));

        horizontalLayout_3->addWidget(Clear_Left);

        Clear_All = new QPushButton(widget);
        Clear_All->setObjectName(QString::fromUtf8("Clear_All"));

        horizontalLayout_3->addWidget(Clear_All);

        Clear_Right = new QPushButton(widget);
        Clear_Right->setObjectName(QString::fromUtf8("Clear_Right"));

        horizontalLayout_3->addWidget(Clear_Right);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Move_Left = new QPushButton(widget);
        Move_Left->setObjectName(QString::fromUtf8("Move_Left"));

        horizontalLayout_4->addWidget(Move_Left);

        Swap = new QPushButton(widget);
        Swap->setObjectName(QString::fromUtf8("Swap"));

        horizontalLayout_4->addWidget(Swap);

        Move_Right = new QPushButton(widget);
        Move_Right->setObjectName(QString::fromUtf8("Move_Right"));

        horizontalLayout_4->addWidget(Move_Right);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setBaseSize(QSize(20, 0));

        horizontalLayout_5->addWidget(comboBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));"));

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1148, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Foto->setText(QString());
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Left", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Right", nullptr));
        Right_Line->setText(QString());
        Set_Left->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 Left", nullptr));
        Set_All->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 Left and Right", nullptr));
        Set_Right->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 Right", nullptr));
        Clear_Left->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 Left", nullptr));
        Clear_All->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 Left and Right", nullptr));
        Clear_Right->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 Right", nullptr));
        Move_Left->setText(QCoreApplication::translate("MainWindow", "Move_Left_To_Right", nullptr));
        Swap->setText(QCoreApplication::translate("MainWindow", "Swap", nullptr));
        Move_Right->setText(QCoreApplication::translate("MainWindow", "Move_Right_To_Left", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\241\320\264\320\265\320\273\320\260\320\271 \321\201\320\262\320\276\320\271 \320\262\321\213\320\261\320\276\321\200", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 Left", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 Right", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 Left and Right", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 Left", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 Right", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 Left and Right", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "Move Left To Right", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "Move Right to Left", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MainWindow", "Swap", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\242\321\213 \321\201\320\264\320\265\320\273\320\260\320\273 \321\201\320\262\320\276\320\271 \320\262\321\213\320\261\320\276\321\200?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
