#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Hash.h"
#include <fstream>
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

	void run();
	/**
	* @pre runs as long as choice != 9(EXIT)
	* @post runs program depending on user choice
	* @param none
	* @throw none
	*/
	

};
#endif
