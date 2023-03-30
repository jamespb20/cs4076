#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void addStuffToLists(string name, string desc, string step, string ingredient, int calories, bool vegCheck, bool veganCheck, bool glutenCheck);public slots:
    void on_allButton_toggled(bool checked);

    void on_vegetarianButton_toggled(bool checked);

    void on_veganButton_toggled(bool checked);

    void on_glutenButton_toggled(bool checked);

    void on_nextButton_clicked();
private slots:
    void on_prevButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_calSlider_valueChanged(int value);

    void on_actionAdd_Recipe_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
