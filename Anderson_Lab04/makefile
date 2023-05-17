prog: main.o Executive.o BST.o Object.o 
	g++ -g -std=c++11 -g -Wall main.o Executive.o BST.o Object.o -o prog
	
BST.o: BSTInterface.h BST.h BNode.h BNode.cpp BST.cpp 
	g++ -g -std=c++11 -g -c -Wall BST.cpp

Object.o: Object.h Object.cpp 
	g++ -g -std=c++11 -g -c -Wall Object.cpp
	
Executive.o: Executive.h Executive.cpp 
	g++ -g -std=c++11 -g -c -Wall Executive.cpp
	
main.o: main.cpp 
	g++ -g -std=c++11 -g -c -Wall main.cpp

clean:
	rm *.o prog