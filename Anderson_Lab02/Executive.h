#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include "Hash.h"
#include "List.h"

class Executive
{
	private:
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
	
	void printMenu();
	/**
	* @pre None
	* @post prints the menu for the user
	* @param none
	* @throw none
	*/
	int buckets = 17;

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
	* @pre runs as long as choice != 9(EXIT)
	* @post runs program depending on user choice
	* @param none
	* @throw none
	*/
	int hashFunc(int entry);


};
#endif
