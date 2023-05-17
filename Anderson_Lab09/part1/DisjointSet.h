/** -----------------------------------------------------------------------------
 *
 * @file  DisjointSet.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 9
 * @brief This program will allow the user to choose what to do with a disjoint set
 * @date 05/06/2022
 *
 ---------------------------------------------------------------------------- **/
#ifndef DISJOINT_SET
#define DISJOINT_SET

#include <iostream>

#include "Node.h"

class DisjointSet {
  public:
    //Constructor
    DisjointSet();

    //New Class Methods
    void MakeSet();
    int UnionByRank(int e1, int e2);
	Node* FindElem(int elemVal);
	int find(int elem);
    void PathCompression(int e);
    void Print();

    void incNumElems() { numOfSetElems++; }
    void incNumDataSets() { numOfDataSets++; }
    void decNumElems() { numOfSetElems--; }
    void decNumDataSets() { numOfDataSets--; }

    void setNumElems(int val) { numOfSetElems = val; }
    void setNumDataSets(int val) { numOfDataSets = val; }
    int getNumElems() { return numOfSetElems; }
    int getNumDataSets() { return numOfDataSets; }

    //Adds an element to the set that is used with MakeSet()
    void addElemToSet(int element) { set[numOfSetElems] = element; incNumElems(); }

  private:
    int numOfSetElems;
    int numOfDataSets;

    Node ** elem_arr = new Node*[100];
    Node * set = new Node[50];



};

#endif