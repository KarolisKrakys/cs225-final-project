#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>
#include "graph.h"

TEST_CASE("Basic Graph Constructor", "[Graph::Graph]" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest1(one,two);
    REQUIRE(&toTest1 != NULL);
}

TEST_CASE("Graph equality", "[Graph::Equals]" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest1(one,two);
    REQUIRE(toTest1.equals(toTest1));
}

TEST_CASE("Graph equality 2", "[Graph::Equals]" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest1(one,two);
    Graph toTest2(two, one);
    REQUIRE(false == toTest1.equals(toTest2));
}

TEST_CASE("Inserting single Vertex", "[Graph::InsertVertex]" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    size_t originalNumNodes = toTest.getNumNodes();
    toTest.insertVertex("shikhar");
    REQUIRE(originalNumNodes != toTest.getNumNodes());
    REQUIRE(originalNumNodes + 1 == toTest.getNumNodes());
}

TEST_CASE("Inserting multiple vertices", "[Graph::InsertVertex]" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    size_t originalNumNodes = toTest.getNumNodes();
    toTest.insertVertex("Shikhar");
    toTest.insertVertex("Karolis");
    toTest.insertVertex("Carlos");
    toTest.insertVertex("Lukas");
    toTest.insertVertex("Christopher");
    REQUIRE(originalNumNodes != toTest.getNumNodes());
    REQUIRE(originalNumNodes + 5 == toTest.getNumNodes());
}

TEST_CASE("Inserting an edge", "[Graph::InsertEdge]") {
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

TEST_CASE("Inserting multiple edges", "[Graph::InsertEdge]") {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    size_t originalNumEdges = toTest.getEdgeCountNaive();
    Vertex newVertex1("History_of_Arizona");
    Vertex newVertex2("Adam_Smith");
    Vertex newVertex3("Krakatoa");
    Vertex newVertex4("Kylie_Minogue");
    Vertex newVertex5("Kyrgyzstan");
    Vertex newVertex6("Laika");
    toTest.insertEdge(newVertex1, newVertex2);
    toTest.insertEdge(newVertex1, newVertex3);
    toTest.insertEdge(newVertex1, newVertex4);
    toTest.insertEdge(newVertex1, newVertex5);
    toTest.insertEdge(newVertex1, newVertex6);
    REQUIRE(originalNumEdges + 5 == toTest.getEdgeCountNaive());
}

TEST_CASE("Simple Path", "[Graph::BFS]" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    Vertex thing1("Jesus");
    Vertex thing2("Christianity");
    std::vector<std::string> path = toTest.BFS(thing1, thing2);
    REQUIRE(path.size() == 2);
}

TEST_CASE("Difficult Path", "[Graph::BFS]" ) {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    Vertex thing1("History_of_Arizona");
    Vertex thing2("Zulu");
    std::vector<std::string> path = toTest.BFS(thing1, thing2);
    REQUIRE(path.size() == 4);
}

TEST_CASE("No path found case", "[Graph::BFS]") {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    Vertex thing1("Lithuania");
    Vertex thing2("Carlos");
    std::vector<std::string> path = toTest.BFS(thing1, thing2);
    REQUIRE(path.size() == 0);
}

TEST_CASE("Are adjacent true case", "[Graph::AreAdjacent]") {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    Vertex thing1("History_of_Arizona");
    Vertex thing2("Christianity");
    REQUIRE(toTest.areAdjacent(thing1, thing2) == true);
}

TEST_CASE("Are adjacent true case 2", "[Graph::AreAdjacent]") {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    Vertex thing1("Christianity");
    Vertex thing2("Jesus");
    REQUIRE(toTest.areAdjacent(thing1, thing2) == true);
}

TEST_CASE("Are adjacent false case", "[Graph::AreAdjacent]") {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    Vertex thing1("History_of_Arizona");
    Vertex thing2("Shikhar");
    REQUIRE(toTest.areAdjacent(thing1, thing2) == false);
}

TEST_CASE("Are adjacent false case 2", "[Graph::AreAdjacent]") {
    // Despite there being a path from V1 to V2, they should not be adjacent!
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    Vertex thing1("History_of_Arizona");
    Vertex thing2("Zulu");
    REQUIRE(toTest.areAdjacent(thing1, thing2) == false);
}

/**
 * @brief 
 * The PageRank Algorithm test cases take A LONG TIME to run due to the nature of the page rank algorithm needing to
 * visit every node in the graph. We recommend running these test cases seperately from the other test cases in order 
 * to be more efficint with testing!
 * 
TEST_CASE("simple ranking", "[Graph::PageRank]") { 
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    toTest.computePageRank();
    REQUIRE(&toTest.rank != NULL);
}

TEST_CASE("multiple calls dont alter ranks", "[Graph::PageRank]") {
    std::string one = "../data/articles.tsv";
    std::string two = "../data/links.tsv";
    Graph toTest(one,two);
    toTest.computePageRank();
    auto originalRankings = toTest.rank;
    toTest.computePageRank();
    REQUIRE(toTest.rank == originalRankings);
}
*/


