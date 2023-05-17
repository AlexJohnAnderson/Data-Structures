#include "Hash.h"


Hash::Hash()
{
	h_size = 100003;
	table[h_size];
}

Hash::~Hash()
{
	delete[] table;
}

int Hash::retrieve(int key)
{

}

void Hash::insert(int key, int pos)
{
	
}

bool Hash::remove(int key)
{
}
