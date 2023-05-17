/** -----------------------------------------------------------------------------
 *
 * @file  Object.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 6
 * @brief This program will allow the user to store different locations with a min and max heap
 * @date 03/31/2022
 *
 ---------------------------------------------------------------------------- **/
 #include "Object.h"
#include <iostream>
Object::Object()
{
	
}

Object::Object(std::string name, float distance, int visit)
{
	objName = name;
	objDistance = distance;
	objVisitCount = visit;
}

Object::~Object()
{
	
}

void Object::printNames(Object object)
{
	std::cout << object.objDistance<< ' ';
}

float Object::getDistance()
{
	return objDistance;
}

int Object::getVisitCount()
{
	return objVisitCount;
}

std::string Object::getName()
{
	return objName;
}

void Object::operator=(const Object& rhs)
{
	objName = rhs.objName;
	objDistance = rhs.objDistance;
	objVisitCount = rhs.objVisitCount;
}

bool Object::operator==(const Object& rhs)
{
	if(objDistance == rhs.objDistance)
	{
		return(true);
	}
	return(false);
}

bool Object::operator<(const Object& rhs)
{
	if(objDistance < rhs.objDistance)
	{
		return(true);
	}
	return(false);
}

bool Object::operator>(const Object& rhs)
{
	if(objDistance > rhs.objDistance)
	{
		return(true);
	}
	return(false);
}

bool Object::operator==(int key)
{
	if(objDistance == key)
	{
		return(true);
	}
	return(false);
}

bool Object::operator<(int key)
{
	if(objDistance < key)
	{
		return(true);
	}
	return(false);
}

bool Object::operator>(int key)
{
	if(objDistance > key)
	{
		return(true);
	}
	return(false);
}
