/** -----------------------------------------------------------------------------
 *
 * @file  DisjointSet.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 9
 * @brief This program will allow the user to choose what to do with a disjoint set
 * @date 05/06/2022
 *
 ---------------------------------------------------------------------------- **/
#include "DisjointSet.h"

//Constructor
DisjointSet::DisjointSet() \
{
  numOfDataSets = 0;
  numOfSetElems = 0;

  for(int i = 0; i < 100; i++) 
  {
      elem_arr[i] = nullptr;
  }
}

void DisjointSet::MakeSet() 
{
  const int bound = getNumElems();

  for(int i = 1; i <= 9; i++) 
  {
    Node * newNode = new Node(set[i]);
    newNode->setParent(newNode);

    elem_arr[i] = newNode;
    set[i] = 0;
  }
  setNumElems(getNumElems() - bound);
  setNumDataSets(getNumDataSets() + bound);
}

int DisjointSet::UnionByRank(int e1, int e2) 
{
  Node * elem1 = FindElem(e1);
  Node * elem2 = FindElem(e2);

  if(elem1 == nullptr || elem2 == nullptr) 
  {
    std::cout << "Error: values can not be unioned because one does not exist in data set\n";
    return -1;
  }
  else if(elem1->getKey() >= elem2->getKey()) 
  {
    elem1->setParent(elem2);
    return elem2->getKey();
  }
  else {
    elem2->setParent(elem1);
    return elem1->getKey();
  }
}

int DisjointSet::find(int elem)
{
	Node* temp = FindElem(elem);
	return (temp->getKey());
}
	
Node* DisjointSet::FindElem(int elemVal) 
{
  for(int i = 0; i < getNumDataSets(); i++) 
  {
    Node * tempNode = elem_arr[i];

    while(tempNode->getParent() != tempNode)
	{
      if(tempNode->getKey() == elemVal) 
	  {
        return tempNode;
      }
      tempNode = tempNode->getParent();
    }
    if(tempNode->getKey() == elemVal) 
	{
      return tempNode;
    }
  }
  return nullptr;
}

void DisjointSet::Print() 
{
  for(int i = 0; i < getNumDataSets(); i++) 
  {
    Node * tempNode = elem_arr[i];

    while(tempNode->getParent() != tempNode)
	{
      std::cout <<tempNode->getKey() <<", ";
      tempNode = tempNode->getParent();
    }

    std::cout <<tempNode->getKey() <<" \n";
  }
}