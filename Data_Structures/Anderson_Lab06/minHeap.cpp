/** -----------------------------------------------------------------------------
 *
 * @file  minHeap.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 6
 * @brief This program will allow the user to store different locations with a min and max heap
 * @date 03/31/2022
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>
#include "minHeap.h"

//constructor
minHeap::minHeap(){
    size = 300;
    lastIdx = 0;
    heap = new int[size];
	for(int i = 0; i < size; i++)
	{
        heap[i] = -1;
    }
}

//destructor
minHeap::~minHeap(){
    delete [] heap;
}

//checks to see if value in index needs to be swapped and swaps
void minHeap::heapify(int index){
    int swapped = false;
    int temp;
    int min;
    int minIdx;
    int end = floor((lastIdx - 1) / 5);
    do{
        if(index <= end){
            min = heap[index];
            for(int j = 1; j <= 3; j++)
			{
                temp = heap[3*index+j];
                if(temp < min && temp != -1)
				{
                    min = temp;
                    minIdx = 3*index+j;
                }
            }
            if(min != heap[index])
			{
                temp = heap[minIdx];
                heap[minIdx] = heap[index];
                heap[index] = temp;
                swapped = true;
                index = minIdx;
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
void minHeap::insert(float dist)
{
    int temp;
    bool isRoot = false;
	if(heap[lastIdx] == -1)
	{
		heap[lastIdx] = dist;
	}
	else
	{
		heap[lastIdx+1] = dist;
		lastIdx++;
		int index = lastIdx;
		int parent = floor((lastIdx-1)/3);
		while(!isRoot)
		{
			if(heap[index] < heap[parent])
			{
				temp = heap[index];
				heap[index] = heap[parent];
				heap[parent] = temp;
				index = parent;
				parent = floor((index-1)/3);
			}
			else
			{
				isRoot = true;
			}
		}
	}
}

//replaces root with last, then swaps if necessary
void minHeap::deleteMin()
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

//returns root
int minHeap::findMin()
{
    return heap[0];
}

//finds max from all the leaves
int minHeap::findMax()
{
    int startIdx = floor((lastIdx - 1) / 3) + 1;
    int max = heap[startIdx];
    int maxIdx = startIdx;
    for(int i = startIdx; i <= lastIdx; i++)
	{
        if(heap[i] > max)
		{
            max = heap[i];
            maxIdx = i;
        }
    }
    return maxIdx;
}

//replaces max with last then swaps if necessary
void minHeap::deleteMax()
{
    heap[findMax()] = heap[lastIdx];
    heap[lastIdx] = -1;
    lastIdx--;
}

//prints out array
void minHeap::levelOrder()
{
    std::cout << "\n";
    for(int i = 0; i < lastIdx + 1; i++)
	{
        if(i == 0 || i == 3 || i == 12 || i == 39)
		{
            std::cout << heap[i] << "\n";
        }
		else if(i%3 == 0 && i != lastIdx)
		{
			std::cout.precision(2);
            std::cout << std::fixed << std::setprecision(2) << heap[i] << " : ";
        }
		else
		{
			std::cout.precision(2);
            std::cout << heap[i] << " : ";
        }
    }
} 

//returns the last index
int minHeap::getLastIndex()
{
	return lastIdx;
}