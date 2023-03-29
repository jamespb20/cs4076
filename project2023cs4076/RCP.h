#ifndef RCP_H
#define RCP_H
#include <iostream>
#include <string>
#include <QVector>
#include "mainwindow.h"
using namespace std;

class recipes{
protected:
    QVector<string> names;
    QVector<string> descriptions;
    QVector<string> ingredients;
    QVector<string> cookingSteps;
    QVector<int> calories;
    QVector<bool> vegan;
    QVector<bool> vegetarian;
    QVector<bool> glutenFree;

  public:
    recipes() {
      names.append("Chicken Stir-Fry");
      descriptions.append("A delicious stir-fry with chicken, vegetables, and rice.");
      ingredients.append("chicken breast, mixed vegetables, rice, soy sauce");
      cookingSteps.append("1. Cook rice according to package instructions.\n2. Cut chicken into bite-sized pieces and stir-fry with mixed vegetables in a pan.\n3. Add soy sauce and stir until everything is cooked through.\n4. Serve hot with rice.");
      calories.append(500);
      vegan.append(false);
      vegetarian.append(false);
      glutenFree.append(true);

      names.append("Spaghetti Bolognese");
      descriptions.append("A classic Italian dish with spaghetti and a hearty meat sauce.");
      ingredients.append("spaghetti, ground beef, tomato sauce, garlic");
      cookingSteps.append("1. Cook spaghetti according to package instructions.\n2. Brown ground beef in a pan and add garlic.\n3. Pour tomato sauce over the beef and let it simmer for 10-15 minutes.\n4. Serve the sauce over the cooked spaghetti.");
      calories.append(600);
      vegan.append(false);
      vegetarian.append(false);
      glutenFree.append(false);

      names.append("Chocolate Chip Cookies");
      descriptions.append("A sweet treat that's perfect for any occasion.");
      ingredients.append("flour, sugar, chocolate chips, butter");
      cookingSteps.append("1. Preheat oven to 375F.\n2. Mix flour, sugar, and chocolate chips in a bowl.\n3. Melt butter in a saucepan and pour over dry ingredients.\n4. Mix everything together until it forms a dough.\n5. Form dough into balls and place on a baking sheet.\n6. Bake for 10-12 minutes, or until golden brown");
      calories.append(200);
      vegan.append(false);
      vegetarian.append(true);
      glutenFree.append(false);

      names.append("Vegetable Soup");
      descriptions.append("A healthy and hearty soup packed with fresh vegetables.");
      ingredients.append("carrots, celery, onion, potatoes, vegetable broth");
      cookingSteps.append("1. Chop carrots, celery, onion, and potatoes into small pieces.\n2. Heat vegetable broth in a pot and add vegetables.\n3. Let the soup simmer for 20-25 minutes, or until vegetables are tender.\n4. Serve hot.");
      calories.append(150);
      vegan.append(true);
      vegetarian.append(true);
      glutenFree.append(true);
    }

    void veganPrinter() {
        for (int i = 0; i < 4; i++){
            if (vegan[i] == true){
                cout << names[i] << endl;
                cout << descriptions[i] << endl;
                cout << ingredients[i] << endl;
                cout << cookingSteps[i] << endl;
                cout << "Calories: " <<calories[i] << endl;
            }
        }
    }
    void vegetarianPrinter() {
        for (int i = 0; i < 4; i++){
            if (vegetarian[i] == true){
                cout << names[i] << endl;
                cout << descriptions[i] << endl;
                cout << ingredients[i] << endl;
                cout << cookingSteps[i] << endl;
                cout << "Calories: " <<calories[i] << endl;
            }
        }
    }
    void glutenPrinter() {
        for (int i = 0; i < 4; i++){
            if (glutenFree[i] == true){
                cout << names[i] << endl;
                cout << descriptions[i] << endl;
                cout << ingredients[i] << endl;
                cout << cookingSteps[i] << endl;
                cout << "Calories: " <<calories[i] << endl;
            }
        }
    }
    void calorieChecker(int cal){
        for (int i = 0; i < 4; i++){
            if (calories[i] < cal){
                cout << names[i] << endl;
                cout << descriptions[i] << endl;
                cout << ingredients[i] << endl;
                cout << cookingSteps[i] << endl;
                cout << "Calories: " <<calories[i] << endl;
            }
        }
    }
    friend void MainWindow::addStuffToLists(string name, string desc, string step, string ingredient, int calories, bool vegCheck, bool veganCheck, bool glutenCheck);

    friend void MainWindow::on_allButton_toggled(bool checked);

    friend void MainWindow::on_vegetarianButton_toggled(bool checked);

    friend void MainWindow::on_veganButton_toggled(bool checked);

    friend void MainWindow::on_glutenButton_toggled(bool checked);

    friend void MainWindow::on_nextButton_clicked();
};

#endif // RCP_H
