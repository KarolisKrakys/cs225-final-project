#pragma once
#include <vector>
#include <string>
#include <unordered_map>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <sstream>

// bones of the graph class
typedef std::string Vertex;

class Graph {
    public:
        Graph();
        Graph(const std::string& file_vertex, const std::string& file_connections);
        struct Edge {
            Edge(Vertex d1, Vertex o1){
                destination_=d1;
                origin_=o1;
            };
            double weight = 1.0;
            Vertex destination_;
            Vertex origin_;
            bool operator==(const Edge& other) const {
                return (other.destination_==destination_ && origin_==other.destination_);
            };
        };
        void insertVertex(const std::string& name);
        void insertEdge(const Vertex v1, const Vertex v2); // v1 will point to v2;
        std::vector<Edge*> incidentEdges(const Vertex& v);
        bool areAdjacent(const Vertex& v1, const Vertex& v2) const;
    private:
        std::unordered_map<Vertex, std::vector<Edge*>> adjlist;
};