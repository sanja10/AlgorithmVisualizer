#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "node.hpp"

class Graph {
public:
    Graph();
    Graph(const Graph &g);
    Graph(const int numOfNodes, const int numOfEdges, const std::vector<std::vector<int>> &adjacency_list);

    int getNumOfNodes() const;
    int getNumOfEdges() const;
    int getNode(int i, int j) const;

    std::vector<std::vector<int>> adjacency_list;
private:
    int numOfNodes;
    int numOfEdges;

    float radius = 1.0;

    std::vector<std::vector<int>> copy_vec(std::vector<std::vector<int>> const &vec);

};
#endif // GRAPH_H
