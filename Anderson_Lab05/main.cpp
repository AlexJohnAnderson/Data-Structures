/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 5
 * @brief This program will allow the user to choose what to do with a BST
 * @date 03/09/2022
 *
 ---------------------------------------------------------------------------- **/
#include "Executive.h"
#include <stdexcept>
#include <iostream>
int main(int argc, char** argv)
{
	try
	{
		if(argc != 2)
		{
			throw(std::runtime_error("Please pass in correct number of arguments!"));
		}
		else
		{
			Executive exec(argv[1]);
			exec.run();
		}
	}
	catch(std::runtime_error& e)
	{
		std::cout << e.what();
	}
	return(0);
}