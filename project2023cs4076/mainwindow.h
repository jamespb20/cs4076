#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void on_allButton_toggled(bool checked);

    void on_vegetarianButton_toggled(bool checked);

    void on_veganButton_toggled(bool checked);

    void on_glutenButton_toggled(bool checked);
private slots:
    void on_prevButton_clicked();

    void on_nextButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_calSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
