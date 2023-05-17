/** -----------------------------------------------------------------------------
 *
 * @file  maxHeap.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 6
 * @brief This program will allow the user to store different locations with a min and max heap
 * @date 03/31/2022
 *
 ---------------------------------------------------------------------------- **/
 #include <iostream>
#include <fstream>
#include <math.h>
#include "maxHeap.h"
#include "Object.h"

maxHeap::maxHeap(){
    size = 300;
    lastIdx = 0;
    heap = new int[size];
    for(int i = 0; i < size; i++)
	{
        heap[i] = -1;
    }
}

//destructor
maxHeap::~maxHeap(){
    delete [] heap;
}

//checks to see if location in index needs to be swapped and swaps
void maxHeap::heapify(int index){
    int swapped = false;
    int temp;
    int max;
    int maxIdx;
    int end = floor((lastIdx - 1) / 3);
    do{
        if(index <= end){
            max = heap[index];
            for(int j = 1; j <= 3; j++)
			{
                temp = heap[3*index+j];
                if(temp > max && temp != -1)
				{
                    max = temp;
                    maxIdx = 3*index+j;
                }
            }
            if(max != heap[index])
			{
                temp = heap[maxIdx];
                heap[maxIdx] = heap[index];
                heap[index] = temp;
                swapped = true;
                index = maxIdx;
            }
			else
			{
                swapped = false;
            }
        }
		else
		{
            swapped = false;
        }
    }while(swapped);
}
//inserts value at end of array then swaps if necessary
void maxHeap::insert(int visitCount)
{
    int temp;
    bool isRoot = false;
	if(heap[lastIdx] == -1)
	{
		heap[lastIdx] = visitCount;
	}
	else
	{
		heap[lastIdx+1] = visitCount;
		lastIdx++;
		int index = lastIdx;
		int parent = floor((lastIdx-1)/3);
		while(!isRoot)
		{
			if(heap[index] > heap[parent])
			{
				temp = heap[index];
				heap[index] = heap[parent];
				heap[parent] = temp;
				index = parent;
				parent = floor((index-1)/3);
			}else
			{
				isRoot = true;
			}
		}
	}
}

//replaces min with last
void maxHeap::deleteMin()
{
    heap[findMin()] = heap[lastIdx];
    heap[lastIdx] = -1;
    lastIdx--;
}

//finds min index from all the leaves
int maxHeap::findMin(){
    int startIdx = floor((lastIdx - 1) / 3) + 1;
    int min = heap[startIdx];
    int minIdx = startIdx;
    for(int i = startIdx; i <= lastIdx; i++)
	{
        if(heap[i] < min)
		{
            min = heap[i];
            minIdx = i;
        }
    }
    return minIdx;
}

//returns root
int maxHeap::findMax()
{
    return heap[0];
}

//replaces root with last then swaps if necessary
void maxHeap::deleteMax()
{
	if(lastIdx == 0)
	{
		throw std::runtime_error("\nError: Deletion failed because the heap is empty\n");
		return;
	}
    heap[0] = heap[lastIdx];
    lastIdx--;
    heapify(0);
}

//prints out array
void maxHeap::levelOrder()
{
    std::cout << "\n";
    for(int i = 0; i < lastIdx + 1; i++)
	{
        if(i == 0 || i == 3 || i == 9 || i == 27)
		{
            std::cout << heap[i] << "\n";
        }
		else if(i%3 == 0 && i != lastIdx)
		{
            std::cout << heap[i] << " : ";
        }
		else
		{
            std::cout << heap[i] << " : ";
        }
    }
    std::cout << "\n";
}