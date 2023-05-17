#include "Executive.h"
#include <stdlib.h>// srand, rand
#include <time.h> //timing functions
#include <tgmath.h>//floor function
int random_number;
Hash* tableLinear = new Hash;
Hash* tableQuadratic = new Hash;
Hash* tableDouble = new Hash;


Executive::Executive()
{
	
}
Executive::~Executive()
{
	
}

void Executive::run()
{	
	clock_t linear_build_time_start1;
	clock_t linear_build_time_end1;
	clock_t linear_build_time_total1;
	/*start the clock*/
	linear_build_time_start1 = clock();
	
	for(int i=0; i < 100000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			continue;
		}
		else
		{
			tableLinear->insertLin(random_number);
		}
	}
	//table->print();
	
	linear_build_time_end1 = clock();
	linear_build_time_total1 = linear_build_time_end1 - linear_build_time_start1;
	
	clock_t quadratic_build_time_start1;
	clock_t quadratic_build_time_end1;
	clock_t quadratic_build_time_total1;
	/*start the clock*/
	quadratic_build_time_start1 = clock();
	
	for(int i=0; i < 100000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableQuadratic->contains(random_number))
		{
			continue;
		}
		else
		{
			tableQuadratic->insertQuad(random_number);
		}
	}
	//table->print();
	
	quadratic_build_time_end1 = clock();
	quadratic_build_time_total1 = quadratic_build_time_end1 - quadratic_build_time_start1;
	
		
	clock_t double_build_time_start1;
	clock_t double_build_time_end1;
	clock_t double_build_time_total1;
	/*start the clock*/
	double_build_time_start1 = clock();
	
	for(int i=0; i < 100000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableDouble->contains(random_number))
		{
			continue;
		}
		else
		{
			tableDouble->insertDub(random_number);
		}
	}
	//table->print();
	
	double_build_time_end1 = clock();
	double_build_time_total1 = double_build_time_end1 - double_build_time_start1;
	



//Build 200000




 	clock_t linear_build_time_start2;
	clock_t linear_build_time_end2;
	clock_t linear_build_time_total2;

	linear_build_time_start2 = clock();
	
	for(int i=0; i < 200000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			continue;
		}
		else
		{
			tableLinear->insertLin(random_number);
		}
	}

	linear_build_time_end2 = clock();
	linear_build_time_total2 = linear_build_time_end2 - linear_build_time_start2;
	
	clock_t quadratic_build_time_start2;
	clock_t quadratic_build_time_end2;
	clock_t quadratic_build_time_total2;

	quadratic_build_time_start2 = clock();
	
	for(int i=0; i < 200000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableQuadratic->contains(random_number))
		{
			continue;
		}
		else
		{
			tableQuadratic->insertQuad(random_number);
		}
	}
	
	quadratic_build_time_end2 = clock();
	quadratic_build_time_total2 = quadratic_build_time_end2 - quadratic_build_time_start2;
	
		
	clock_t double_build_time_start2;
	clock_t double_build_time_end2;
	clock_t double_build_time_total2;

	double_build_time_start2 = clock();
	
	for(int i=0; i < 200000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableDouble->contains(random_number))
		{
			continue;
		}
		else
		{
			tableDouble->insertDub(random_number);
		}
	}

	
	double_build_time_end2 = clock();
	double_build_time_total2 = double_build_time_end2 - double_build_time_start2;
	
	
// Build 300000
	
	
	clock_t linear_build_time_start3;
	clock_t linear_build_time_end3;
	clock_t linear_build_time_total3;
	
	linear_build_time_start3 = clock();
	
	for(int i=0; i < 300000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			continue;
		}
		else
		{
			tableLinear->insertLin(random_number);
		}
	}

	
	linear_build_time_end3 = clock();
	linear_build_time_total3 = linear_build_time_end3 - linear_build_time_start3;
	
	clock_t quadratic_build_time_start3;
	clock_t quadratic_build_time_end3;
	clock_t quadratic_build_time_total3;

	quadratic_build_time_start3 = clock();
	
	for(int i=0; i < 300000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableQuadratic->contains(random_number))
		{
			continue;
		}
		else
		{
			tableQuadratic->insertQuad(random_number);
		}
	
	}
	
	quadratic_build_time_end3 = clock();
	quadratic_build_time_total3 = quadratic_build_time_end3 - quadratic_build_time_start3;
	
		
	clock_t double_build_time_start3;
	clock_t double_build_time_end3;
	clock_t double_build_time_total3;

	double_build_time_start3 = clock();
	
	for(int i=0; i < 300000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableDouble->contains(random_number))
		{
			continue;
		}
		else
		{
			tableDouble->insertDub(random_number);
		}
	}
	double_build_time_end3 = clock();
	double_build_time_total3 = double_build_time_end3 - double_build_time_start3;
	
	
//Build 400000	
	
	clock_t linear_build_time_start4;
	clock_t linear_build_time_end4;
	clock_t linear_build_time_total4;

	linear_build_time_start4 = clock();
	
	for(int i=0; i < 400000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			continue;
		}
		else
		{
			
			tableLinear->insertLin(random_number);
		}
	}
	
	
	linear_build_time_end4 = clock();
	linear_build_time_total4 = linear_build_time_end4 - linear_build_time_start4;
	
	clock_t quadratic_build_time_start4;
	clock_t quadratic_build_time_end4;
	clock_t quadratic_build_time_total4;

	quadratic_build_time_start4 = clock();
	
	for(int i=0; i < 400000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableQuadratic->contains(random_number))
		{
			continue;
		}
		else
		{
			tableQuadratic->insertQuad(random_number);
		}
	}

	
	quadratic_build_time_end4 = clock();
	quadratic_build_time_total4 = quadratic_build_time_end4 - quadratic_build_time_start4;
	
		
	clock_t double_build_time_start4;
	clock_t double_build_time_end4;
	clock_t double_build_time_total4;
	
	double_build_time_start4 = clock();
	
	for(int i=0; i < 400000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableDouble->contains(random_number))
		{
			continue;
		}
		else
		{
			tableDouble->insertDub(random_number);
		}
	}

	
	double_build_time_end4 = clock();
	double_build_time_total4 = double_build_time_end4 - double_build_time_start4;
	
	
	
	clock_t linear_build_time_start5;
	clock_t linear_build_time_end5;
	clock_t linear_build_time_total5;

	linear_build_time_start5 = clock();
	
	for(int i=0; i < 500000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			continue;
		}
		else
		{
			tableLinear->insertLin(random_number);
		}
	}
	//table->print();
	
	linear_build_time_end5 = clock();
	linear_build_time_total5 = linear_build_time_end5 - linear_build_time_start5;
	
	clock_t quadratic_build_time_start5;
	clock_t quadratic_build_time_end5;
	clock_t quadratic_build_time_total5;

	quadratic_build_time_start5 = clock();
	
	for(int i=0; i < 500000; i++)
	{	
		random_number = rand() % 5000000 + 1;
		if(tableQuadratic->contains(random_number))
		{
			continue;
		}
		else
		{
			tableQuadratic->insertQuad(random_number);
		}
	}
	
	
	quadratic_build_time_end5 = clock();
	quadratic_build_time_total5 = quadratic_build_time_end5 - quadratic_build_time_start5;
	
		
	clock_t double_build_time_start5;
	clock_t double_build_time_end5;
	clock_t double_build_time_total5;
	
	double_build_time_start5 = clock();
	
	for(int i=0; i < 500000; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableDouble->contains(random_number))
		{
			continue;
		}
		else
		{
			tableDouble->insertDub(random_number);
		}
	}
	
	
	double_build_time_end5 = clock();
	double_build_time_total5 = double_build_time_end5 - double_build_time_start5;
	
	
	
	int linearSearch1 = floor(0.1*tableLinear->getSize());
	int linearSearch2 = floor(0.2*tableLinear->getSize());
	int linearSearch3 = floor(0.3*tableLinear->getSize());
	int linearSearch4 = floor(0.4*tableLinear->getSize());
	int linearSearch5 = floor(0.5*tableLinear->getSize());
	int linearsearch1Results = 0;
	int linearsearch2Results = 0;
	int linearsearch3Results = 0;
	int linearsearch4Results = 0;
	int linearsearch5Results = 0;

	for(int i=0; i < linearSearch1; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			linearsearch1Results++;
		}
	}
	for(int i=0; i < linearSearch2; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			linearsearch2Results++;
		}
	}
	for(int i=0; i < linearSearch3; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			linearsearch3Results++;
		}
	}
	for(int i=0; i < linearSearch4; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			linearsearch4Results++;
		}
	}
	for(int i=0; i < linearSearch5; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			linearsearch5Results++;
		}
	}
	
	int quadraticSearch1 = floor(0.1*tableQuadratic->getSize());
	int quadraticSearch2 = floor(0.2*tableQuadratic->getSize());
	int quadraticSearch3 = floor(0.3*tableQuadratic->getSize());
	int quadraticSearch4 = floor(0.4*tableQuadratic->getSize());
	int quadraticSearch5 = floor(0.5*tableQuadratic->getSize());
	int quadraticsearch1Results = 0;
	int quadraticsearch2Results = 0;
	int quadraticsearch3Results = 0;
	int quadraticsearch4Results = 0;
	int quadraticsearch5Results = 0;
	
	for(int i=0; i < quadraticSearch1; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			quadraticsearch1Results++;
		}
	}
	for(int i=0; i < quadraticSearch2; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			quadraticsearch2Results++;
		}
	}
	for(int i=0; i < quadraticSearch3; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			quadraticsearch3Results++;
		}
	}
	for(int i=0; i < quadraticSearch4; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			quadraticsearch4Results++;
		}
	}
	for(int i=0; i < quadraticSearch5; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			quadraticsearch5Results++;
		}
	}
	
	int doubleSearch1 = floor(0.1*tableDouble->getSize());
	int doubleSearch2 = floor(0.2*tableDouble->getSize());
	int doubleSearch3 = floor(0.3*tableDouble->getSize());
	int doubleSearch4 = floor(0.4*tableDouble->getSize());
	int doubleSearch5 = floor(0.5*tableDouble->getSize());
	int doublesearch1Results = 0;
	int doublesearch2Results = 0;
	int doublesearch3Results = 0;
	int doublesearch4Results = 0;
	int doublesearch5Results = 0;

	
	for(int i=0; i < doubleSearch1; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			doublesearch1Results++;
		}
	}
	for(int i=0; i < doubleSearch2; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			doublesearch2Results++;
		}
	}
	for(int i=0; i < doubleSearch3; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			doublesearch3Results++;
		}
	}
	for(int i=0; i < doubleSearch4; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			doublesearch4Results++;
		}
	}
	for(int i=0; i < doubleSearch5; i++)
	{
		random_number = rand() % 5000000 + 1;
		if(tableLinear->contains(random_number))
		{
			doublesearch5Results++;
		}
	}

	
	
	std::cout<<"\n\n_________________________Performance(Linear Probing)_________________________\n";
	std::cout<<"___________________________________________________________________________\n";
	std::cout<<"| Input size:           | 100,000 | 200,000 | 300,000 | 400,000 | 500,000 |\n";
	std::cout<<"| Build(seconds):       | "<<(float(linear_build_time_total1))/CLOCKS_PER_SEC << " | " <<(float(linear_build_time_total2))/CLOCKS_PER_SEC<< " | " <<(float(linear_build_time_total3))/CLOCKS_PER_SEC<< " | " <<(float(linear_build_time_total4))/CLOCKS_PER_SEC<< " | " <<(float(linear_build_time_total5))/CLOCKS_PER_SEC<< " | \n";
	std::cout<<"| Number of items\n";
	std::cout<<"| successfully found:   | "<<linearsearch1Results << " | " <<linearsearch2Results<< " | " <<linearsearch3Results<< " | " <<linearsearch4Results<< " | " <<linearsearch5Results<< " | \n";
	std::cout<<"| Number of items\n";
	std::cout<<"| not found:            | "<<linearSearch1-linearsearch1Results << " | " <<linearSearch2-linearsearch2Results<< " | " <<linearSearch3-linearsearch3Results<< " | " <<linearSearch4-linearsearch4Results<< " | " <<linearSearch5-linearsearch5Results<< " | \n\n";
	
	std::cout<<"\n\n_________________________Performance(Quadratic Probing)_________________________\n";
	std::cout<<"___________________________________________________________________________\n";
	std::cout<<"| Input size:           | 100,000 | 200,000 | 300,000 | 400,000 | 500,000 |\n";
	std::cout<<"| Build(seconds):       | "<<(float(quadratic_build_time_total1))/CLOCKS_PER_SEC << " | " <<(float(quadratic_build_time_total2))/CLOCKS_PER_SEC<< " | " <<(float(quadratic_build_time_total3))/CLOCKS_PER_SEC<< " | " <<(float(quadratic_build_time_total4))/CLOCKS_PER_SEC<< " | " <<(float(quadratic_build_time_total5))/CLOCKS_PER_SEC<< " | \n";
	std::cout<<"| Number of items\n";
	std::cout<<"| successfully found:   | "<<quadraticsearch1Results << " | " <<quadraticsearch2Results<< " | " <<quadraticsearch3Results<< " | " <<quadraticsearch4Results<< " | " <<quadraticsearch5Results<< " | \n";
	std::cout<<"| Number of items\n";
	std::cout<<"| not found:            | "<<quadraticSearch1-quadraticsearch1Results << " | " <<quadraticSearch2-quadraticsearch2Results<< " | " <<quadraticSearch3-quadraticsearch3Results<< " | " <<quadraticSearch4-quadraticsearch4Results<< " | " <<quadraticSearch5-quadraticsearch5Results<< " | \n\n";
	
	std::cout<<"\n\n_________________________Performance(Double Hashing)_________________________\n";
	std::cout<<"___________________________________________________________________________\n";
	std::cout<<"| Input size:           | 100,000 | 200,000 | 300,000 | 400,000 | 500,000 |\n";
	std::cout<<"| Build(seconds):       | "<<(float(double_build_time_total1))/CLOCKS_PER_SEC << " | " <<(float(double_build_time_total2))/CLOCKS_PER_SEC<< " | " <<(float(double_build_time_total3))/CLOCKS_PER_SEC<< " | " <<(float(double_build_time_total4))/CLOCKS_PER_SEC<< " | " <<(float(double_build_time_total5))/CLOCKS_PER_SEC<< " | \n";
	std::cout<<"| Number of items\n";
	std::cout<<"| successfully found:   | "<<doublesearch1Results << " | " <<doublesearch2Results<< " | " <<doublesearch3Results<< " | " <<doublesearch4Results<< " | " <<doublesearch5Results<< " | \n";
	std::cout<<"| Number of items\n";
	std::cout<<"| not found:            | "<<doubleSearch1-doublesearch1Results << " | " <<doubleSearch2-doublesearch2Results<< " | " <<doubleSearch3-doublesearch3Results<< " | " <<doubleSearch4-doublesearch4Results<< " | " <<doubleSearch5-doublesearch5Results<< " | \n\n";
	
		
	//std::cout<< "\n\nLinear:" << (float(linear_build_time_total1))/CLOCKS_PER_SEC  << '\n';
	//std::cout<< "\nQuadratic:" << (float(quadratic_build_time_total1))/CLOCKS_PER_SEC << '\n'; //(will result in seconds)
	//std::cout<< "\nDouble:" << (float(double_build_time_total1))/CLOCKS_PER_SEC << '\n'; 
}

	