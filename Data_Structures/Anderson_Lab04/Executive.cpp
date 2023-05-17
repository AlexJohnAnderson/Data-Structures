/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 7
 * @brief This program will allow the user to choose what to do with a BST
 * @date 07/29/2021
 *
 ---------------------------------------------------------------------------- **/

#include "Executive.h"
Executive::Executive(std::string fileName)
{
	inputFile.open(fileName);
	if(validFile())
	{
		std::string name;
		int id;
		copyCreated = false;
		while(inputFile >> name >> id)
		{
			Object object(name, id);
			tree.add(object);
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
	std::cout << "\n1. IsFull\n2. AddItem\n3. RemoveItem\n4. Leaf\n5. PrintLeaves\n6. PrintTreeHeight\n7. Preorder\n8. Postorder\n9. Inorder\n10. Levelorder\n11. Exit\n";
	std::cout << "\n--------------------\n";
}

void Executive::run()
{
	int choice;
	do
	{
		printMenu();
		std::cout << "\nEnter an action(1-11) to perform on the tree: ";
		std::cin >> choice;
		std::cout << "\n--------------------\n";
		if(choice == 1)
		{
			if(tree.isFull() == 1)
			{
				std::cout<< "\nisFull() result: TRUE" << '\n';
			}
			else
			{
				std::cout<< "\nisFull() result: FALSE" << '\n';
			}
		}
		else if(choice == 2)
		{
			std::cout << "\nPlease enter the Item name which you want to add to the tree: ";
			std::string name;
			std::cin >> name;
			std::cout << "\nPlease enter the price of the Item:";
			int id;
			std::cin >> id;
			Object object(name, id);
			tree.add(object);
		}
		else if(choice == 3)
		{
			tree.remove();
			std::cout << "\nRemoval successful. The bottom right most node has been removed\n";
		}

		else if(choice == 4)
		{
			std::cout << "\nPlease enter the name of the Item that you want to test isLeaf() on:";
			int key;
			std::cin >> key;
		}
		else if(choice == 5)
		{
			
		}
		else if(choice == 6)
		{
			std::cout<< "\nCurrent Tree Height: " << tree.treeHeight()<< '\n';
		}
		else if(choice == 7)
		{
			std::cout << "Pre-Order traversal: ";
			tree.visitPreOrder(Object::printNames);
		}
		else if(choice == 8)
		{
			std::cout << "Post-Order traversal: ";			
			tree.visitPostOrder(Object::printNames);
		}
		else if(choice == 9)
		{
			std::cout << "In-Order traversal: ";
			tree.visitInOrder(Object::printNames);
		}
		else if(choice == 10)
		{
			std::cout << "Level-Order traversal: ";
			tree.visitLevelOrder(Object::printNames);
		}
	}while(choice != 11);

	if(choice == 11)
	{
		std::cout << "\nDemonstration complete! Exiting normally.\n";
		exit(1);
	}
		
}