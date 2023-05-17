prog: main.o Executive.o DisjointSet.o Node.o
	g++ -g -std=c++11 main.o Executive.o DisjointSet.o Node.o -o prog

Node.o: Node.h Node.cpp
	g++ -std=c++11 -g -c Node.cpp
DisjointSet.o: DisjointSet.h DisjointSet.cpp 
	g++ -std=c++11 -g -c DisjointSet.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -c Executive.cpp

main.o: main.cpp
	g++ -std=c++11 -g -c main.cpp
	
clean:
	rm *.o prog