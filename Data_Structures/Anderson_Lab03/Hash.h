#ifndef HASH_H
#define HASH_H
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

class Hash
{
	
	private:
	int iter;
	int k = 25;
	int r = 773;
	int h_size;
	int hash(int key);
	int* table;
	bool isFull() const;
	public:
	
	Hash();
	
	~Hash();
	
	int getSize();
	
	int linearHash(int key);
	void insertLin(int key);
	void insertLinear(int key);
	
	int quadraticHash(int key);
	void insertQuad(int key);
	void insertQuadratic(int key);
	
	int doubleHash(int Key);
	void insertDub(int key);
	void insertDouble(int key);
	
	void print() const;
	bool contains(int key) const;
	int updatedSize(int h_size);
	void rehash();
	bool isPrime(int n);
	int nextPrime(int N);
};
#endif