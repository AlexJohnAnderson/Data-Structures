#include "graph.h"
#include <fstream>
#include <iostream>

#include <cstdlib>
#include <ctime>
#include <vector>

void printMenu()
{
	std::cout << "\n--------------------\n";
	std::cout << "\n1. BuildGraph\n2. BFS\n3. DFS\n4. Kruskal\n5. Prim\n6. Exit\n";
	std::cout << "\n--------------------\n";
}
	
int main() 
{
	ifstream infile;
    Graph* graph = new Graph(5); 
	int n;
	int vertices;
	int val;
    
    infile.open("data.txt");
   
        std::cout << std::endl << std::endl;
        std::cout << "..................................." << std::endl
             << "Output for 'data.txt':" << std::endl;
        if (infile.fail())
        {
            std::cout << "warning: Failed to open 'data.txt'." << std::endl;
            return 0;
        }
        
        infile >> n;
        for (int grph=1; grph <= n; grph++)
        {
            infile >> vertices;
            for (int i = 0; i<vertices*vertices; i++)
            {
                infile >> val;
                graph->insert(val);
            }
		}
		
	infile.close();
            
	int choice;
	do
	{
		printMenu();
		std::cout << "\nEnter an action(1-6) to perform on the graph: ";
		std::cin >> choice;
		std::cout << "\n--------------------\n";
		
		if(choice == 1)
		{
			std::cout << "\nThe graph has been constructed.\n";
        }
      
		else if(choice == 2)
		{
			
		}
     
		else if(choice == 3)
		{

		}
    
		else if(choice == 4)
		{
			graph->kruskal();
		}
     
		else if(choice == 5)
		{
			graph->prim();
		}
  
		else if(choice > 6)
		{
			std::cout << "\nPlease enter a valid option(1-6)!\n";
		}
	}while(choice != 6);
      //Invalid Input
	if(choice ==6)
	{
       
		std::cout << "\nDemonstration complete! Exiting normally.\n\n";
		exit(1);
	}

    return 0;
}