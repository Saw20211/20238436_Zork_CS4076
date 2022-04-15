#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include "ZorkUL.h"
#include <iostream>
#include "sceneimg.h"
#include "Dialogues.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mScene = new sceneImg(this);
    ui->graphicsView->setScene(mScene);
//start up
     ui->gameText->append(QString::fromStdString(zork->welcomeMessage() + "\n"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//South and North movements
void MainWindow::moveTo(string direction)
{

    if (direction == "teleport")
    {
        ui->gameText->append(QString::fromStdString(zork->teleport() + "\n"));
    }
    else
    {
        ui->gameText->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));
    }
}

void MainWindow::moveToW(string direction)
{
    if (direction == "west")
    {
        ui->gameText->append(QString::fromStdString(zork->goToRoom(direction) + "\n"));
    }
    else
    {
        ui->gameText->setText("YOU WON!");
    }
}

void MainWindow::moveToE(string direction)
{

        ui->gameText->setText("YOU WON! Check Your Terminal For a 'Secret Message'");

}



void MainWindow::on_nButton_released()
{
moveTo("north");
}
//Friend Function
class StankFist{
public:
    StankFist(){stinkyVar=0;}
private:
    int stinkyVar;

    friend void stFriend(StankFist &low);
};

void stFriend(StankFist &low){
    string name;
    low.stinkyVar= 1;
    cout << "The Item is in this room you won the " <<low.stinkyVar << "st elden ring!" << endl;

    cout << name << "You are now the elden lord" << endl;
}

void MainWindow::on_eButton_released()
{
    StankFist win;
    stFriend(win);
    moveToE("East");
}


void MainWindow::on_wButton_released()
{
    moveToW("west");
}

void MainWindow::on_sButton_released()
{
moveTo("south");
}



void MainWindow::on_telButton_released()
{
     moveTo("teleport");
}


void MainWindow::on_helpButton_released()
{
    ui->gameText->append(QString::fromStdString(zork->printHelp()));
}


void MainWindow::on_mapButton_released()
{
    ui->mapBox->append(QString::fromStdString(zork->showMap()));
}


void MainWindow::on_pushButton_clicked()
{
    //using QT commands this allows us to quit the game
}






