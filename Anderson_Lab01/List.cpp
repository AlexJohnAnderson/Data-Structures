#include "List.h"
#include <stdexcept>
#include <iostream>
List::List()
{
    m_front = nullptr;
    m_size = 0;
}

List::~List()
{
    clear();
}

void List::clear()
{
	delete m_front;
}

bool List::isEmpty()
{
  if(m_front == nullptr)
  {
    return true;
  }
  else
  {
	  return false;
  }
}

int List::getLength() const
{
    return m_size;
}

void List::insert(int entry)
{
  Node* tempNode = new Node(entry);
  tempNode->setNext(m_front);
  m_front = tempNode;
  m_size++;
}

void List::remove(int entry)
{
		Node* jumper = m_front;
		
		while(entry != jumper->getEntry())
		{
			jumper = jumper->getNext();
		}
	
			Node* target = jumper->getNext();
			int newEntry = target->getEntry();
			jumper->setEntry(newEntry);
			Node* nodeAfter = target->getNext();
			jumper->setNext(nodeAfter);
			delete target;
			m_size--;
}

bool List::find(int entry)
{
	Node* jumper = m_front;
    int count = 0;
	
    while(count != m_size)
    {
		if(jumper->getEntry() == entry)
		{
			return true;
		}
		else
		{
			jumper = jumper->getNext();
			count++;
		}
	}
	return false;
}

void List::reverse()
{
	Node* currentNode = m_front;
	Node* prevNode = nullptr;
	Node* nextNode = nullptr;
	
	while(currentNode != nullptr)
	{
		nextNode = currentNode->getNext();
		currentNode->setNext(prevNode);
		prevNode = currentNode;
		currentNode = nextNode;
	}
	m_front = prevNode;
}

int List::getEntry(int index) const
{
	Node* jumper = m_front;
	int count = 0;
	
	while(count != index)
	{
		jumper = jumper->getNext();
		count++;
	}
	
	return jumper->getEntry();
}

void List::setEntry(int index, int entry)
{
	Node* jumper = m_front;
	int count = 0;
	while(count != index)
	{
		jumper = jumper->getNext();
		count++;
	}
	
	jumper->setEntry(entry);
	
}

Node* List::getFront() const
{
	return m_front;
}