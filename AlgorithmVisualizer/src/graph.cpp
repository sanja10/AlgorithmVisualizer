#include "include/graph.hpp"

Graph::Graph() {
    numOfNodes = numOfEdges = 0;
}

Graph::Graph(const int numOfNodes, const int numOfEdges, const std::vector<std::vector<int>> &adjacency_list) {
    this->adjacency_list = copy_vec(adjacency_list);
    this->numOfEdges = numOfEdges;
    this->numOfNodes = numOfNodes;
}

Graph::Graph(const Graph &g) {

}

int Graph::getNumOfNodes() const {
    return this->numOfNodes;
}

int Graph::getNumOfEdges() const {
    return numOfEdges;
}

std::vector<std::vector<int>> Graph::copy_vec(std::vector<std::vector<int>> const &vec) {
    std::vector<std::vector<int>> new_vec(vec);
    return new_vec;
}

