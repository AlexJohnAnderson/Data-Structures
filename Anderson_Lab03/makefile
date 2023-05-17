prog: main.o Executive.o Hash.o
	g++ -std=c++11 -g -Wall main.o Executive.o Hash.o -o prog
	
Hash.o: Hash.cpp Hash.h
	g++ -std=c++11 -g -Wall -c Hash.cpp
	
Executive.o: Executive.cpp Executive.h 
	g++ -std=c++11 -g -Wall -c Executive.cpp

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

clean:
	rm *.o prog