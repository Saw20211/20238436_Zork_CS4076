#include "mainwindow.h"

#include <QApplication>
#include "ZorkUL.h"

namespace random{
    namespace function{
    void print(const char* text)
    {
        std::cout << text << std::endl;
    }
    }
    void print_again(){}
}


int main(int argc, char *argv[])
{
    QApplication z(argc, argv);
        MainWindow windowFG;    // makes the window for the game
        windowFG.show();        // outputs the game onto the window
        return z.exec();
}
