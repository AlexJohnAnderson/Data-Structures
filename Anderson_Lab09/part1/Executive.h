/** -----------------------------------------------------------------------------
 *
 * @file  Executive.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 9
 * @brief This program will allow the user to choose what to do with a disjoint set
 * @date 05/06/2022
 *
 ---------------------------------------------------------------------------- **/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <fstream>
#include <iostream>
#include <string>

#include "DisjointSet.h"
class Executive
{
	private:
	std::string filePath;
	DisjointSet* ds;
	
	std::ifstream inputFile;
	/**
	* @pre must be a valid file
	* @post opens the file that will be read in from
	* @param none
	* @throw an exeption if validFile = false
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