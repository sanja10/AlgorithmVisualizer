#ifndef NODE_HPP
#define NODE_HPP

#include "qglobal.h"
#include "qgraphicsitem.h"
#include "qpainter.h"
#include "qwidget.h"
class Node {

public:
    Node();
    Node(qreal posx, qreal posy, qreal width=40, qreal height=40, int value = 0);
    ~Node();

    QGraphicsEllipseItem* getCircle() const;
    QGraphicsTextItem* getValueItem() const;
    qreal getPosX() const;
    qreal getPosY() const;
    qreal getWidth() const;
    qreal getHeight() const;
    void setValue(int value);

private:
    qreal _posx;
    qreal _posy;
    qreal _width;
    qreal _height;
    QGraphicsEllipseItem* _circle;
    QGraphicsTextItem* _valueItem;
    int _value;

    int penWidth = 1;
    //void paintEvent(QPaintEvent *event);

};


#endif // NODE_HPP
