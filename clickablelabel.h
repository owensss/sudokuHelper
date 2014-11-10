#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>

class ClickableLabel : public QLabel
{
    Q_OBJECT
public:
    explicit ClickableLabel(QWidget *parent = 0);
signals:
    void clicked();
    void rclicked();
protected:
    void mousePressEvent(QMouseEvent *ev);
};

#endif // CLICKABLELABEL_H
