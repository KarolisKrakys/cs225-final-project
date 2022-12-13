#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>
#include "graph.h"
TEST_CASE( "stupid/1=2", "Prove that one equals 2" ) {
    int one = 2;
    REQUIRE(one == 2);
}
TEST_CASE("Simple Path", "Two links" ) {
    std::string one = "articles.tsv";
    std::string two = "links.tsv";
    Graph thing(one,two);
    Vertex vertex_one("History_of_Arizona");
    Vertex vertex_two("Emu");
    std::vector<std::string> path = thing.BFS(vertex_one, vertex_two);
    REQUIRE(path.size() == 4);
}