#ifndef HASH_H
#define HASH_H
#include "List.h"

class Hash
{
	private:
	int buckets;
	/**
	* @pre None
	* @post int to keep reack of the size of the hash table; returns size as int(should always be 17)
	* @param None
	*/

	public:
	Hash();
	/**
	* @pre None
	* @post constructor sets the array size to m_size
	* @param None
	*/
	
	~Hash();
	/**
	* @pre None
	* @post array that will store entires in each list; hast table
	* @param None
	*/
	
	int hashFunc(int entry);
	/**
	* @pre None
	* @post array that will store entires in each list; hast table
	* @param None
	*/
	
	void insert(int entry);
	/**
	* @pre None
	* @post array that will store entires in each list; hast table
	* @param None
	*/
	
	void remove(int entry);
	/**
	* @pre None
	* @post array that will store entires in each list; hast table
	* @param None
	*/
	
	void find(int entry);
	/**
	* @pre None
	* @post array that will store entires in each list; hast table
	* @param None
	*/
	
	void print();
	/**
	* @pre None
	* @post prints the hash tabel
	* @param None
	*/
	
	void clear();
	/**
	* @pre None
	* @post Deletes the arr acting as the hash table
	* @param None
	*/	
};
#endif