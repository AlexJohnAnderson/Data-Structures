/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 7
 * @brief This program will allow the user to perform operations on a maxmin heap
 * @date 04/06/2022
 *
 ---------------------------------------------------------------------------- **/

#include "Executive.h"
#include <math.h>
Executive::Executive(std::string fileName)
{
	maxmin = new Maxmin();
	
	inputFile.open(fileName);
	if(validFile())
	{
		int key;
		while(inputFile >> key)
		{
			maxmin->insert(key);
			maxmin->heapify();
		}
	}
	else
	{
		throw(std::runtime_error("\nERROR: Invalid file"));
	}
}

bool Executive::validFile()
{
	if(inputFile.is_open())
	{
		return true;
	}
	return false;
}

Executive::~Executive()
{
	
}

void Executive::printMenu()
{
	std::cout << "\n--------------------\n";
	std::cout << "\n1. Insert Element\n2. Delete Max Element\n3. Print Min Level Elements\n4. Print Max Level Elements\n5. Print By Level Order\n6. Exit\n";
	std::cout << "\n--------------------\n";
}

void Executive::run()
{
	int choice;
	do
	{
		printMenu();
		std::cout << "\nEnter an action(1-6) to perform on the heap: ";
		std::cin >> choice;
		std::cout << "\n--------------------\n";
		if(choice == 1)
		{
			int key;
			std::cout << "\nPlease enter a number to insert into the maxmin heap: ";
			std::cin >> key;
			maxmin->insert(key);
			maxmin->heapify();
		}
		else if(choice == 2)
		{
			std::cout << "\nThe maximum entry, " << maxmin->findMax() << ", has been deleted\n";
			maxmin->deleteMax();
			maxmin->heapify();
		}
		else if(choice == 3)
		{
			std::cout << "Min Level Elements: " << '\n';
			maxmin->minElements();
			std::cout << '\n';
		}
		else if(choice == 4)
		{
			std::cout << "Max Level Elements: " << '\n';
			maxmin->maxElements();
			std::cout << '\n';
		}
		else if(choice == 5)
		{
			std::cout << "Level order traversal: " << '\n';
			maxmin->levelOrder();
			std::cout << '\n';
		}
		else if(choice > 6)
		{
			std::cout << "\nPlease enter a valid option(1-6)!\n";
		}
	}while(choice != 6);

	if(choice == 6)
	{
		delete maxmin;
		std::cout << "\nDemonstration complete! Exiting normally.\n\n";
		exit(1);
	}
	
		
}