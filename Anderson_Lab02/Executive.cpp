#include "Executive.h"
List* myList0 = new List;
List* myList1 = new List;
List* myList2 = new List;
List* myList3 = new List;
List* myList4 = new List;
List* myList5 = new List;
List* myList6 = new List;
List* myList7 = new List;
List* myList8 = new List;
List* myList9 = new List;
List* myList10 = new List;
List* myList11 = new List;
List* myList12 = new List;
List* myList13 = new List;
List* myList14 = new List;
List* myList15 = new List;
List* myList16 = new List;

int Executive::hashFunc(int entry)
{
	return (entry % buckets);
}

Executive::Executive(std::string fileName)
{
	try
	{
		inputFile.open(fileName);
		if(validFile())
		{
			int input1;
			int input2;
			int input3;
			int input4;
			int input5;
			int input6;
			int input7;
			int input8;
			int input9;
			int input10;
			int input11;
			int input12;
			int input13;
			int input14;
			int input15;
			int input16;
			int input17;
			int input18;
			int input19;
			int input20;
			int input21;
			int input22;
			int input23;
			int input24;
			int input25;
			int input26;
			int input27;
			int input28;
			int input29;
			int input30;
			int input31;
		
			
			while(inputFile >> input1 >> input2 >> input3 >> input4  >> input5 >> input6 >> input7 >> input8 >> input9 >> input10 >> input11 >> input12 >> input13 >> input14 >> input15 >> input16 >> input17 >> input18 >> input19 >> input20 >> input21 >> input22 >> input23 >> input24 >> input25 >> input26 >> input27 >> input28 >> input29 >> input30 >> input31)
			{

				myList0->insert(input1);
				myList15->insert(input2);
				myList7->insert(input3);
				myList2->insert(input4);
				myList6->insert(input5);
				myList4->insert(input6);
				myList16->insert(input7);
				myList4->insert(input8);
				myList13->insert(input9);
				myList7->insert(input10);
				myList8->insert(input11);
				myList11->insert(input12);
				myList10->insert(input13);
				myList14->insert(input14);
				myList11->insert(input15);
				myList10->insert(input16);
				myList13->insert(input17);
				myList11->insert(input18);
				myList12->insert(input19);
				myList13->insert(input20);
				myList11->insert(input21);
				myList2->insert(input22);
				myList14->insert(input23);
				myList0->insert(input24);
				myList6->insert(input25);
				myList11->insert(input26);
				myList5->insert(input27);
				myList7->insert(input28);
				myList8->insert(input29);
				myList7->insert(input30);
				myList13->insert(input31);
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
	std::cout <<"\n--------------------\n1. Insert \n2. Delete \n3. Find \n4. Print \n5. Exit \n--------------------\n";
}

void Executive::run()
{
		
	int choice;
	int entry;
	do
	{
		printMenu();
		std::cout << "\nEnter an action(1-5) to perform on the Hash Table: ";
		std::cin >> choice;
		if(choice >= 1 && choice <= 5)
		{
			if(choice == 1)
			{
				std::cout << "\nPlease enter an integer to insert into the Hash able: ";
				std::cin >> entry;
				int hashLoc = hashFunc(entry);
				if(hashLoc == 0 && myList0->find(entry) == false){
					myList0->insert(entry);
					std::cout << "\n" <<entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 1&& myList1->find(entry) == false){
					myList1->insert(entry);
					std::cout << "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 2&& myList2->find(entry) == false){
					myList2->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 3&& myList3->find(entry) == false){
					myList3->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 4&& myList4->find(entry) == false){
					myList4->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 5&& myList5->find(entry) == false){
					myList5->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 6&& myList6->find(entry) == false){
					myList6->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 7 && myList7->find(entry) == false){
					myList7->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 8 && myList8->find(entry) == false){
					myList8->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 9 && myList9->find(entry) == false){
					myList9->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 10 && myList10->find(entry) == false){
					myList10->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}				
				else if(hashLoc == 11 && myList11->find(entry) == false){
					myList11->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 12 && myList12->find(entry) == false){
					myList12->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 13 && myList13->find(entry) == false){
					myList13->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 14 && myList14->find(entry) == false){
					myList14->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 15 && myList15->find(entry) == false){
					myList15->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else if(hashLoc == 16 && myList16->find(entry) == false){
					myList16->insert(entry);
					std::cout<< "\n" << entry << " has been successfully inserted.\n";
				}
				else{
					std::cout << "\nIt seems this entry is already in the hash table! Try a different value.\n";
				}
			}
			else if(choice  == 2)
			{
				myList0->reverse();
				myList1->reverse();
				myList2->reverse();
				myList3->reverse();
				myList4->reverse();
				myList5->reverse();
				myList6->reverse();
				myList7->reverse();
				myList8->reverse();
				myList9->reverse();
				myList10->reverse();
				myList11->reverse();
				myList12->reverse();
				myList13->reverse();
				myList14->reverse();
				myList15->reverse();
				myList16->reverse();
		 		std::cout << "\nPlease enter an integer to delete from the Hash Table: ";
				std::cin >> entry;
				int hashLoc = hashFunc(entry);
				if(hashLoc == 0 && myList0->find(entry) == true)
				{
					myList0->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 1 && myList1->find(entry) == true)
				{
					myList1->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 2 && myList2->find(entry) == true)
				{
					myList2->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 3 && myList3->find(entry) == true)
				{
					myList3->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 4 && myList4->find(entry) == true)
				{
					myList4->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 5 && myList5->find(entry) == true)
				{
					myList5->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 6 && myList6->find(entry) == true)
				{
					myList6->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 7 && myList7->find(entry) == true)
				{
					myList7->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 8 && myList8->find(entry) == true)
				{
					myList8->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 9 && myList9->find(entry) == true)
				{
					myList9->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 10 && myList10->find(entry) == true)
				{
					myList10->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 11 && myList11->find(entry) == true)
				{
					myList11->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 12 && myList12->find(entry) == true)
				{
					myList12->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 13 && myList13->find(entry) == true)
				{
					myList13->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 14 && myList14->find(entry) == true)
				{
					myList14->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 15 && myList15->find(entry) == true)
				{
					myList15->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else if(hashLoc == 16 && myList16->find(entry) == true)
				{
					myList16->remove(entry);
					std::cout<< '\n' << entry << " has been successfully deleted\n";
				}
				else
				{
					std::cout << "\nNo such entry exists in the list\n";
				} 
				myList0->reverse();
				myList1->reverse();
				myList2->reverse();
				myList3->reverse();
				myList4->reverse();
				myList5->reverse();
				myList6->reverse();
				myList7->reverse();
				myList8->reverse();
				myList9->reverse();
				myList10->reverse();
				myList11->reverse();
				myList12->reverse();
				myList13->reverse();
				myList14->reverse();
				myList15->reverse();
				myList16->reverse();
			}
			else if(choice == 3)
			{
				std::cout << "\nPlease enter an integer to search the Hash Table for: ";
				std::cin >> entry;
				if(myList0->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList1->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList2->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList3->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList4->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList5->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList6->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList7->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList8->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList9->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList10->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList11->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList12->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList13->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList14->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList15->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else if(myList16->find(entry))
				{
					std::cout<< '\n' << entry << " is in the Hash Table\n";
				}
				else
				{
					std::cout<< '\n' << entry << " is NOT in the Hash Table\n";
				}

		
			}
			else if(choice == 4)
			{
				myList0->reverse();
				std::cout << "\nBucket 0: ";
				for(int i=0; i<myList0->getLength(); i++)
				{
					std::cout << myList0->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList1->reverse();
				std::cout << "\nBucket 1: ";
				for(int i=0; i<myList1->getLength(); i++)
				{
					std::cout << myList1->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList2->reverse();
				std::cout << "\nBucket 2: ";
				for(int i=0; i<myList2->getLength(); i++)
				{
					std::cout << myList2->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList3->reverse();
				std::cout << "\nBucket 3: ";
				for(int i=0; i<myList3->getLength(); i++)
				{
					std::cout << myList3->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList4->reverse();
				std::cout << "\nBucket 4: ";
				for(int i=0; i<myList4->getLength(); i++)
				{
					std::cout << myList4->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList5->reverse();
				std::cout << "\nBucket 5: ";
				for(int i=0; i<myList5->getLength(); i++)
				{
					std::cout << myList5->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList6->reverse();
				std::cout << "\nBucket 6: ";
				for(int i=0; i<myList6->getLength(); i++)
				{
					std::cout << myList6->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList7->reverse();
				std::cout << "\nBucket 7: ";
				for(int i=0; i<myList7->getLength(); i++)
				{
					std::cout << myList7->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList8->reverse();
				std::cout << "\nBucket 8: ";
				for(int i=0; i<myList8->getLength(); i++)
				{
					std::cout << myList8->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList9->reverse();
				std::cout << "\nBucket 9: ";
				for(int i=0; i<myList9->getLength(); i++)
				{
					std::cout << myList9->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList10->reverse();
				std::cout << "\nBucket 10: ";
				for(int i=0; i<myList10->getLength(); i++)
				{
					std::cout << myList10->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList11->reverse();
				std::cout << "\nBucket 11: ";
				for(int i=0; i<myList11->getLength(); i++)
				{
					std::cout << myList11->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList12->reverse();
				std::cout << "\nBucket 12: ";
				for(int i=0; i<myList12->getLength(); i++)
				{
					std::cout << myList12->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList13->reverse();
				std::cout << "\nBucket 13: ";
				for(int i=0; i<myList13->getLength(); i++)
				{
					std::cout << myList13->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList14->reverse();
				std::cout << "\nBucket 14: ";
				for(int i=0; i<myList14->getLength(); i++)
				{
					std::cout << myList14->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList15->reverse();
				std::cout << "\nBucket 15 ";
				for(int i=0; i<myList15->getLength(); i++)
				{
					std::cout << myList15->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				std::cout << "\nBucket 16: ";
				for(int i=0; i<myList16->getLength(); i++)
				{
					std::cout << myList16->getEntry(i) << "  ";
				}
				std::cout << ".\n";
				myList0->reverse();
				myList1->reverse();
				myList2->reverse();
				myList3->reverse();
				myList4->reverse();
				myList5->reverse();
				myList6->reverse();
				myList7->reverse();
				myList8->reverse();
				myList9->reverse();
				myList10->reverse();
				myList11->reverse();
				myList12->reverse();
				myList13->reverse();
				myList14->reverse();
				myList15->reverse();
				myList16->reverse();
				
			}
		}
		else
		{
			std::cout << "\nPlease make a valid choice(1-5)\n";
		}
	}while(choice != 5);
	std::cout << "\n\nProgram execution completed. Now exiting, thank you\n\n!";
}
