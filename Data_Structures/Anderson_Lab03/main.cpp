#include "Executive.h"
#include <stdexcept>
#include <iostream>
int main()
{
	try
	{
		Executive* exec = new Executive;
		exec->run();
		delete exec;
	}
	catch(std::runtime_error& e)
	{
		std::cout << e.what();
	}
	
	return(0);
}