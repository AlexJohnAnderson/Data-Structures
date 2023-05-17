/** -----------------------------------------------------------------------------
 *
 * @file  Maxmin.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 7
 * @brief This program will allow the user to perform operations on a maxmin heap
 * @date 04/06/2022
 *
 ---------------------------------------------------------------------------- **/
 #include <iostream>
#include <fstream>
#include <math.h>
#include "Maxmin.h"

Maxmin::Maxmin(){
    size = 300;
    lastIdx = 0;
    heap = new int[size];
    for(int i = 0; i < size; i++)
	{
        heap[i] = -1;
    }
}

//destructor
Maxmin::~Maxmin(){
    delete [] heap;
}

//checks to see if location in index needs to be swapped and swaps
void Maxmin::heapify()
{
   doHeapify(0, 0);
}

void Maxmin::doHeapify(int index, int level)
{
	if(heap[index] != -1)
	{
		if(index == 0 &&((heap[index] < heap[index+3]) || (heap[index] < heap[index+4]) || (heap[index] < heap[index+5]) || (heap[index] < heap[index+6])))
		{
			if(heap[index] < heap[index+3])
			{
				int temp = heap[index + 3];
				heap[index + 3] = heap[index];
				heap[index] = temp;
				doHeapify(1, 1);
			}
			else if(heap[index] < heap[index+4])
			{
				int temp = heap[index + 4];
				heap[index + 4] = heap[index];
				heap[index] = temp;
				doHeapify(1, 1);
			}
			else if(heap[index] < heap[index+5])
			{
				int temp = heap[index + 5];
				heap[index + 5] = heap[index];
				heap[index] = temp;
				doHeapify(1, 1);
			}
			else if(heap[index] < heap[index+6])
			{
				int temp = heap[index + 6];
				heap[index + 6] = heap[index];
				heap[index] = temp;
				doHeapify(1, 1);
			}
		}
		else
		{
			if(level % 2 == 0)
			{
				if(heap[getLeft(index)] != -1 && heap[getLeft(index)] > heap[index])
				{
					int temp = heap[getLeft(index)];
					heap[getLeft(index)] = heap[index];
					heap[index] = temp;
					doHeapify(0, 0);
				}
				else if(heap[getRight(index)] != -1 && heap[getRight(index)] > heap[index])
				{
					int temp = heap[getRight(index)];
					heap[getRight(index)] = heap[index];
					heap[index] = temp;
					doHeapify(0, 0);
				}
				else
				{
					level++;
					doHeapify(getRight(index), level);
					doHeapify(getLeft(index), level);
				}
			}
		
			else
			{
				if(heap[getLeft(index)] != -1 && heap[getLeft(index)] < heap[index]) 
				{
					int temp = heap[getLeft(index)];
					heap[getLeft(index)] = heap[index];
					heap[index] = temp;
					doHeapify(0, 0);
				}
				else if(heap[getRight(index)] != -1 && heap[getRight(index)] < heap[index])
				{
					int temp = heap[getRight(index)];
					heap[getRight(index)] = heap[index];
					heap[index] = temp;
					doHeapify(0, 0);
					
				}
				else 
				{
					level++;
					doHeapify(getLeft(index), level);
					doHeapify(getRight(index), level);
				}
			}
		}
	}
}
//inserts value at end of array then swaps if necessary
void Maxmin::insert(int key)
{
	if(heap[lastIdx] == -1)
	{
		heap[0] = key;
	}
	else
	{
		heap[lastIdx+1] = key;
		lastIdx++;
	}
	heapify();
}

//replaces min with last
void Maxmin::deleteMin()
{
    heap[findMin()] = heap[lastIdx];
    heap[lastIdx] = -1;
    lastIdx--;
}

//finds min index from all the leaves
int Maxmin::findMin(){
    int startIdx = floor((lastIdx - 1) / 2) + 1;
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
int Maxmin::findMax()
{
    return heap[0];
}

//replaces root with last then swaps if necessary
void Maxmin::deleteMax()
{
	if(lastIdx == 0)
	{
		throw std::runtime_error("\nError: Deletion failed because the heap is empty\n");
		return;
	}
    heap[0] = heap[lastIdx];
    lastIdx--;
    heapify();
}

//prints out array in level order
void Maxmin::levelOrder()
{
    for(int i = 0; i <= lastIdx; i++)
	{
		std::cout << heap[i] << " : ";
    }
}

bool Maxmin::levelOfIndex(int index)
{
	int i = floor(log2(index + 1));
	if(i % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Maxmin::maxElements()
{
	for(int i = 0; i <= lastIdx; i++)
	{
		if(levelOfIndex(i) == true)
		{
			std::cout << heap[i] << " : ";
		}
	}
}

void Maxmin::minElements()
{
	for(int i = 0; i <= lastIdx; i++)
	{
		if(levelOfIndex(i) == false)
		{
			std::cout << heap[i] << " : ";
		}
	}
}
			