#include "Hash.h"


Hash::Hash()
{
	h_size = 100003;
	table = new int[h_size];
	iter = 0;
}

Hash::~Hash()
{
	delete[] table;
}

int Hash::getSize()
{
	return h_size;
}

int Hash::hash(int key)
{
	return(key % h_size);
}

int Hash::linearHash(int key)
{
	for(int i = 0; i < k; i++)
	{
		int mapLoc = ((key + i) % h_size);
		if(table[mapLoc] == 0)
		{
			return mapLoc;
		}
		else
		{
			continue;
		}
	}
	
}

void Hash::insertLinear(int key)
{

	for(int i=1; i <= h_size; i++)
	{
		int index = hash(key);
		
		if(i == index && table[index] == 0)
		{
			table[index] = key;
		}
		else
		{
			int mapLoc = linearHash(key);
			table[mapLoc] = key;
			
		}
	}
	
}

void Hash::insertLin(int key)
{
	
	if(isFull())
	{
		rehash();
		insertLin(key);
		
	}
	else
	{
		insertLinear(key);
	}
	
	iter++;
}

int Hash::quadraticHash(int key)
{
	for(int i = 0; i < k; i++)
	{
		int mapLoc = ((key + (i^2)) % h_size);
		if(table[mapLoc] == 0)
		{
			return mapLoc;
		}
		else
		{
			continue;
		}
	}
}

void Hash::insertQuadratic(int key)
{
	for(int i=1; i <= h_size; i++)
	{
		int index = hash(key);
		
		if(i == index && table[index] == 0)
		{
			table[index] = key;
		}
		else
		{
			int mapLoc = quadraticHash(key);
			table[mapLoc] = key;
		}
	}
}


void Hash::insertQuad(int key)
{
	
	if(isFull())
	{
		rehash();
		insertQuadratic(key);
	}
	else
	{
		insertQuadratic(key);
	}
	
	iter++;
}

int Hash::doubleHash(int key)
{
	for(int i = 0; i < k; i++)
	{
		int x = hash(key);
		int mapLoc = ((key + i*(r-(x%r))) % h_size);
		if(table[mapLoc] == 0)
		{
			return mapLoc;
		}
		else
		{
			continue;
		}
	}
}

void Hash::insertDouble(int key)
{
	for(int i=1; i <= h_size; i++)
	{
		int index = hash(key);
		
		if(i == index && table[index] == 0)
		{
			table[index] = key;
		}
		else
		{
			int mapLoc = doubleHash(key);
			table[mapLoc] = key;
		}
	}
}
void Hash::insertDub(int key)
{
	if(isFull())
	{
		rehash();
		insertDouble(key);
	}
	else
	{
		insertDouble(key);
	}
	
	iter++;
} 
bool Hash::isFull() const 
{
	if(iter == h_size/2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Hash::print() const
{
	for(int i=0; i < h_size; i++)
	{
		std::cout << table[i] << "\n";
	}
}

bool Hash::contains(int key) const
{
	for(int i=1; i <= h_size; i++)
	{
		if(table[i] == key)
		{
			return true;
		}
	}
	return false;
}

int Hash::updatedSize(int h_size)
{
	 return nextPrime(h_size);
}

void Hash::rehash()
{
	h_size = updatedSize(h_size);
}

//Below is a source for the algorithm I used to find the smallest
//prime number greater than n. I used this for rehashing purposes.
//https://www.geeksforgeeks.org/program-to-find-the-next-prime-number/
bool Hash::isPrime(int n)
{
    // Corner cases
    if(n <= 1)
	{
		return false;
	}
    if(n <= 3)
	{
		return true;
	}
   
    if (n%2 == 0 || n%3 == 0)
	{
		return false;
	}
   
    for (int i=5; i*i<=n; i=i+6)
	{
        if (n%i == 0 || n%(i+2) == 0)
		{
           return false;
		}
	}
   return true;
}

int Hash::nextPrime(int N)
{
    if(N <= 1)
	{
        return 2;
	}
	
    int prime = N;
    bool found = false;
	
    while (!found) 
	{
        prime++;
		
        if (isPrime(prime))
		{
            found = true;
		}
	}
   return prime;
}