/** -----------------------------------------------------------------------------
 *
 * @file  minHeap.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 6
 * @brief This program will allow the user to store different locations with a min and max heap
 * @date 03/31/2022
 *
 ---------------------------------------------------------------------------- **/
#ifndef MINHEAP_H
#define MINHEAP_H
#include <iostream>
#include <stdexcept>
#include "Object.h"

class minHeap
{
	
    private:

    int* heap;
    int size;
	int lastIdx;
	
	public:
	
	minHeap(); //constructor
    ~minHeap(); //destructor
	void heapify(int index);
    void insert(float dist); //inserts value at end of array then swaps if necessary
    void deleteMin(); //replaces root with last then swaps if necessary
    int findMin(); //returns root
    int findMax(); //finds max index from all the leaves
    void deleteMax(); //replaces max with last
    void levelOrder(); //prints out array
	int getLastIndex();

};
#endif