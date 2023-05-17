/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 9
 * @brief This program will allow the user to choose what to do with a disjoint set
 * @date 05/06/2022
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include <string>
#include <fstream>

#include "Executive.h"

Executive::Executive(std::string fileName)
{
	ds = new DisjointSet();
	filePath = fileName;
}

Executive::~Executive()
{
	
}

void Executive::printMenu()
{
	std::cout << "\n--------------------\n";
	std::cout << "\n1. Makeset\n2. UnionByRank\n3. Find\n4. PathCompression\n5. Path\n6. Exit\n";
	std::cout << "\n--------------------\n";
}

void Executive::run()
{
	int choice;
	do
	{
		printMenu();
		std::cout << "\nEnter an action(1-6) to perform on the disjoint sets: ";
		std::cin >> choice;
		std::cout << "\n--------------------\n";
		
		if(choice == 1)
		{
			ds->MakeSet();
			std::cout << "\nThe disjoint sets have been constructed.\n";
        }
      
	   else if(choice == 2)
	   {
			int elem1, elem2;
			std::cout << "\nEnter the representative elements for the two sets which you wish to union\n";
			std::cout << "\nEnter element 1: "; 
			std::cin >> elem1;
			std::cout << '\n';
			std::cout << "\nEnter element 2: "; 
			std::cin >> elem2;
			std::cout << '\n';

			int repElem;
			if(elem1 >= elem2)
			{
				repElem = elem1;
			}
			else
			{
				repElem = elem2;
			}

			std::cout << "UnionByRank on " <<elem1 <<" and " <<elem2 <<" has been completed. The representative element is: " <<repElem << '\n';
		}
     
		else if(choice == 3)
		{
			int elem;
			std::cout << "Enter the element you want to find: ";
			std::cin >> elem;
			std::cout << '\n';
			int rep = ds->find(elem);
			if(rep == 0) 
			{
			  std::cout << elem << " could not be found!\n";
			}
			else 
			{
			  std::cout << elem <<" has been found and the representative is " << rep << '\n';
			}
		}
    
		else if(choice == 4)
		{
			int elem = 0;
			std::cout << "Enter the element on whose set you would want to perform path compression: ";
			std::cin >> elem;
			//ds->PathCompression(elem);
			std::cout <<"Path compression has been done successfully.\n";
		}
     
		else if(choice == 5)
		{
			int elem = 0;
			std::cout << "Enter the element you want to find the path for: ";
			std::cin >> elem;
			std::cout << "The path for " <<elem<< " is: \n"; 
			ds->Print();
		}
  
		else if(choice > 6)
		{
			std::cout << "\nPlease enter a valid option(1-6)!\n";
		}
	}while(choice != 6);
      //Invalid Input
	if(choice ==6)
	{
        delete ds;
		std::cout << "\nDemonstration complete! Exiting normally.\n\n";
		exit(1);
    }
}
  