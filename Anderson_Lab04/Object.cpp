/** -----------------------------------------------------------------------------
 *
 * @file  Object.cpp
 * @author Alex Anderson 
 * Assignment:   EECS_560 Lab 4
 * @brief This program will allow the user to choose what to do with a BST
 * @date 02/21/2022
 *
 ---------------------------------------------------------------------------- **/
#include "Object.h"
#include <iostream>
Object::Object()
{
	
}

Object::Object(std::string name, int id)
{
	objNumber = id;
	objName = name;
}

Object::~Object()
{
	
}

void Object::printNames(Object object)
{
	std:: cout << object.objNumber<< ' ';
}

void Object::operator=(const Object& rhs)
{
	objNumber = rhs.objNumber;
	objName = rhs.objName;
}

bool Object::operator==(const Object& rhs)
{
	if(objNumber == rhs.objNumber)
	{
		return(true);
	}
	return(false);
}

bool Object::operator<(const Object& rhs)
{
	if(objNumber < rhs.objNumber)
	{
		return(true);
	}
	return(false);
}

bool Object::operator>(const Object& rhs)
{
	if(objNumber > rhs.objNumber)
	{
		return(true);
	}
	return(false);
}

bool Object::operator==(int key)
{
	if(objNumber == key)
	{
		return(true);
	}
	return(false);
}

bool Object::operator<(int key)
{
	if(objNumber < key)
	{
		return(true);
	}
	return(false);
}

bool Object::operator>(int key)
{
	if(objNumber > key)
	{
		return(true);
	}
	return(false);
}
