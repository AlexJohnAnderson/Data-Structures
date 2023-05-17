/** -----------------------------------------------------------------------------
 *
 * @file  MaxSkew.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 8
 * @brief This program will store data in two types of heaps
 * @date 04/18/2022
 *
 ---------------------------------------------------------------------------- **/
#ifndef MAXSKEW_H
#define MAXSKEW_H
#include "BNode.h"

class MaxSkew{

    public:
	
    MaxSkew();
    ~MaxSkew();
    void buildHeap();
    void insert(int val);
    void deleteMax();
    BNode* concate(BNode* h1, BNode* h2);
    int height(BNode* BNode);
	void levelOrder();
	void printLevel(BNode* bnode, int level);
	
	private:
	
    BNode* m_root;
};
#endif