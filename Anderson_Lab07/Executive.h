/** -----------------------------------------------------------------------------
 *
 * @file  Executive.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 7
 * @brief This program will allow the user to perform operations on a maxmin heap
 * @date 04/06/2022
 *
 ---------------------------------------------------------------------------- **/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include "Maxmin.h"

#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <fstream>

class Executive
{
	private:
	
	Maxmin* maxmin;
	std::ifstream inputFile;
	/**
	* @pre must be a valid file
	* @post opens the file that will be read in from
	* @param none
	* @throw an exeption if validFile = false
	*/

	bool validFile();
	/**
	* @pre None
	* @post boolean variable to check if file is valid, returns true or false
	* @param none
	* @throw none
	*/
	
	/**
	* @pre None
	* @post min and max heaps that will be used to store data
	* @param none
	* @throw none
	*/

	void printMenu();
	/**
	* @pre None
	* @post prints the menu for the user
	* @param none
	* @throw none
	*/
	
	public:
	
	Executive(std::string fileName);
	/**
	* @pre file must be valid
	* @post constructor returns nothing
	* @param Takes in a file that will be read in from
	* @throw exception if file is invalid
	*/

	~Executive();
	//destructor does nothing

	void run();
	/**
	* @pre runs as long as choice != 8(EXIT)
	* @post runs program depending on user choice
	* @param none
	* @throw none
	*/

};
#endif