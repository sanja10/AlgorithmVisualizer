#include "include/graphwindow.hpp"
#include "qgraphicsitem.h"
#include "ui_graphwindow.h"

GraphWindow::GraphWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GraphWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Visualization of sorting algorithms");
    scene = new QGraphicsScene(this);

    ui->graphView->setScene(scene);

    draw();
}

GraphWindow::~GraphWindow() {
    delete ui;
}

void GraphWindow::draw() {
    ui->graphView->scene()->clear();

    Node node3 = Node(0,-500,100,100);
    Node node1 = Node(-200,-300,100,100);
    Node node5 = Node(200,-300,100,100);
    node0 = Node(-300,-100,100,100);
    Node node2 = Node(-100,-100,100,100);
    Node node4 = Node(100,-100,100,100);
    Node node6 = Node(300,-100,100,100);

    //QGraphicsLineItem *line = new QGraphicsLineItem;
    //line->setLine(110,60,300,350);
    node0.setValue(0);
    node1.setValue(1);
    node2.setValue(2);
    node3.setValue(3);
    node4.setValue(4);
    node5.setValue(5);
    node6.setValue(6);
    scene->addItem(node0.getCircle());
    scene->addItem(node1.getCircle());
    scene->addItem(node2.getCircle());
    scene->addItem(node3.getCircle());
    scene->addItem(node4.getCircle());
    scene->addItem(node5.getCircle());
    scene->addItem(node6.getCircle());
    //scene->addItem(line);
    connectNodes(node3, node1);
    connectNodes(node3, node5);
    connectNodes(node1, node0);
    connectNodes(node1, node2);
    connectNodes(node5, node4);
    connectNodes(node5, node6);
    //addNodeValue();
}

void GraphWindow::connectNodes(const Node &node1, const Node &node2) {
    QPointF topP = QPointF(node1.getPosX()+node1.getWidth()/2.0,node1.getPosY()+node1.getHeight());
    QPointF bottomP = QPointF(node2.getPosX()+node2.getWidth()/2.0, node2.getPosY());

    QGraphicsLineItem *line = new QGraphicsLineItem;
    line->setLine(topP.x(), topP.y(),bottomP.x(), bottomP.y());
    scene->addItem(line);
}

