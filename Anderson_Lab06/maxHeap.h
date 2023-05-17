/** -----------------------------------------------------------------------------
 *
 * @file  maxHeap.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 6
 * @brief This program will allow the user to store different locations with a min and max heap
 * @date 03/31/2022
 *
 ---------------------------------------------------------------------------- **/
 #ifndef MAXHEAP_H
#define MAXHEAP_H
#include <iostream>
#include <stdexcept>
#include "Object.h"

class maxHeap{
	
	
    private:

    int* heap;//pointer to the heap
    int size;//size of the heap
    int lastIdx;//int that keeps track of last index
	
	
    public:

    maxHeap(); //constructor
    ~maxHeap(); //destructor
    void heapify(int index); //operation that heapifies the heap
    void insert(int val); //inserts value at end of array then swaps if necessary
    void deleteMin(); //replaces min with last and then calls heapify
    int findMin(); //finds max index 
    int findMax(); //returns root
    void deleteMax(); //replaces root with last then swaps if necessary
    void levelOrder(); //prints out array
};
#endif