#include "newrecipe.h"
#include "ui_newrecipe.h"
#include <QWidget>
#include "RCP.h"
#include <QDebug>
#include <QListWidget>
#include <QVector>
#include<QString>
#include "mainwindow.h"
QString name;
QString desc;
QString ingredient;
QString step;
string newName;
string newDesc;
string newIngredient;
string newStep;
bool vegCheck;
bool veganCheck;
bool glutenCheck;
int calories;

newrecipe::newrecipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newrecipe)
{
    ui->setupUi(this);
}

newrecipe::~newrecipe()
{
    delete ui;
}

void newrecipe::on_nameText_textChanged()
{
    name = ui->nameText->toPlainText();
    newName = name.toStdString();
}

void newrecipe::on_descText_textChanged()
{
    desc = ui->descText->toPlainText();
    newDesc = desc.toStdString();
}

void newrecipe::on_ingredientBox_textChanged()
{
    ingredient = ui->ingredientBox->toPlainText();
    newIngredient = ingredient.toStdString();
}

void newrecipe::on_stepText_textChanged()
{
    step = ui->stepText->toPlainText();
    newStep = step.toStdString();
}

void newrecipe::on_vegBox_toggled(bool checked)
{
    vegCheck = checked;
}

void newrecipe::on_veganBox_toggled(bool checked)
{
    veganCheck = checked;
}

void newrecipe::on_glutenBox_toggled(bool checked)
{
    glutenCheck = checked;
}

void newrecipe::on_calSlider_valueChanged(int value)
{
    ui -> calSlider -> setRange(0, 999);
    calories = value;
    QString calorie = "Calories: ";
    calorie.append(QString::number(calories));
    ui -> calLabel ->setText(calorie);
}

void newrecipe::on_saveButton_clicked()
{
    MainWindow m;
    m.addStuffToLists(newName, newDesc, newStep, newIngredient, calories, vegCheck, veganCheck, glutenCheck);
    close();
}



