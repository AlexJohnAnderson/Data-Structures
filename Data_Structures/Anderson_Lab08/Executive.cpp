/** -----------------------------------------------------------------------------
 *
 * @file Executive.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 8
 * @brief This program will store data in two types of heaps
 * @date 04/18/2022
 *
 ---------------------------------------------------------------------------- **/
#include "Executive.h"
#include <stdlib.h>// srand, rand
#include <time.h> //timing functions
//#include <tgmath.h>//floor function

Executive::Executive()
{
	
}
Executive::~Executive()
{
	
}

void Executive::printMenu()
{
	std::cout << "\n------------------------------\n";
	std::cout << "\n1. Test build - max leftist heap\n2. Test delete max - max leftist heap\n3. Test build - max skew heap\n4. Test delete max - max skew heap\n5. Test Performance of heaps\n6. Exit\n";
	std::cout << "\n------------------------------\n";
}

void Executive::run()
{	
	int choice;
	int random_number;
	MaxSkew* skew = new MaxSkew;
	MaxSkew* skew1 = new MaxSkew;
	MaxSkew* skew2 = new MaxSkew;
	MaxSkew* skew3 = new MaxSkew;
	MaxSkew* skew4 = new MaxSkew;
	MaxSkew* skew5 = new MaxSkew;
	MaxLeftist* leftist = new MaxLeftist;
	MaxLeftist* leftist1 = new MaxLeftist;
	MaxLeftist* leftist2 = new MaxLeftist;
	MaxLeftist* leftist3 = new MaxLeftist;
	MaxLeftist* leftist4 = new MaxLeftist;
	MaxLeftist* leftist5 = new MaxLeftist;
	do
	{
		printMenu();
		std::cout << "\nEnter an action(1-6) to perform on the heaps: ";
		std::cin >> choice;
		std::cout << "\n--------------------\n";
		if(choice == 1)
		{
			std::cout << "Level Order of Max Leftist Heap: " << '\n';
			leftist->buildHeap();
			leftist->levelOrder();
			std::cout << '\n';
		}
		else if(choice == 2)
		{
			std::cout << "Max element deleted" << '\n' << "Level Order of Max Leftist Heap: " << '\n';
			leftist->deleteMax();
			leftist->levelOrder();
			std::cout << '\n';
		}
		else if(choice == 3)
		{
			std::cout << "Level Order of Max Skew Heap: " << '\n';
			skew->buildHeap();
			skew->levelOrder();
			std::cout << '\n';
		}
		else if(choice == 4)
		{
			std::cout << "Max element deleted" << '\n' << "Level Order of Max Skew Heap: " << '\n';
			skew->deleteMax();
			skew->levelOrder();
			std::cout << '\n';
		}
		else if(choice == 5)
		{
			

 			std::cout << "\nPlease wait. Data is being loaded...\n\n\n";
			//Leftists heap performance
			clock_t leftist_build_time_start1;
			clock_t leftist_build_time_end1;
			clock_t leftist_build_time_total1;
			
			leftist_build_time_start1 = clock();

			for(int i=0; i < 100000; i++)
			{
				random_number = rand() % 5000000 + 1;
				leftist1->insert(random_number);
			}

			leftist_build_time_end1 = clock();
			leftist_build_time_total1 = leftist_build_time_end1 - leftist_build_time_start1;
			
			clock_t leftist_build_time_start2;
			clock_t leftist_build_time_end2;
			clock_t leftist_build_time_total2;
			
			leftist_build_time_start2 = clock();

			for(int i=0; i < 200000; i++)
			{
				random_number = rand() % 5000000 + 1;
				leftist2->insert(random_number);
			}

			leftist_build_time_end2 = clock();
			leftist_build_time_total2 = leftist_build_time_end2 - leftist_build_time_start2;
			
			clock_t leftist_build_time_start3;
			clock_t leftist_build_time_end3;
			clock_t leftist_build_time_total3;
			
			leftist_build_time_start3 = clock();

			for(int i=0; i < 300000; i++)
			{
				random_number = rand() % 5000000 + 1;
				leftist3->insert(random_number);
			}

			leftist_build_time_end3 = clock();
			leftist_build_time_total3 = leftist_build_time_end3 - leftist_build_time_start3;
			
			clock_t leftist_build_time_start4;
			clock_t leftist_build_time_end4;
			clock_t leftist_build_time_total4;
			
			leftist_build_time_start4 = clock();

			for(int i=0; i < 400000; i++)
			{
				random_number = rand() % 5000000 + 1;
				leftist4->insert(random_number);
			}

			leftist_build_time_end4 = clock();
			leftist_build_time_total4 = leftist_build_time_end4 - leftist_build_time_start4;
			
			clock_t leftist_build_time_start5;
			clock_t leftist_build_time_end5;
			clock_t leftist_build_time_total5;
			
			leftist_build_time_start5 = clock();

			for(int i=0; i < 500000; i++)
			{
				random_number = rand() % 5000000 + 1;
				leftist5->insert(random_number);
			}

			leftist_build_time_end5 = clock();
			leftist_build_time_total5 = leftist_build_time_end5 - leftist_build_time_start5;
			 
			 
			clock_t leftist_deleteMax_time_start1;
			clock_t leftist_deleteMax_time_end1;
			clock_t leftist_deleteMax_time_total1;
			leftist_deleteMax_time_start1 = clock();
			leftist1->deleteMax();
			leftist_deleteMax_time_end1 = clock();
			leftist_deleteMax_time_total1 = leftist_deleteMax_time_end1 - leftist_deleteMax_time_start1;
			
			
			clock_t leftist_deleteMax_time_start2;
			clock_t leftist_deleteMax_time_end2;
			clock_t leftist_deleteMax_time_total2;
			leftist_deleteMax_time_start2 = clock();
			leftist2->deleteMax();
			leftist_deleteMax_time_end2 = clock();
			leftist_deleteMax_time_total2 = leftist_deleteMax_time_end2 - leftist_deleteMax_time_start2;
			
			clock_t leftist_deleteMax_time_start3;
			clock_t leftist_deleteMax_time_end3;
			clock_t leftist_deleteMax_time_total3;
			leftist_deleteMax_time_start3 = clock();
			leftist3->deleteMax();
			leftist_deleteMax_time_end3 = clock();
			leftist_deleteMax_time_total3 = leftist_deleteMax_time_end3 - leftist_deleteMax_time_start3;
			
			clock_t leftist_deleteMax_time_start4;
			clock_t leftist_deleteMax_time_end4;
			clock_t leftist_deleteMax_time_total4;
			leftist_deleteMax_time_start4 = clock();
			leftist4->deleteMax();
			leftist_deleteMax_time_end4 = clock();
			leftist_deleteMax_time_total4 = leftist_deleteMax_time_end4 - leftist_deleteMax_time_start4;
			
			clock_t leftist_deleteMax_time_start5;
			clock_t leftist_deleteMax_time_end5;
			clock_t leftist_deleteMax_time_total5;
			leftist_deleteMax_time_start5 = clock();
			leftist5->deleteMax();
			leftist_deleteMax_time_end5 = clock();
			leftist_deleteMax_time_total5 = leftist_deleteMax_time_end5 - leftist_deleteMax_time_start5;
			 
			clock_t skew_build_time_start1;
			clock_t skew_build_time_end1;
			clock_t skew_build_time_total1;
			
			skew_build_time_start1 = clock();

			for(int i=0; i < 100000; i++)
			{
				random_number = rand() % 5000000 + 1;
				skew1->insert(random_number);
			}

			skew_build_time_end1 = clock();
			skew_build_time_total1 = skew_build_time_end1 - skew_build_time_start1;
			
			clock_t skew_build_time_start2;
			clock_t skew_build_time_end2;
			clock_t skew_build_time_total2;
			
			skew_build_time_start2 = clock();

			for(int i=0; i < 200000; i++)
			{
				random_number = rand() % 5000000 + 1;
				skew2->insert(random_number);
			}

			skew_build_time_end2 = clock();
			skew_build_time_total2 = skew_build_time_end2 - skew_build_time_start2;
			
			clock_t skew_build_time_start3;
			clock_t skew_build_time_end3;
			clock_t skew_build_time_total3;
			
			skew_build_time_start3 = clock();

			for(int i=0; i < 300000; i++)
			{
				random_number = rand() % 5000000 + 1;
				skew3->insert(random_number);
			}

			skew_build_time_end3 = clock();
			skew_build_time_total3 = skew_build_time_end3 - skew_build_time_start3;
			
			clock_t skew_build_time_start4;
			clock_t skew_build_time_end4;
			clock_t skew_build_time_total4;
			
			skew_build_time_start4 = clock();

			for(int i=0; i < 400000; i++)
			{
				random_number = rand() % 5000000 + 1;
				skew4->insert(random_number);
			}

			skew_build_time_end4 = clock();
			skew_build_time_total4 = skew_build_time_end4 - skew_build_time_start4;
			
			clock_t skew_build_time_start5;
			clock_t skew_build_time_end5;
			clock_t skew_build_time_total5;
			
			skew_build_time_start5 = clock();

			for(int i=0; i < 500000; i++)
			{
				random_number = rand() % 5000000 + 1;
				skew5->insert(random_number);
			}

			skew_build_time_end5 = clock();
			skew_build_time_total5 = skew_build_time_end5 - skew_build_time_start5;
			 
			 
			clock_t skew_deleteMax_time_start1;
			clock_t skew_deleteMax_time_end1;
			clock_t skew_deleteMax_time_total1;
			skew_deleteMax_time_start1 = clock();
			skew1->deleteMax();
			skew_deleteMax_time_end1 = clock();
			skew_deleteMax_time_total1 = skew_deleteMax_time_end1 - skew_deleteMax_time_start1;
			
			
			clock_t skew_deleteMax_time_start2;
			clock_t skew_deleteMax_time_end2;
			clock_t skew_deleteMax_time_total2;
			skew_deleteMax_time_start2 = clock();
			skew2->deleteMax();
			skew_deleteMax_time_end2 = clock();
			skew_deleteMax_time_total2 = skew_deleteMax_time_end2 - skew_deleteMax_time_start2;
			
			clock_t skew_deleteMax_time_start3;
			clock_t skew_deleteMax_time_end3;
			clock_t skew_deleteMax_time_total3;
			skew_deleteMax_time_start3 = clock();
			skew3->deleteMax();
			skew_deleteMax_time_end3 = clock();
			skew_deleteMax_time_total3 = skew_deleteMax_time_end3 - skew_deleteMax_time_start3;
			
			clock_t skew_deleteMax_time_start4;
			clock_t skew_deleteMax_time_end4;
			clock_t skew_deleteMax_time_total4;
			skew_deleteMax_time_start4 = clock();
			skew4->deleteMax();
			skew_deleteMax_time_end4 = clock();
			skew_deleteMax_time_total4 = skew_deleteMax_time_end4 - skew_deleteMax_time_start4;
			
			clock_t skew_deleteMax_time_start5;
			clock_t skew_deleteMax_time_end5;
			clock_t skew_deleteMax_time_total5;
			skew_deleteMax_time_start5 = clock();
			skew5->deleteMax();
			skew_deleteMax_time_end5 = clock();
			skew_deleteMax_time_total5 = skew_deleteMax_time_end5 - skew_deleteMax_time_start5;
			 
			 
			//performance totals 
			std::cout<<"\n_________________________Performance(Max Leftist Heap)_________________________\n";
			std::cout<<"_______________________________________________________________________________\n";
			std::cout<<"| Input size:           | 100,000  | 200,000  | 300,000  | 400,000  | 500,000  |\n";
			std::cout<<"| Build(seconds):       | "<<(float(leftist_build_time_total1))/CLOCKS_PER_SEC << " | " <<(float(leftist_build_time_total2))/CLOCKS_PER_SEC<< " | " <<(float(leftist_build_time_total3))/CLOCKS_PER_SEC<< "  | " <<(float(leftist_build_time_total4))/CLOCKS_PER_SEC<< "  | " <<(float(leftist_build_time_total5))/CLOCKS_PER_SEC<< " | \n";
			std::cout<<"| DeleteMax(seconds):   | "<<(float(leftist_deleteMax_time_total1))/CLOCKS_PER_SEC << "    | " <<(float(leftist_deleteMax_time_total2))/CLOCKS_PER_SEC<< "   | " <<(float(leftist_deleteMax_time_total3))/CLOCKS_PER_SEC<< "    | " <<(float(leftist_deleteMax_time_total4))/CLOCKS_PER_SEC<< "    | " <<(float(leftist_deleteMax_time_total5))/CLOCKS_PER_SEC<< " | \n";
			
			std::cout<<"\n_________________________Performance(Max Skew Heap)____________________________\n";
			std::cout<<"_______________________________________________________________________________\n";
			std::cout<<"| Input size:           | 100,000  | 200,000  | 300,000  | 400,000  | 500,000  |\n";
			std::cout<<"| Build(seconds):       | "<<(float(skew_build_time_total1))/CLOCKS_PER_SEC << " | " <<(float(skew_build_time_total2))/CLOCKS_PER_SEC<< " | " <<(float(skew_build_time_total3))/CLOCKS_PER_SEC<< " | " <<(float(skew_build_time_total4))/CLOCKS_PER_SEC<< " | " <<(float(skew_build_time_total5))/CLOCKS_PER_SEC<< " | \n";
			std::cout<<"| DeleteMax(seconds):   | "<<(float(skew_deleteMax_time_total1))/CLOCKS_PER_SEC << "    | " <<(float(skew_deleteMax_time_total2))/CLOCKS_PER_SEC<< "    | " <<(float(skew_deleteMax_time_total3))/CLOCKS_PER_SEC<< "    | " <<(float(skew_deleteMax_time_total4))/CLOCKS_PER_SEC<< "   | " <<(float(skew_deleteMax_time_total5))/CLOCKS_PER_SEC<< " | \n";
			std::cout<<'\n';
		}
		else if(choice > 6)
		{
			std::cout << "\nPlease enter a valid option(1-6)!\n";
		}
	}while(choice != 6);

	if(choice == 6)
	{
		delete skew;
		delete skew1;
		delete skew2;
		delete skew3;
		delete skew4;
		delete skew5;
		delete leftist;
		delete leftist1;
		delete leftist2;
		delete leftist3;
		delete leftist4;
		delete leftist5;
		std::cout << "\nDemonstration complete! Exiting normally.\n\n";
		exit(1);
	}
}
	

	
