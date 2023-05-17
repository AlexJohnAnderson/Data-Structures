/** -----------------------------------------------------------------------------
 *
 * @file  Executive.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 8
 * @brief This program will store data in two types of heaps
 * @date 04/18/2022
 *
 ---------------------------------------------------------------------------- **/
 #ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "MaxLeftist.h"
#include "MaxSkew.h"
#include <iostream>
#include <stdexcept>
#include <string>

class Executive
{

	private:
	
	public:
	Executive();
	/**
	* @pre file must be valid
	* @post constructor returns nothing
	* @param Takes in a file that will be read in from
	* @throw exception if file is invalid
	*/

	~Executive();
	//destructor does nothing
	
	void printMenu();
	
	void run();
	/**
	* @pre runs as long as choice != 9(EXIT)
	* @post runs program depending on user choice
	* @param none
	* @throw none
	*/
	

};
#endif
