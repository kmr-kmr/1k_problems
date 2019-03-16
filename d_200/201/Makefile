CXX = g++
CXXFLAGS = -g

all: run clean

run:
	$(CXX) $(CXXFLAGS) -o outfile  -I ../ cPlusPlus.cpp ../binaryTree.cpp
	./outfile

clean:
	rm outfile