#include "Executive.h"
List* myList = new List;
List* myAppList = new List;

Executive::Executive(std::string fileName)
{
	try
	{
		inputFile.open(fileName);
		if(validFile())
		{
			int entry1;
			int entry2;
			int entry3;
			int entry4;
			int entry5;
			int entry6;
			int entry7;
			int entry8;
			int entry9;
			int entry10;
			
			
			while(inputFile >> entry1 >> entry2 >> entry3  >> entry4 >> entry5 >> entry6 >> entry7 >> entry8 >> entry9 >> entry10)
			{
				myList->insert(entry1);
				myList->insert(entry2);
				myList->insert(entry3);
				myList->insert(entry4);
				myList->insert(entry5);
				myList->insert(entry6);
				myList->insert(entry7);
				myList->insert(entry8);
				myList->insert(entry9);
				myList->insert(entry10);
				myAppList->insert(entry1);
				myAppList->insert(entry2);
				myAppList->insert(entry3);
				myAppList->insert(entry4);
				myAppList->insert(entry5);
			}
		}

		else
		{
			throw(std::runtime_error("\nERROR: Invalid file"));
		}
	}
	catch(std::runtime_error& e)
	{
		std::cout << e.what();
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
	std::cout << "\n--------------------\n1. Is Empty \n2. Length \n3. Insert \n4. Delete \n5. Find \n6. AppendList \n7. Print \n8. ReverseList \n9. Exit \n--------------------\n";
}

void Executive::run()
{
		
	int choice;
	int entry;
	do
	{
		printMenu();
		std::cout << "\nEnter an action(1-9) to perform on the List: ";
		std::cin >> choice;
		if(choice >= 1 && choice <= 9)
		{
			if(choice == 1)
			{
				if(myList->isEmpty())
				{
					std::cout << "\nThe list is empty\n";
				}
				else
				{
					std::cout << "\nThe list is not empty\n";
				}
			}
			else if(choice  == 2)
			{
				std::cout << "\nThe length of the list is: " << myList->getLength() << '\n';
			}
			else if(choice == 3)
			{
				std::cout << "\nPlease enter an integer to insert into the linked list: ";
				std::cin >> entry;
				if(!(std::cin.fail()))
				{
					myList->insert(entry);
					std::cout << "\nThe entry has been successfully inserted.\nPlease note this may take a moment to show up in the printed list.\n";
				}
				else
				{
					std::cout << "\nInvalid input. Only integers can be inserted\n";
				}
			}
			else if(choice == 4)
			{
				std::cout << "\nPlease enter an integer to delete from the linked list: ";
				std::cin >> entry;
				if(myList->find(entry))
				{
					myList->remove(entry);
					std::cout << "\nThe entry has been successfully deleted\n";
				}
				else
				{
					std::cout << "\nNo such entry exists in the list\n";
				}
			}
			else if(choice == 5)
			{
				std::cout << "\nPlease enter an integer to search the list for: ";
				std::cin >> entry;
				if(myList->find(entry))
				{
					std::cout<< '\n' << entry << " is in the list\n";
				}
				else
				{
					std::cout<< '\n' << entry << " is NOT in the list\n";
				}
			}
			else if(choice == 6)
			{
				std::cout << "\nElements in the appended List: ";
				myList->insert(myAppList->getEntry(0));
				myList->insert(myAppList->getEntry(1));
				myList->insert(myAppList->getEntry(2));
				myList->insert(myAppList->getEntry(3));
				myList->insert(myAppList->getEntry(4));
				for(int i=0; i<myList->getLength(); i++)
				{
					std::cout << myList->getEntry(i) << "  ";
				}
				std::cout << ".\n";
			}
			else if(choice == 7)
			{
				std::cout << "\nElements in the List: ";
				for(int i=0; i<myList->getLength(); i++)
				{
					std::cout << myList->getEntry(i) << "  ";
				}
				std::cout << ".\n";
			}
			else if(choice == 8)
			{
				myList->reverse();
				std::cout << "\nElements in the reversed List: ";
				for(int i=0; i<myList->getLength(); i++)
				{
					std::cout << myList->getEntry(i) << "  ";
				}
				std::cout << ".\nPerform this action again(8) to get the original list\n";
			}
		}
		else
		{
			std::cout << "\nPlease make a valid choice(1-9)\n";
		}
	}while(choice != 9);
	std::cout << "\n\nProgram execution completed. Now exiting, thank you\n\n!";
}
