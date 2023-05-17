/** -----------------------------------------------------------------------------
 *
 * @file  BST.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 7
 * @brief This program will allow the user to choose what to do with a BST
 * @date 07/29/2021
 *
 ---------------------------------------------------------------------------- **/
#include "BST.h"
#include <stdexcept>
#include <math.h>

//template <typename ItemType, typename KeyType>
BST::BST()
{
	m_root = nullptr;
	count = 0;
}


//template <typename ItemType, typename KeyType>
void BST::clear()
{
	doClear(m_root);
}

//template <typename ItemType, typename KeyType>
void BST::doClear(BNode<Object>* subtree)
{
	if(subtree->getLeft() != nullptr)
	{
		doClear(subtree->getLeft());
	}
	if(subtree->getRight() != nullptr)
	{
		doClear(subtree->getRight());
	}
	delete subtree;
}

//template <typename ItemType, typename KeyType>
BST::~BST()
{
	clear();
}

//template <typename ItemType, typename KeyType>
void BST::doCopy(BNode<Object>* jumper)
{
	if(jumper != nullptr)
	{
		add(jumper->getEntry());
		doCopy(jumper->getLeft());
		doCopy(jumper->getRight());
	}
}
		

//template <typename ItemType, typename KeyType>
void BST::operator=(const BST& rhs)
{
	BNode<Object>* jumper = rhs.m_root;
	doCopy(jumper);
}

//template <typename ItemType, typename KeyType>
void BST::add(Object entry)
{
	 if(m_root == nullptr)
	 {
		 m_root = new BNode<Object>(entry);
		 count++;
	 }
	 else
	 {
		 doAdd(entry, m_root);
	 }
}

//template <typename ItemType, typename KeyType>
void BST::doAdd(Object entry, BNode<Object>* subtree)
{
	if(subtree->getEntry() == entry)
	{
		throw(std::runtime_error("\nERROR: This entry is already in the tree\n"));
	}
	else
	{
		if(subtree->getLeft() == nullptr)
		{
			BNode<Object>* target = new BNode<Object>(entry);
			subtree->setLeft(target);
			count++;
		}
		else if(subtree->getRight() == nullptr)
		{
			BNode<Object>* target = new BNode<Object>(entry);
			subtree->setRight(target);
			count++;
		}
		else
		{
			doAdd(entry, subtree->getLeft());
		}
	}
}

//template <typename ItemType, typename KeyType>
void BST::remove()
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("\nERROR: The tree is alredy empty\n"));
	}
	else 
	{
		doRemove(m_root);
	}
}

//template <typename ItemType, typename KeyType>
void BST::doRemove(BNode<Object>* subtree)
{
	if(subtree == nullptr)
	{
		throw(std::runtime_error("\nERROR: subtree does not exist\n"));
	}

	if(subtree->getLeft() == nullptr && (subtree->getRight() == nullptr))
	{
		delete subtree;
		count--;
	}
	else if(subtree->getLeft() != nullptr)
	{
		doRemove(subtree->getRight());
	}
	else if(subtree->getRight() != nullptr)
	{
		doRemove(subtree->getLeft());
	}
	
}

//template <typename ItemType, typename KeyType>
void BST::visitPreOrder(void visit(Object)) const
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("\nERROR: Traversal attempted on tree that is empty tree."));
	}
	else
	{
		doPreOrder(m_root, visit);
	}
}

//template <typename ItemType, typename KeyType>
void BST::doPreOrder(BNode<Object>* subtree, void visit(Object)) const
{
	visit(subtree->getEntry());

	if(subtree->getLeft() != nullptr)
	{
		doPreOrder(subtree->getLeft(), visit);
	}
	
	if(subtree->getRight() != nullptr)
	{
		doPreOrder(subtree->getRight(), visit);
	}
}

//template <typename ItemType, typename KeyType>
void BST::visitInOrder(void visit(Object)) const
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("\nERROR: Traversal attempted on tree that is empty tree."));
	}
	else
	{
		doInOrder(m_root, visit);
	}
}

//template <typename ItemType, typename KeyType>
void BST::doInOrder(BNode<Object>* subtree, void visit(Object)) const
{
	if(subtree->getLeft() != nullptr)
	{
		doInOrder(subtree->getLeft(), visit);
	}

	visit(subtree->getEntry());

	if(subtree->getRight() != nullptr)
	{
		doInOrder(subtree->getRight(), visit);
	}

}

//template <typename ItemType, typename KeyType>
void BST::visitPostOrder(void visit(Object)) const
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("\nERROR: Traversal attempted on tree that is empty tree."));
	}
	else
	{
		doPostOrder(m_root, visit);
	}

}

//template <typename ItemType, typename KeyType>
void BST::doPostOrder(BNode<Object>* subtree, void visit(Object)) const
{
	if(subtree->getLeft() != nullptr)
	{
		doPostOrder(subtree->getLeft(), visit);
	}
	
	if(subtree->getRight() != nullptr)
	{
		doPostOrder(subtree->getRight(), visit);
	}

	visit(subtree->getEntry());
}

//template <typename ItemType, typename KeyType>
BNode<Object>* BST::findMax(BNode<Object>* subtree)
{
	if(subtree == nullptr)
	{
		throw(std::runtime_error("ERROR: tree does not exist"));
	}
	
	while(subtree->getRight() != nullptr)
	{
		subtree = subtree->getRight();
	}
	return subtree;
}

bool BST::isFull()
{
	if(count%2 == 0)
	{
		return false;
	}
	else
	{
		return true;
	}		
}

int BST::treeHeight()
{
	return((floor(log2(count)))-1);
}

//template <typename ItemType, typename KeyType>
void BST::visitLevelOrder(void visit(Object)) const
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("\nERROR: Traversal attempted on tree that is empty tree."));
	}
	else
	{
		doLevelOrder(m_root, visit);
	}
}

//template <typename ItemType, typename KeyType>
void BST::doLevelOrder(BNode<Object>* subtree, void visit(Object)) const
{
	visit(subtree->getEntry());
	
	if(subtree->getLeft() != nullptr)
	{
		doLevelOrder(subtree->getLeft(), visit);
	}
	
	if(subtree->getRight() != nullptr)
	{
		doLevelOrder(subtree->getRight(), visit);
	}
}

//attempt at isleaf functions(currently not working)
/* void BST::isLeaf(int key)
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("\nERROR: Traversal attempted on tree that is empty tree."));
	}
	else
	{
		
	}
}

void BST::doIsLeaf(BNode<Object>* subtree, int key)
{
	if(doSearch(key, subtree) == key)
	{
		if(subtree->getLeft() == nullptr && subtree->getRight() == nullptr)
		{
			std::cout << "\nThe object with key" << key << " is a leaf\n";
		}
		else
		{
			std::cout << "\nThe object with key" << key << " is NOT a leaf\n";
		}
	}
} */