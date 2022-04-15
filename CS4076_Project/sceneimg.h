#ifndef SCENEIMG_H
#define SCENEIMG_H
#include <QGraphicsScene>

class animationGif;

class sceneImg : public QGraphicsScene
{
public:
    sceneImg(QObject *parent = nullptr);

protected:

private:
    animationGif *mGifAnimation;
};

#endif // SCENEIMG_H
