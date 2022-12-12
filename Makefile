CXX=clang++
INCLUDES=-Iinclude/
CXX_FLAGS=-std=c++20 -g $(INCLUDES)

exec: bin/exec
tests: bin/tests

bin/exec: graph.cc include/graph.h
	${CXX} ${CXX_FLAGS} graph.cc -o bin/exec

bin/tests: tests.cpp graph.cpp include/graph.h 
	${CXX} ${CXX_FLAGS} tests.cpp -o bin/tests


.DEFAULT_GOAL := tests
.PHONY: clean exec tests

clean:
	rm -fr bin/* obj/*