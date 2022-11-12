#include "include/graph.h"

Graph::Graph(const std::string& file_vertex, const std::string& file_connections){ 
    std::ifstream vertices(file_vertex);
    std::ifstream edges(file_connections);

    std::string line;

    while(vertices >> line) 
        insertVertex(line);

    std::istringstream iss;
    for(std::string connection; std::getline(edges, connection);) {
        iss.clear();
        iss.str(connection);
        std::string v1, v2;
        if(iss >> v1 >> v2) {
            insertEdge(v1, v2);
        }
    }
}

void Graph::insertVertex(const std::string& name){
    Vertex new_vertex("name");
    std::vector<Edge*> new_list;
    adjlist.insert({new_vertex, new_list});
}
void Graph::insertEdge(Vertex v1, Vertex v2) { // v1 will point to v2;
    Edge* to_push = new Edge(v1, v2);
    adjlist[v1].push_back(to_push);
}

bool Graph::areAdjacent(const Vertex& v1, const Vertex& v2) const { // does v1 point to v2
    for(int i = 0; i < adjlist.at(v1).size(); i++) {
        if(adjlist.at(v1).at(i)->destination_ == v2)
            return true;
    }
    return true;
}
std::vector<Graph::Edge*> Graph::incidentEdges(const Vertex& v) {
    return adjlist.at(v);
}