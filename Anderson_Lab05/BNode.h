/** -----------------------------------------------------------------------------
 *
 * @file  BNode.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 5
 * @brief This program will allow the user to choose what to do with a BST
 * @date 03/09/2022
 *
 ---------------------------------------------------------------------------- **/
#ifndef BNODE_H
#define BNODE_H
#include <iostream>
class BNode
{
	private:
	int m_entry;
	/**
	* @pre None
	* @post T variable to assign entires to nodes
	* @param None
	* @throw None
	*/

	BNode* m_left;
	/**
	* @pre None
	* @post binary node pointer to the left node
	* @param none
	* @throw none
	*/

	BNode* m_right;
	/**
	* @pre None
	* @post binary node pointer to the right node
	* @param none
	* @throw none
	*/

	
	public:
	BNode(int entry);
	/**
	* @pre None
	* @post sets the T entry to the private T m_entry, returns nothing
	* @param T entry to assign to the node
	* @throw 
	*/

	~BNode();
	/**
	* @pre None
	* @post Destructor, returns nothing
	* @param none
	* @throw none
	*/

	int getEntry();
	/**
	* @pre None
	* @post Returns the T entry at the node
	* @param none
	* @throw none
	*/

	BNode* getLeft();
	/**
	* @pre None
	* @post Returns the left node as a node<T> pointer
	* @param none
	* @throw none
	*/

	BNode* getRight();
	/**
	* @pre None
	* @post Returns the right node as a node<T> pointer
	* @param none
	* @throw none
	*/

	void setEntry(int entry);
	/**
	* @pre None
	* @post returns nothing
	* @param T entry to be set to current node
	* @throw none
	*/

	void setLeft(BNode* bnode);
	/**
	* @pre None
	* @post returns nothing
	* @param T entry to be set to left node
	* @throw none
	*/

	void setRight(BNode* bnode);
	/**
	* @pre None
	* @post returns nothing
	* @param T entry to be set to right node
	* @throw none
	*/

};

#endif
