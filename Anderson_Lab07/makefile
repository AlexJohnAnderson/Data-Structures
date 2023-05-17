prog: main.o Executive.o Maxmin.o
	g++ -g -std=c++11 -g -Wall main.o Executive.o Maxmin.o -o prog

Maxmin.o: Maxmin.h Maxmin.cpp 
	g++ -g -std=c++11 -g -c -Wall Maxmin.cpp
	
Executive.o: Executive.h Executive.cpp 
	g++ -g -std=c++11 -g -c -Wall Executive.cpp
	
main.o: main.cpp 
	g++ -g -std=c++11 -g -c -Wall main.cpp

clean:
	rm *.o prog