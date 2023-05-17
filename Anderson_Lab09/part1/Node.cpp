/** -----------------------------------------------------------------------------
 *
 * @file  Node.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 9
 * @brief This program will allow the user to choose what to do with a disjoint set
 * @date 05/06/2022
 *
 ---------------------------------------------------------------------------- **/
 #include <iostream>

#include "Node.h"

//Constructor
Node::Node() 
{
  key = 0;
  order = 0;
  parent = nullptr;
}

Node::Node(int value) 
{
  key = value;
  order = 0;
  parent = nullptr;
}