#ifndef ANIMATIONGIF_H
#define ANIMATIONGIF_H
#include <QObject>

class QLabel;
class QMovie;

//fixed animation error
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
protected:
    void returnResult();

private:
    QLabel *mLabel;
    QMovie *mMovie;
    QString mFilename;
};

#endif // ANIMATIONGIF_H
