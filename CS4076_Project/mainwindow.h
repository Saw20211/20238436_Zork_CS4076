#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "ZorkUL.h"


namespace Ui
{
    class MainWindow;
}

class sceneImg;

class MainWindow : public QMainWindow
{
    Q_OBJECT
    friend class Room;


public:
   explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    class stankFist;



private slots:
    void on_nButton_released();

    void on_wButton_released();

    void on_eButton_released();

    void on_sButton_released();


    void on_telButton_released();

    void on_helpButton_released();



    void on_mapButton_released();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    ZorkUL *zork = new ZorkUL();
        void moveTo(string direction);
    void moveToW(string direction);
    void moveToE(string direction);
    sceneImg *mScene;
};
#endif // MAINWINDOW_H
