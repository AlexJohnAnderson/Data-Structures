/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 6
 * @brief This program will allow the user to choose what to do with a BST
 * @date 03/09/2022
 *
 ---------------------------------------------------------------------------- **/

#include "Executive.h"
#include <math.h>
Executive::Executive(std::string fileName)
{
	minDist = new minHeap();
	maxVisit = new maxHeap();
	
	inputFile.open(fileName);
	if(validFile())
	{
		float distance;
		int visit;
		std::string name;
		while(inputFile >> distance >> visit)
		{

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
	std::cout << "\n1. Add New Destination\n2. Remove Nearest\n3. Remove Most Visited\n4. Search Nearest\n5. Search Most Visited\n6. Print By Distance\n7. Print By Visitor Count\n8. Exit\n";
	std::cout << "\n--------------------\n";
}

void Executive::run()
{
			minDist->insert(302.4);
			minDist->insert(100.0);
			minDist->insert(203.5);
			minDist->insert(290.6);
			minDist->insert(89.4);
			minDist->insert(100.1);
			minDist->insert(345.5);
			minDist->insert(499.1);
			minDist->insert(620.7);
			minDist->insert(100.0);
			maxVisit->insert(10000);
			maxVisit->insert(150250);
			maxVisit->insert(125340);
			maxVisit->insert(79000);
			maxVisit->insert(88900);
			maxVisit->insert(592350);
			maxVisit->insert(134345);
			maxVisit->insert(99000);
			maxVisit->insert(479000);
			maxVisit->insert(78456);
	int choice;
	do
	{
		printMenu();
		std::cout << "\nEnter an action(1-8) to perform on the tree: ";
		std::cin >> choice;
		std::cout << "\n--------------------\n";
		if(choice == 1)
		{
			std::string name;
			int distance;
			int visitCount;
			std::cout << "\nPlease enter the name of the destination: ";
			std::cin >> name;
			std::cout << "\nPlease enter the distance to the destination: ";
			std::cin >> distance;			
			std::cout << "\nPlease enter the number of visits to this destination: ";
			std::cin >> visitCount;
			Object object(name, distance, visitCount);
			minDist->insert(distance);
			maxVisit->insert(visitCount);
		}
		else if(choice == 2)
		{
			std::cout << "\nAt a distance of " << minDist->findMin() << ", the location has been successfully removed\n";
			minDist->deleteMin();
		}
		else if(choice == 3)
		{
			std::cout << "\nAt a total of " << maxVisit->findMax() << " visits, the location has been successfully removed\n";
			maxVisit->deleteMax();
		}
		else if(choice == 4)
		{
			std::cout << "\nThe nearest location is " << minDist->findMin() << '\n';
		}
		else if(choice == 5)
		{
			std::cout << "\nAt a total of " << maxVisit->findMax() << " visits, this location is the most visited\n";
		}
		else if(choice == 6)
		{
			std::cout << "Order by distance(nearest to furthest): ";
			minDist->levelOrder();
			std::cout << '\n';
		}
		else if(choice == 7)
		{
			std::cout << "Order by visitation amounts(highest to lowest): ";
			maxVisit->levelOrder();
			std::cout << '\n';
		}
		else
		{
			std::cout << "\nPlease enter a valid option(1-8)!\n";
		}
	}while(choice != 8);

	if(choice == 8)
	{
		delete minDist;
		delete maxVisit;
		std::cout << "\nDemonstration complete! Exiting normally.\n\n";
		exit(1);
	}
	
		
}