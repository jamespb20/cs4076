/********************************************************************************
** Form generated from reading UI file 'newrecipe.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWRECIPE_H
#define UI_NEWRECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newrecipe
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *glutenBox;
    QLabel *calLabel;
    QPlainTextEdit *ingredientBox;
    QPlainTextEdit *nameText;
    QCheckBox *vegBox;
    QSlider *calSlider;
    QPlainTextEdit *descText;
    QCheckBox *veganBox;
    QPlainTextEdit *stepText;
    QPushButton *saveButton;

    void setupUi(QDialog *newrecipe)
    {
        if (newrecipe->objectName().isEmpty())
            newrecipe->setObjectName("newrecipe");
        newrecipe->resize(412, 569);
        newrecipe->setMinimumSize(QSize(412, 558));
        gridLayoutWidget = new QWidget(newrecipe);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(9, 9, 381, 514));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        glutenBox = new QCheckBox(gridLayoutWidget);
        glutenBox->setObjectName("glutenBox");

        gridLayout->addWidget(glutenBox, 6, 0, 1, 1);

        calLabel = new QLabel(gridLayoutWidget);
        calLabel->setObjectName("calLabel");

        gridLayout->addWidget(calLabel, 7, 0, 1, 1);

        ingredientBox = new QPlainTextEdit(gridLayoutWidget);
        ingredientBox->setObjectName("ingredientBox");

        gridLayout->addWidget(ingredientBox, 2, 0, 1, 1);

        nameText = new QPlainTextEdit(gridLayoutWidget);
        nameText->setObjectName("nameText");

        gridLayout->addWidget(nameText, 0, 0, 1, 1);

        vegBox = new QCheckBox(gridLayoutWidget);
        vegBox->setObjectName("vegBox");

        gridLayout->addWidget(vegBox, 4, 0, 1, 1);

        calSlider = new QSlider(gridLayoutWidget);
        calSlider->setObjectName("calSlider");
        calSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(calSlider, 8, 0, 1, 1);

        descText = new QPlainTextEdit(gridLayoutWidget);
        descText->setObjectName("descText");

        gridLayout->addWidget(descText, 1, 0, 1, 1);

        veganBox = new QCheckBox(gridLayoutWidget);
        veganBox->setObjectName("veganBox");

        gridLayout->addWidget(veganBox, 5, 0, 1, 1);

        stepText = new QPlainTextEdit(gridLayoutWidget);
        stepText->setObjectName("stepText");

        gridLayout->addWidget(stepText, 3, 0, 1, 1);

        saveButton = new QPushButton(newrecipe);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(150, 530, 83, 29));

        retranslateUi(newrecipe);

        QMetaObject::connectSlotsByName(newrecipe);
    } // setupUi

    void retranslateUi(QDialog *newrecipe)
    {
        newrecipe->setWindowTitle(QCoreApplication::translate("newrecipe", "Dialog", nullptr));
        glutenBox->setText(QCoreApplication::translate("newrecipe", "Gluten Free", nullptr));
        calLabel->setText(QCoreApplication::translate("newrecipe", "Calories: 0", nullptr));
        ingredientBox->setPlainText(QCoreApplication::translate("newrecipe", "Ingredients", nullptr));
        nameText->setPlainText(QCoreApplication::translate("newrecipe", "Dish Name", nullptr));
        vegBox->setText(QCoreApplication::translate("newrecipe", "Vegetarian", nullptr));
        descText->setPlainText(QCoreApplication::translate("newrecipe", "Dish Description", nullptr));
        veganBox->setText(QCoreApplication::translate("newrecipe", "Vegan", nullptr));
        stepText->setPlainText(QCoreApplication::translate("newrecipe", "Cooking steps", nullptr));
        saveButton->setText(QCoreApplication::translate("newrecipe", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newrecipe: public Ui_newrecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWRECIPE_H
