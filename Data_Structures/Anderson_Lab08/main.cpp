/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 8
 * @brief This program will store data in two types of heaps
 * @date 04/18/2022
 *
 ---------------------------------------------------------------------------- **/
#include "Executive.h"
#include <stdexcept>
#include <iostream>
int main()
{
	try
	{
		Executive* exec = new Executive;
		exec->run();
		delete exec;
	}
	catch(std::runtime_error& e)
	{
		std::cout << e.what();
	}
	
	return(0);
}