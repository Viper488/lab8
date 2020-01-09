#pragma once
#include "Vect.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <stdlib.h>
#include <algorithm>
#include <functional>

using namespace std;
class Svect
	:private Vect
{
protected:
	void sorts();
public:
	Svect();
	Svect(double* table, int size);
	Svect(int size);
	Svect(Vect& original);
	~Svect();
	Vect& operator=(Vect& right);
	double& operator[](int index);
	int getSize();
	void setSize(int size);
	void add(double digit);
	friend bool operator==(const Svect& left, const Svect& right);
	friend bool operator!=(const Svect& left, const Svect& right);
	friend istream& operator>>(istream& id, Svect& arg);
	friend ostream& operator<<(ostream& od, Svect& arg);
};