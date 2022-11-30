CXX=clang++
INCLUDES=-Iincludes/
CXX_FLAGS=-std=c++20 -g $(INCLUDES)

exec: bin/exec
tests: bin/tests

bin/exec: graph.cc includes/graph.h
	${CXX} ${CXX_FLAGS} graph.cc -o bin/exec

bin/tests: tests.cc src/graph.cc includes/graph.h 
	${CXX} ${CXX_FLAGS} tests.cc -o bin/tests


.DEFAULT_GOAL := tests
.PHONY: clean exec tests

clean:
	rm -fr bin/* obj/*