#pragma once
#include <vector>
#include <string>


// bones of the graph class
class Graph {
    struct Vertex {
        std::string name;
    };
    struct Node {
        Vertex destination;
        Vertex origin;
        Node();
        Node(Vertex d1, Vertex o1);
    };
    void insertVertex(std::string name);
    void insertEdge(Vertex v1, Vertex v2);
    std::vector<Node*> incidentEdges(Vertex v);
    bool areAdjacent(Vertex v1, Vertex v2);
};