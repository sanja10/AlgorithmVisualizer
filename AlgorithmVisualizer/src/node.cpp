#include "include/node.hpp"
#include "qpen.h"

Node::Node() {

}
Node::Node(qreal posx, qreal posy, qreal width, qreal height, int value) :
     _posx(posx), _posy(posy), _width(width), _height(height), _value(value) {
    _circle = new QGraphicsEllipseItem;
    _valueItem = new QGraphicsTextItem;
    _circle->setRect(_posx, _posy, _width, _height);
    _circle->setPen(QPen(Qt::black, 2));

    _valueItem->setDefaultTextColor(Qt::black);
    _valueItem->setScale(3.5);
    _valueItem->setPlainText(QString::number(_value));
    _valueItem->setParentItem(_circle);
    _valueItem->setPos(_posx + _width/5.0, _posy + _height/9.0 );

}

Node::~Node() {
}

QGraphicsEllipseItem* Node::getCircle() const {
    return _circle;
}
QGraphicsTextItem* Node::getValueItem() const {
    return _valueItem;
}

qreal Node::getPosX() const {
    return _posx;
}
qreal Node::getPosY() const {
    return _posy;
}
qreal Node::getWidth() const {
    return _width;
}
qreal Node::getHeight() const {
    return _height;
}

void Node::setValue(int value) {
    _value = value;
    _valueItem->setPlainText(QString::number(_value));
}

//void Node::paintEvent(QPaintEvent *paint) {

//}
