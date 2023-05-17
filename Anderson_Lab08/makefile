prog: main.o Executive.o MaxSkew.o MaxLeftist.o BNode.o
	g++ -std=c++11 -g -Wall main.o Executive.o MaxSkew.o MaxLeftist.o BNode.o -o prog

BNode.o: BNode.cpp BNode.h
	g++ -std=c++11 -g -Wall -c BNode.cpp

MaxLeftist.o: MaxLeftist.cpp MaxLeftist.h
	g++ -std=c++11 -g -Wall -c MaxLeftist.cpp

MaxSkew.o: MaxSkew.cpp MaxSkew.h
	g++ -std=c++11 -g -Wall -c MaxSkew.cpp
	
Executive.o: Executive.cpp Executive.h 
	g++ -std=c++11 -g -Wall -c Executive.cpp

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

clean:
	rm *.o prog