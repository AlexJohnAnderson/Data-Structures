/** -----------------------------------------------------------------------------
 *
 * @file  MaxLeftist.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 8
 * @brief This program will store data in two types of heaps
 * @date 04/18/2022
 *
 ---------------------------------------------------------------------------- **/
#ifndef MAXLEFTIST_H
#define MAXLEFTIST_H
#include "BNode.h"

class MaxLeftist{

    public:
	
    MaxLeftist();
    ~MaxLeftist();
    void buildHeap();
    void insert(int val);
    void deleteMax();
    BNode* concate(BNode* h1, BNode* h2);
    int height(BNode* BNode);
	void levelOrder();
	void printLevel(BNode* bnode, int level);
	
	private:
	
    BNode* m_root;
	int rank;
};
#endif