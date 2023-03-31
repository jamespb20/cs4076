/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_Recipe;
    QAction *actionExit;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameLabel;
    QLabel *descLabel;
    QLabel *ingredientLabel;
    QLabel *stepsLabel;
    QLabel *calLabel;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *allButton;
    QRadioButton *veganButton;
    QLabel *maxCals;
    QRadioButton *glutenButton;
    QRadioButton *vegetarianButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionAdd_Recipe = new QAction(MainWindow);
        actionAdd_Recipe->setObjectName("actionAdd_Recipe");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(170, 10, 621, 531));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(verticalLayoutWidget_2);
        nameLabel->setObjectName("nameLabel");

        verticalLayout_2->addWidget(nameLabel);

        descLabel = new QLabel(verticalLayoutWidget_2);
        descLabel->setObjectName("descLabel");

        verticalLayout_2->addWidget(descLabel);

        ingredientLabel = new QLabel(verticalLayoutWidget_2);
        ingredientLabel->setObjectName("ingredientLabel");

        verticalLayout_2->addWidget(ingredientLabel);

        stepsLabel = new QLabel(verticalLayoutWidget_2);
        stepsLabel->setObjectName("stepsLabel");

        verticalLayout_2->addWidget(stepsLabel);

        calLabel = new QLabel(verticalLayoutWidget_2);
        calLabel->setObjectName("calLabel");

        verticalLayout_2->addWidget(calLabel);

        prevButton = new QPushButton(verticalLayoutWidget_2);
        prevButton->setObjectName("prevButton");

        verticalLayout_2->addWidget(prevButton);

        nextButton = new QPushButton(verticalLayoutWidget_2);
        nextButton->setObjectName("nextButton");

        verticalLayout_2->addWidget(nextButton);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 11, 188, 471));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        allButton = new QRadioButton(gridLayoutWidget);
        allButton->setObjectName("allButton");

        gridLayout->addWidget(allButton, 0, 0, 1, 1);

        veganButton = new QRadioButton(gridLayoutWidget);
        veganButton->setObjectName("veganButton");

        gridLayout->addWidget(veganButton, 3, 0, 1, 1);

        maxCals = new QLabel(gridLayoutWidget);
        maxCals->setObjectName("maxCals");

        gridLayout->addWidget(maxCals, 5, 0, 1, 1);

        glutenButton = new QRadioButton(gridLayoutWidget);
        glutenButton->setObjectName("glutenButton");

        gridLayout->addWidget(glutenButton, 4, 0, 1, 1);

        vegetarianButton = new QRadioButton(gridLayoutWidget);
        vegetarianButton->setObjectName("vegetarianButton");

        gridLayout->addWidget(vegetarianButton, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAdd_Recipe);
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdd_Recipe->setText(QCoreApplication::translate("MainWindow", "Add Recipe", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        nameLabel->setText(QString());
        descLabel->setText(QString());
        ingredientLabel->setText(QString());
        stepsLabel->setText(QString());
        calLabel->setText(QString());
        prevButton->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        nextButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        allButton->setText(QCoreApplication::translate("MainWindow", "All Recipes", nullptr));
        veganButton->setText(QCoreApplication::translate("MainWindow", "Vegan", nullptr));
        maxCals->setText(QString());
        glutenButton->setText(QCoreApplication::translate("MainWindow", "Gluten Free", nullptr));
        vegetarianButton->setText(QCoreApplication::translate("MainWindow", "Vegetarian", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
