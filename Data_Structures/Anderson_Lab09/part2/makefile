prog: main.o graph.o
	g++ -g -std=c++11 -g -Wall main.o graph.o -o prog

graph.o: graph.h graph.cpp 
	g++ -g -std=c++11 -g -c -Wall graph.cpp
	
main.o: main.cpp 
	g++ -g -std=c++11 -g -c -Wall main.cpp

clean:
	rm *.o prog