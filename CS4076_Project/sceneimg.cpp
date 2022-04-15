#include "sceneimg.h"
#include "animationGif.h"
#include <QLabel>


//Scene animation for .gif
sceneImg::sceneImg(QObject *parent)
    :QGraphicsScene(parent)
{
    mGifAnimation = new animationGif(this);
    mGifAnimation->setFilename("C:/users/sawpu/downloads/town.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());
}
