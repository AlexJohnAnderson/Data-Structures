/** -----------------------------------------------------------------------------
 *
 * @file  Object.h
 * @author Alex Anderson 
 * Assignment:   EECS_560 Lab 4
 * @brief This program will allow the user to choose what to do with a BST
 * @date 02/21/2022
 *
 ---------------------------------------------------------------------------- **/
#ifndef OBJECT_H
#define OBJECT_H
#include <string>
class Object 
{
	private:
	int objNumber;
	//int to assign id to objects
	std::string objName;
	//name for object

	
	public:
	Object();
	/**
	* @pre None
	* @post returns nothing
	* @param none
	* @throw none
	*/

	Object(std::string name, int id);
	/**
	* @pre None
	* @post returns nothing, constructs object
	* @param constructor takes in <NAME><ID> to assign to object
	* @throw none
	*/

	~Object();
	/**
	* @pre none
	* @post destructor does nothing, returns nothing
	* @param none
	* @throw none
	*/

	static void printNames(Object object);
	/**
	* @pre None
	* @post returns name as well as ID
	* @param Takes in a pokemon
	* @throw none
	*/

	


	void operator=(const Object& rhs);
	bool operator==(const Object& rhs);
	bool operator<(const Object& rhs);
	bool operator>(const Object& rhs);
	/**
	* @pre None
	* @post Operator overloaders, return bool
	* @param takes in pokemon object and entry it can compare with
	* @throw none
	*/

	bool operator==(int key);
	bool operator<(int key);
	bool operator>(int key);
	/**
	* @pre None
	* @post operator overloaders for key to compare with entries
	* @param Takes in a key to compare
	* @throw none
	*/


	
	
	
};
#endif
