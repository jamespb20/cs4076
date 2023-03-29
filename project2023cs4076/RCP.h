#ifndef RCP_H
#define RCP_H
#include <iostream>
#include <string>
#include "mainwindow.h"
#include "QStringList"
using namespace std;

class recipes{
protected:
    string names[4];
    string descriptions[4];
    string ingredients[4];
    string cookingSteps[4];
    int calories[4];
    bool vegan[4];
    bool vegetarian[4];
    bool glutenFree[4];

  public:
    recipes() {
      names[0] = "Chicken Stir-Fry";
      descriptions[0] = "A delicious stir-fry with chicken, vegetables, and rice.";
      ingredients[0] = "chicken breast, mixed vegetables, rice, soy sauce";
      cookingSteps[0] = "1. Cook rice according to package instructions.\n2. Cut chicken into bite-sized pieces and stir-fry with mixed vegetables in a pan.\n3. Add soy sauce and stir until everything is cooked through.\n4. Serve hot with rice.";
      calories[0] = 500;
      vegan[0] = false;
      vegetarian[0] = false;
      glutenFree[0] = true;

      names[1] = "Spaghetti Bolognese";
      descriptions[1] = "A classic Italian dish with spaghetti and a hearty meat sauce.";
      ingredients[1] = "spaghetti, ground beef, tomato sauce, garlic";
      cookingSteps[1] = "1. Cook spaghetti according to package instructions.\n2. Brown ground beef in a pan and add garlic.\n3. Pour tomato sauce over the beef and let it simmer for 10-15 minutes.\n4. Serve the sauce over the cooked spaghetti.";
      calories[1] = 600;
      vegan[1] = false;
      vegetarian[1] = false;
      glutenFree[1] = false;

      names[2] = "Chocolate Chip Cookies";
      descriptions[2] = "A sweet treat that's perfect for any occasion.";
      ingredients[2] = "flour, sugar, chocolate chips, butter";
      cookingSteps[2] = "1. Preheat oven to 375F.\n2. Mix flour, sugar, and chocolate chips in a bowl.\n3. Melt butter in a saucepan and pour over dry ingredients.\n4. Mix everything together until it forms a dough.\n5. Form dough into balls and place on a baking sheet.\n6. Bake for 10-12 minutes, or until golden brown.";
      calories[2] = 200;
      vegan[2] = false;
      vegetarian[2] = true;
      glutenFree[2] = false;

      names[3] = "Vegetable Soup";
      descriptions[3] = "A healthy and hearty soup packed with fresh vegetables.";
      ingredients[3] = "carrots, celery, onion, potatoes, vegetable broth";
      cookingSteps[3] = "1. Chop carrots, celery, onion, and potatoes into small pieces.\n2. Heat vegetable broth in a pot and add vegetables.\n3. Let the soup simmer for 20-25 minutes, or until vegetables are tender.\n4. Serve hot.";
      calories[3] = 150;
      vegan[3] = true;
      vegetarian[3] = true;
      glutenFree[3] = true;
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
    friend void MainWindow::on_allButton_toggled(bool checked);

    friend void MainWindow::on_vegetarianButton_toggled(bool checked);

    friend void MainWindow::on_veganButton_toggled(bool checked);

    friend void MainWindow::on_glutenButton_toggled(bool checked);
};

#endif // RCP_H
