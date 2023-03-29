#ifndef NEWRECIPE_H
#define NEWRECIPE_H

#include <QDialog>

namespace Ui {
class newrecipe;
}

class newrecipe : public QDialog
{
    Q_OBJECT

public:
    explicit newrecipe(QWidget *parent = nullptr);
    ~newrecipe();

private slots:
    void on_saveButton_clicked();

    void on_nameText_textChanged();

    void on_stepText_textChanged();

    void on_descText_textChanged();

    void on_ingredientBox_textChanged();

    void on_vegBox_toggled(bool checked);

    void on_veganBox_toggled(bool checked);

    void on_glutenBox_toggled(bool checked);

    void on_calSlider_valueChanged(int value);

private:
    Ui::newrecipe *ui;
};

#endif // NEWRECIPE_H
