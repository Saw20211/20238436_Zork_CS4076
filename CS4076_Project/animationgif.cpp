#include "animationgif.h"
#include <QLabel>
#include <QMovie>


animationGif::animationGif(QObject *parent)
    : QObject(parent)
{
    mLabel = new QLabel(static_cast<QWidget *>(parent->parent()->parent()));
    mMovie = new QMovie(this);



    /*
    mLabel = new QLabel;
    mMovie = new QMovie(this);
    mMovie->setFileName(fileName);
    mMovie->start();
    mLabel->setMovie(mMovie);*/
}

void animationGif::startMovie()
{
    mMovie->setFileName(mFilename);
    mMovie->start();
    mLabel->setMovie(mMovie);
}
