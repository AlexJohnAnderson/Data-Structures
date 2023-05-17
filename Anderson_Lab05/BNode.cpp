/** -----------------------------------------------------------------------------
 *
 * @file  BNode.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 5
 * @brief This program will allow the user to choose what to do with a BST
 * @date 03/09/2022
 *
 ---------------------------------------------------------------------------- **/
#include "BNode.h"
BNode::BNode(int entry)
{
	m_entry = entry;
}

BNode::~BNode()
{

}

int BNode::getEntry()
{
	return(m_entry);
}

BNode* BNode::getLeft()
{
	return(m_left);
}

BNode* BNode::getRight()
{
	return(m_right);
}

void BNode::setLeft(BNode* bnode)
{
	m_left = bnode;
}

void BNode::setRight(BNode* bnode)
{
	m_right = bnode;
}

void BNode::setEntry(int entry)
{
	m_entry = entry;
}
