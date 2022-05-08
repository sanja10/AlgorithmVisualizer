#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include "include/sortwindow.hpp"
#include "include/graphwindow.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_sortButton_clicked();

    void on_graphButton_clicked();

private:
    Ui::MainWindow *ui;
    SortWindow *sortWindow;
    GraphWindow *graphWindow;
};
#endif // MAINWINDOW_HPP
