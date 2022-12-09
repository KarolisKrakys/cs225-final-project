#include "include/graph.h"

Graph::Graph(const std::string& file_vertex, const std::string& file_connections){ 
    std::ifstream vertices(file_vertex);
    std::ifstream edges(file_connections);
    num_nodes = 0;
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
    num_nodes++;
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


void Graph::findPath(Vertex start,Vertex destination, std::map<Vertex, Vertex> parent) {
    // std::vector<Vertex> to_return;
    if(start == destination || destination == "") {
        // to_return.push_back(start);
        std::cout<<start << std::endl;
    } else {
        findPath(start, parent[destination], parent);
        // to_return.push_back(destination);
        std::cout<<destination << std::endl;
    }
    // return to_return;
}

std::vector<Vertex> Graph::BFS(Vertex start, Vertex destination) {
    std::map<Vertex, int> distance;
    std::map<Vertex, bool> visited;
    std::map<Vertex, Vertex> parent;
    std::vector<std::string> path;
    std::queue<Vertex> q;
    distance[start] = 0;
    visited[start] = true;
    q.push(start);

    while(!q.empty()) {
        Vertex front = q.front();
        q.pop();

        for(int i = 0; i < adjlist[front].size(); i++) {
            if(visited.find(adjlist[front][i]->origin_) == visited.end()) {
                q.push(adjlist[front][i]->origin_);
                distance[adjlist[front][i]->origin_] = distance[front] + 1;
                parent[adjlist[front][i]->origin_] = front;
                visited[adjlist[front][i]->origin_] = true;
                std::cout << adjlist[front][i]->origin_ << std::endl;
            }
        }
    }
    std::vector<std::string> ret;
    if(distance.find(start) != distance.end()) {
        findPath(start, destination, parent);
    } else {
        std::cout << "No path found :(" << std::endl;
    }
    return ret;
}   