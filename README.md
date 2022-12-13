# Wikipedia game

# GitHub Organization:
Six Degrees of Wikipedia. How many hyperlinks are necessary to get from one specific Wikipedia article to another specific Wikipedia article?
Within the GitHub Repository, the data we utilized can be found in the data folder where there are .tsv and .txt files holding the data we used. We found our data from this website: https://snap.stanford.edu/data/wikispeedia.html. Our algorithms which include Breadth First Search (BFS) and PageRank can be found in the graph.cpp file. The test cases we created are found within the tests folder where the tests.cpp, the file with all our test cases, are written are found.

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
