#ifndef ANIMATIONGIF_H
#define ANIMATIONGIF_H
#include <QObject>

class QLabel;
class QMovie;

class animationGif : public QObject
{
public:
    animationGif(QObject *parent = nullptr);
    void startMovie();

    void setFilename(const QString &filename)
    {
        mFilename = filename;
    }

    QString getFilename() const
    {
        return mFilename;
    }
    QLabel *getWidget() const{
        return mLabel;
    }
private:
    QLabel *mLabel;
    QMovie *mMovie;
    QString mFilename;
};

#endif // ANIMATIONGIF_H
