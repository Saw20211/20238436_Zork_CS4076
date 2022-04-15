#include "mainwindow.h"

#include <QApplication>
#include "ZorkUL.h"

union Zor{
    int siz;
    float sal;
};

int main(int argc, char *argv[])
{
    QApplication z(argc, argv);
        MainWindow windowFG;    // makes the window for the game
        windowFG.show();        // outputs the game onto the window
        return z.exec();
}
