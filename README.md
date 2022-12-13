# Wikipedia game

# GitHub Organization:
Six Degrees of Wikipedia. How many hyperlinks are necessary to get from one specific Wikipedia article to another specific Wikipedia article?
Within the GitHub Repository, the data we utilized can be found in the data folder where there are .tsv and .txt files holding the data we used. We found our data from this website: https://snap.stanford.edu/data/wikispeedia.html. Our algorithms which include Breadth First Search (BFS) and PageRank can be found in the graph.cpp file. The test cases we created are found within the tests folder where the tests.cpp, the file with all our test cases, are written are found.


# Data
We are using a dataset from stanford which is located in the data folders, the files we used for testing are articles.tsv which has all of the vertices and
links.tsv which includes vertices followed by all of the vertices they're connected to
# Installation 
Clone the repo locally, then cd into it 
```c++
  git clone https://github.com/KarolisKrakys/cs225-final-project.git
```

# Features
1. You can run pagerank on any graph, if you're given 2 tsv files with all of the vertices, and edges
2. You can run BFS on any graph, if you're given 2 tsv files with all of the vertices, and edges

# How to build

First create a build folder, after run:
```c++
  cmake ..
```
After running that command you can run
```c++
  make
```
To run the program there are multiple options:
```c++
  ./cs225-final [algorithm type] [input file 1] [input file2] [optional start vertex for BFS] [optional end vertex for BFS]
  Example with the files we're using:
  ./cs225-final bfs ../data/articles.tsv ../data/links.tsv History_of_Arizona Emu
  To run pagerank:
  ./cs225-final pagerank ../data/articles.tsv ../data/links.tsv
```

# Testing
After making a build folder and running cmake .. do this:
```c++
make;
./tests
```
We throughouly tested our graph implementation to make sure that each of the functions is working, and to make sure that the files are being parsed properly to build the graph. Additionally, we tested BFS to make sure that it's always finding the shorted path for any given nodes. We were not able test 
# Results

We have developed a working makefile, and properly read all of the data from the tsv and build a graph.
Are results are always printed in the console.
We were able to implement BFS which finds you the shortest path between two articles.
Also we were able to implement pagerank which ranks the most popular articles from our dataset. 
Pagerank usually takes a really long time because we do 250 iterations, and the dataset contains a lot of nodes and vertices. 

We were not able to implement our graph visualization algorithm, since we ran out of times and it was too difficult to implement without any external libraries. If we were able to redo this project we would probably choose to work on a strongly connected components algorithm or continue working on visualization if we had the help of external tools. 
