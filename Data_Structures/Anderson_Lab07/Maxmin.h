/** -----------------------------------------------------------------------------
 *
 * @file  Maxmin.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 7
 * @brief This program will allow the user to perform operations on a maxmin heap
 * @date 04/06/2022
 *
 ---------------------------------------------------------------------------- **/
#ifndef MAXMIN_H
#define MAXMIN_H
#include <iostream>
#include <stdexcept>

class Maxmin
{
    private:

    int* heap;//pointer to the heap
    int size;//size of the heap
    int lastIdx;//int that keeps track of last index
	
	
    public:

    Maxmin(); //constructor
    ~Maxmin(); //destructor
	void doHeapify(int index, int level);
    void heapify(); //operation that heapifies the heap
    void insert(int key); //inserts value at end of array then swaps if necessary
    void deleteMin(); //replaces min with last and then calls heapify
    int findMin(); //finds max index 
    int findMax(); //returns root
    void deleteMax(); //replaces root with last then swaps if necessary
    void levelOrder(); //prints out array
	int getLeft(int index) { return(2*index+1); }
    int getRight(int index) { return(2*index+2); }
	bool levelOfIndex(int index);
	void maxElements();
	void minElements();
};
#endif