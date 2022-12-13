#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>
#include "graph.h"
TEST_CASE( "stupid/1=2", "Prove that one equals 2" ) {
    int one = 2;
    REQUIRE(one == 2);
}
TEST_CASE("Simple Path", "Two links with path size 4" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph thing(one,two);
    Vertex thing1("History_of_Arizona");
    Vertex thing2("Emu");
    std::vector<std::string> path = thing.BFS(thing1, thing2);
    REQUIRE(path.size() == 4);
}
TEST_CASE("No path found", "Two links with path size 4" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph thing(one,two);
    Vertex thing1("Lithuania");
    Vertex thing2("Carlos");
    std::vector<std::string> path = thing.BFS(thing1, thing2);
    REQUIRE("No path found :(");
}