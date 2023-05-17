#include "Executive.h"
#include <stdexcept>
#include <iostream>
int main(int argc, char** argv)
{
	try
	{
		if(argc != 2)
		{
			throw(std::runtime_error("\nPlease enter ./prog and the data file name!(data.txt)\n\n"));
		}
		else
		{
			Executive exec(argv[1]);
			exec.run();
		}
	}
	catch(std::runtime_error& e)
	{
		std::cout << e.what();
	}
	return(0);
}