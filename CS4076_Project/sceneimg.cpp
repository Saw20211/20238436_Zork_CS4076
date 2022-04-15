#include "sceneimg.h"
#include "animationgif.h"
#include <QLabel>

sceneImg::sceneImg(QObject *parent)
    :QGraphicsScene(parent)
{
    mGifAnimation = new animationGif(this);
    mGifAnimation->setFilename("C:/users/sawpu/downloads/town.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());
}
