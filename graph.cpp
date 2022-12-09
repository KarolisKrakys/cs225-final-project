#include "include/graph.h"
#include <unordered_set>
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
    return false;
}
std::vector<Graph::Edge*> Graph::incidentEdges(const Vertex& v) {
    return adjlist.at(v);
}


std::vector<Vertex> Graph::findPath(Vertex start, Vertex destination, std::map<Vertex, Vertex>& parent) {
  std::vector<Vertex> path;
  Vertex current = destination;
  while (current != start) {
    path.push_back(current);
    current = parent[current];
  }
  path.push_back(start);
  std::reverse(path.begin(), path.end());
  return path;
}

std::vector<Vertex> Graph::BFS(Vertex start, Vertex destination) {
  std::unordered_set<Vertex> visited;
  std::queue<Vertex> q;
  q.push(start);
  std::map<Vertex, Vertex> parent;

  while(!q.empty()) {
    Vertex front = q.front();
    q.pop();

    for(int i = 0; i < adjlist[front].size(); i++) {
      if(visited.find(adjlist[front][i]->origin_) == visited.end()) {
        q.push(adjlist[front][i]->origin_);
        visited.insert(adjlist[front][i]->origin_);
         parent[adjlist[front][i]->origin_] = front;
      }
    }
  }

  std::vector<Vertex> ret;
  if(visited.find(destination) != visited.end()) {
    ret = findPath(start, destination, parent);

    for (const Vertex& v : ret) {
      std::cout << v << " ";
    }
    std::cout << std::endl;
  } else {
    std::cout << "No path found :(" << std::endl;
  }
  return ret;
}