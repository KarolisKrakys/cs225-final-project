
#include "include/graph.h"

// to run use the command clang++ -std=c++20 -g -Iincludes main.cpp graph.cpp -o main
// need to make a makefile

std::vector<std::string> argsToStrings(int argCount, char *args[]) {
    std::vector<std::string> ret;
    ret.resize(argCount);
    for (size_t i = 0; i < (size_t) argCount; i++) {
        for (size_t j = 0; j < std::strlen(args[i]); j++) {
            ret[i] += args[i][j];
        }            
    }
    return ret;
}



int main(int argc, char *argv[]) {
    // std::string one = "../data/articles.tsv";
    // std::string two = "../data/links.tsv";
    std::vector<std::string> arguments = argsToStrings(argc, argv);
    std::transform(arguments[1].begin(), arguments[1].end(), arguments[1].begin(), [](char c){ return std::tolower(c); });

    std::ifstream vertices(arguments[2]);
    std::ifstream edges(arguments[3]);

    if (!vertices.is_open() || !vertices.good()) {
        std::cout << "Invalid File or Invalid File Path." << std::endl;
        return 0;
    }
    if (!edges.is_open() || !edges.good()) {
        std::cout << "Invalid File or Invalid File Path." << std::endl;
        return 0;
    }
    Graph g(arguments[2], arguments[3]);
    if(arguments[1] == "pagerank") 
        g.computePageRank();
    if(arguments[1] == "bfs") {
        if(arguments[4] == arguments[5]) {
            std::cout << "Exiting the program, starting vertex and ending vertex are the same";
        }
        g.BFS(arguments[4], arguments[5]);
    }
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    toTest.computePageRank();
    toTest.filterRankings();
    int size = toTest.filteredRankingKeys.size();
    for(int i = size; i > (size - 10); i--) {
        std::cout << "Title: " << toTest.filteredRankings[i] >> " Rank: " >> toTest.filteredRankingKeys[i] << "\n" << std::endl;
    }
}
