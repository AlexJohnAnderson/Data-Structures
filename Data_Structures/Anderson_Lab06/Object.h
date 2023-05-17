/** -----------------------------------------------------------------------------
 *
 * @file  Object.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 6
 * @brief This program will allow the user to store different locations with a min and max heap
 * @date 03/31/2022
 *
 ---------------------------------------------------------------------------- **/#ifndef OBJECT_H
#define OBJECT_H
#include <string>
class Object 
{
	private:
	
	std::string objName;
	//name for object
	float objDistance;
	//distance to the object
	int objVisitCount;
	//number of visits to the object
	

	
	public:
	Object();
	/**
	* @pre None
	* @post returns nothing
	* @param none
	* @throw none
	*/

	Object(std::string name, float distance, int visit);
	/**
	* @pre None
	* @post returns nothing, constructs object
	* @param constructor takes in <NAME><DIST><VIS> to assign to object
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
	* @post returns name, dist, visit
	* @param Takes in an Object
	* @throw none
	*/
	
	std::string getName();
	/**
	* @pre None
	* @post returns name as well as ID
	* @param Takes in an Object
	* @throw none
	*/
	float getDistance();
	/**
	* @pre None
	* @post returns distance
	* @param none
	* @throw none
	*/
	int getVisitCount();
	/**
	* @pre None
	* @post returns name as well a
	* @param Takes in an Object
	* @throw none
	*/
	

	void operator=(const Object& rhs);
	bool operator==(const Object& rhs);
	bool operator<(const Object& rhs);
	bool operator>(const Object& rhs);
	/**
	* @pre None
	* @post Operator overloaders, return bool
	* @param takes in object and entry it can compare with
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
