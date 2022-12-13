#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>
#include "graph.h"

TEST_CASE("Basic Graph Constructor", "[Graph]" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest1(one,two);
    REQUIRE(&toTest1 != NULL);
}

TEST_CASE("Graph equality", "[Graph]" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest1(one,two);
    REQUIRE(toTest1.equals(toTest1));
}

TEST_CASE("Inserting a Vertex", "[Graph]" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    Vertex thing1("History_of_Arizona");
    size_t originalNumNodes = toTest.getNumNodes();
    toTest.insertVertex("shikhar");
    REQUIRE(originalNumNodes != toTest.getNumNodes());
    REQUIRE(originalNumNodes + 1 == toTest.getNumNodes());
}

TEST_CASE("Inserting an edge", "[Graph]") {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    size_t originalNumEdges = toTest.getEdgeCountNaive();
    Vertex newVertex1("History_of_Arizona");
    Vertex newVertex2("Adam_Smith");
    toTest.insertEdge(newVertex1, newVertex2);
    toTest.insertVertex("shikhar");
    REQUIRE(originalNumEdges + 1 == toTest.getEdgeCountNaive());
}

TEST_CASE("Simple Path", "[Graph]" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    Vertex thing1("History_of_Arizona");
    Vertex thing2("Jesus");
    std::vector<std::string> path = toTest.BFS(thing1, thing2);
    REQUIRE(path.size() == 3);
}

TEST_CASE("Difficult Path", "[Graph]" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    Vertex thing1("History_of_Arizona");
    Vertex thing2("Zulu");
    std::vector<std::string> path = toTest.BFS(thing1, thing2);
    REQUIRE(path.size() == 4);
}

TEST_CASE("No path found case", "[Graph]") {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    Vertex thing1("Lithuania");
    Vertex thing2("Carlos");
    std::vector<std::string> path = toTest.BFS(thing1, thing2);
    REQUIRE(path.size() == 0);
}


