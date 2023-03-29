#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QWidget>
#include "RCP.h"
#include <QDebug>
#include <QListWidget>
#include <QVector>
#include "newrecipe.h"

using namespace std;
int counter = 0;
bool all = false;
bool vege = false;
bool vegan = false;
bool gluten = false;
recipes r;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addStuffToLists(string name, string desc, string step, string ingredient, int calories, bool vegCheck, bool veganCheck, bool glutenCheck){
    r.names.append(name);
    r.descriptions.append(desc);
    r.cookingSteps.append(step);
    r.ingredients.append(ingredient);
    r.calories.append(calories);
    r.vegetarian.append(vegCheck);
    r.vegan.append(veganCheck);
    r.glutenFree.append(glutenCheck);
}
void MainWindow::on_prevButton_clicked()
{
    if (counter == 0){
        counter = 0;
    } else{
        counter--;
    }
    if (all == true){
        on_allButton_toggled(true);
    } else if (vege == true){
        on_vegetarianButton_toggled(true);
    } else if (vegan == true){
        on_veganButton_toggled(true);
    } else if (gluten == true){
        on_glutenButton_toggled(true);
    }
}

void MainWindow::on_nextButton_clicked()
{
    if (counter > r.names.length()){
        counter = r.names.length();
    } else{
        counter++;
    }
    if (all == true){
        on_allButton_toggled(true);
    } else if (vege == true){
        on_vegetarianButton_toggled(true);
    } else if (vegan == true){
        on_veganButton_toggled(true);
    } else if (gluten == true){
        on_glutenButton_toggled(true);
    }
}


void MainWindow::on_allButton_toggled(bool checked)
{
    all = true;
    vege = false;
    vegan = false;
    gluten = false;
    QString calString = "Calories: ";
    calString.append(QString::number(r.calories[counter]));
    ui -> nameLabel -> setText(QString::fromStdString(r.names[counter]));
    ui -> descLabel -> setText(QString::fromStdString(r.descriptions[counter]));
    ui -> ingredientLabel -> setText(QString::fromStdString(r.ingredients[counter]));
    ui -> stepsLabel -> setText(QString::fromStdString(r.cookingSteps[counter]));
    ui -> calLabel -> setText(calString);
    cout << "all" << endl;
}


void MainWindow::on_vegetarianButton_toggled(bool checked)
{
    all = false;
    vege = true;
    vegan = false;
    gluten = false;
    for (int i = 0; i < 4; i++){
        if (r.vegetarian[counter] == false){
            counter++;
        } else if (r.vegetarian[counter] == true){
            break;
        }
    }
    QString calString = "Calories: ";
    calString.append(QString::number(r.calories.at(counter)));
    ui -> nameLabel -> setText(QString::fromStdString(r.names.at(counter)));
    ui -> descLabel -> setText(QString::fromStdString(r.descriptions.at(counter)));
    ui -> ingredientLabel -> setText(QString::fromStdString(r.ingredients.at(counter)));
    ui -> stepsLabel -> setText(QString::fromStdString(r.cookingSteps.at(counter)));
    ui -> calLabel -> setText(calString);
    cout << counter << endl;
}


void MainWindow::on_veganButton_toggled(bool checked)
{
    all = false;
    vege = false;
    vegan = true;
    gluten = false;
    for (int i = 0; i < 4; i++){
        if (r.vegan[counter] == false){
            counter++;
        } else if (r.vegan[counter] == true){
            break;
        }
    }
    QString calString = "Calories: ";
    calString.append(QString::number(r.calories[counter]));
    ui -> nameLabel -> setText(QString::fromStdString(r.names[counter]));
    ui -> descLabel -> setText(QString::fromStdString(r.descriptions[counter]));
    ui -> ingredientLabel -> setText(QString::fromStdString(r.ingredients[counter]));
    ui -> stepsLabel -> setText(QString::fromStdString(r.cookingSteps[counter]));
    ui -> calLabel -> setText(calString);
}


void MainWindow::on_glutenButton_toggled(bool checked)
{
    all = false;
    vege = false;
    vegan = false;
    gluten = true;
    for (int i = 0; i < 4; i++){
        if (r.glutenFree[counter] == false){
            counter++;
        } else if (r.glutenFree[counter] == true){
            break;
        }
    }
    QString calString = "Calories: ";
    calString.append(QString::number(r.calories[counter]));
    ui -> nameLabel -> setText(QString::fromStdString(r.names[counter]));
    ui -> descLabel -> setText(QString::fromStdString(r.descriptions[counter]));
    ui -> ingredientLabel -> setText(QString::fromStdString(r.ingredients[counter]));
    ui -> stepsLabel -> setText(QString::fromStdString(r.cookingSteps[counter]));
    ui -> calLabel -> setText(calString);
    cout << counter;
}


void MainWindow::on_actionAdd_Recipe_triggered()
{
    newrecipe recipenew;
    recipenew.setModal(true);
    recipenew.exec();

}

