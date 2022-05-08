#ifndef GRAPHWINDOW_HPP
#define GRAPHWINDOW_HPP

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPainter>
#include "node.hpp"

namespace Ui {
class GraphWindow;
}

class GraphWindow : public QWidget {

    Q_OBJECT

public:
    explicit GraphWindow(QWidget *parent = nullptr);
    ~GraphWindow();


private:
    Ui::GraphWindow *ui;

    QGraphicsScene *scene;
    QGraphicsView *view;
    std::vector<std::vector<int>> adjacency_list = {{1}, {0,3,2}, {2}, {1,5}, {5}, {3,4,6}, {6}};
    int numOfNode = 7;
    Node node0;

    void draw();
    void connectNodes(const Node &node1, const Node &node2);

};

#endif // GRAPHWINDOW_HPP
