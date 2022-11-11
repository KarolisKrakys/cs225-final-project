#pragma once
#include <vector>
#include <string>
#include <unordered_map>
#include <fstream>
#include <iostream>
#include <algorithm>

// bones of the graph class
typedef std::string Vertex;

class Graph {
    public:
        Graph();
        Graph(std::string file_vertex, std::string file_connections);
        struct Edge {
            Edge(Vertex d1, Vertex o1){
                destination_=d1;
                origin_=o1;
            };
            Vertex destination_;
            Vertex origin_;
            bool operator==(const Edge& other) const {
                return (other.destination_==destination_ && origin_==other.destination_);
            };
        };
        void insertVertex(std::string name);
        void insertEdge(Vertex v1, Vertex v2); // v1 will point to v2;
        //std::vector<Edge*> incidentEdges(Vertex v) const;
        bool areAdjacent(Vertex v1, Vertex v2) const;
    private:
        std::string f;
        std::string f2;
        std::unordered_map<Vertex, std::vector<Edge*>> adjlist;
};