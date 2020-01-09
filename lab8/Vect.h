#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;
class Vect {
protected:
	double* digits;
	int size;
public:
	Vect();
	Vect(double* table, int size);
	Vect(int size);
	Vect(const Vect& original);
	~Vect();

	Vect& operator=(const Vect& right);
	double& operator[](int index);
	int getSize();
	void setSize(int size);
	void add(double digit);
	
	friend bool operator==(const Vect& left, const Vect& right);
	friend bool operator!=(const Vect& left, const Vect& right);
	friend istream& operator>>(istream& id, Vect& arg);
	friend ostream& operator<<(ostream& od, const Vect& arg);

};