prog: main.o Executive.o BST.o BNode.o
	g++ -g -std=c++11 -g -Wall main.o Executive.o BST.o BNode.o -o prog
	
BNode.o: BNode.h BNode.cpp 
	g++ -g -std=c++11 -g -c -Wall BNode.cpp
	
BST.o: BSTInterface.h BST.h BST.cpp 
	g++ -g -std=c++11 -g -c -Wall BST.cpp

Executive.o: Executive.h Executive.cpp 
	g++ -g -std=c++11 -g -c -Wall Executive.cpp
	
main.o: main.cpp 
	g++ -g -std=c++11 -g -c -Wall main.cpp

clean:
	rm *.o prog