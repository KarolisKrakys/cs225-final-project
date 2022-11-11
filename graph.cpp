#include "include/graph.h"

Graph::Graph(std::string file_vertex, std::string file_connections){ 
    f=file_vertex;
    f2=file_connections;
}

void Graph::insertVertex(std::string name){
    Vertex new_vertex("name");
    std::vector<Edge*> new_list;
    adjlist.insert({new_vertex, new_list});
}
void Graph::insertEdge(Vertex v1, Vertex v2) { // v1 will point to v2;
    Edge* to_push = new Edge(v1, v2);
    adjlist[v1].push_back(to_push);
}

bool Graph::areAdjacent(Vertex v1, Vertex v2) const {
    return true;
}