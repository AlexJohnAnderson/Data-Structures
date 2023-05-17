 /** -----------------------------------------------------------------------------
 *
 * @file  MaxLeftist.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 8
 * @brief This program will store data in two types of heaps
 * @date 04/18/2022
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include <fstream>
#include "MaxLeftist.h"

MaxLeftist::MaxLeftist()
{
    m_root = nullptr;
	rank = 0;
}

MaxLeftist::~MaxLeftist()
{
    while(m_root != nullptr)
	{
        deleteMax();
    }
}

void MaxLeftist::buildHeap()
{
    std::ifstream file;
    file.open("data.txt");
    int data;
    while(file >> data)
	{
        insert(data);
    }
}

void MaxLeftist::insert(int val)
{
    BNode* temp = new BNode(val);
    temp->setEntry(val);
    m_root = concate(m_root, temp);
}

void MaxLeftist::deleteMax()
{
    if(m_root == nullptr)
	{
		std::cout << "The heap is empty" << '\n';
    }
	else
	{
        BNode* temp1;
		BNode* temp2;
		temp1 = m_root->getLeft();
		temp2 = m_root->getRight();
		m_root = concate(temp1, temp2);
    }
}

BNode* MaxLeftist::concate(BNode* h1, BNode* h2)
{
    BNode* temp;
    if(h1 == nullptr)
	{
        return h2;
    }
	else if(h2 == nullptr)
	{
        return h1;
    }
	else
	{
        if(h1 -> getEntry() < h2 -> getEntry())
		{
            temp = h1;
            h1 = h2;
            h2 = temp;
        }
        temp = h1 -> getLeft();
        h1 -> setLeft(h1 -> getRight());
        h1 -> setRight(temp);
        h1 -> setLeft((concate(h2, h1 -> getLeft())));
    }
	return h1;

}

int MaxLeftist::height(BNode* BNode)
{
    if(BNode == nullptr)
	{
        return 0;
    }
	else
	{
        int leftHeight = height(BNode -> getLeft());
        int rightHeight = height(BNode -> getRight());
		
        if(leftHeight > rightHeight)
		{
            return (leftHeight + 1);
        }
		else
		{
            return (rightHeight + 1);
        }
    }
}


void MaxLeftist::printLevel(BNode* bnode, int level)
{
    if(bnode != nullptr)
	{
        if(level == 1)
		{
            std::cout << bnode -> getEntry() << " ";
        }
		else if(level > 1)
		{
            printLevel(bnode->getLeft(), level - 1);
            printLevel(bnode->getRight(), level - 1);
        }
    }
}

void MaxLeftist::levelOrder()
{
    int h = height(m_root);
    for(int i = 0; i <= h; i++)
	{
        printLevel(m_root, i);
        std::cout << ' ';
    }
	std::cout << '\n';
}
