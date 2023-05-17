prog: main.o Executive.o DisjointSet.o 
	g++ -g -std=c++11 main.o Executive.o DisjointSet.o -o prog

DisjointSet.o: DisjointSet.h DisjointSet.cpp Array.h 
	g++ -std=c++11 -g -c DisjointSet.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -c Executive.cpp

main.o: main.cpp
	g++ -std=c++11 -g -c main.cpp
	
clean:
	rm *.o prog