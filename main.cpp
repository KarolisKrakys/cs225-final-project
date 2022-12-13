
#include "include/graph.h"

// to run use the command clang++ -std=c++20 -g -Iincludes main.cpp graph.cpp -o main
// need to make a makefile
int main() {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph thing(one,two);
    Vertex thing1("History_of_Arizona");
    Vertex thing2("Emu");
    std::vector<std::string> path = thing.BFS(thing1, thing2);
    std::cout << "Hello0000" << std::endl;
    std::cout << path.size() << std::endl;
    for(int i = 0; i < path.size(); i++) {
        std::cout << path[i] << " ";
    }
    // for(int i = 0; i < thing.adjlist["Nintendo"].size(); i++) {
    //     std::cout << thing.adjlist["Nintendo"][i]->origin_ << std::endl;
    // }
    return 0;
}
