/** -----------------------------------------------------------------------------
 *
 * @file  Node.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 9
 * @brief This program will allow the user to choose what to do with a disjoint set
 * @date 05/06/2022
 *
 ---------------------------------------------------------------------------- **/
#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node 
{
  public:
    //Constructor
    Node();
    Node(int value);

    //Helper Functions
    void setOrder(int ord) { order = ord; }
    int getOrder() { return order; }

    void setKey(int value) { key = value; }
    int getKey() { return key; }

    void setParent(Node* node) { parent = node; }
    Node* getParent() { return parent; }

  private:
    int order;
    int key;
    Node* parent;

};

#endif