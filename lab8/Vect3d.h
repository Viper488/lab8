#pragma once
#include "Vect.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <stdlib.h>
#include <algorithm>
#include <functional>
#include <math.h>
class Vect3d :protected Vect
{
public:
	Vect3d();
	~Vect3d();
	Vect3d(double* table, int size);
	Vect3d(int size);
	Vect3d(Vect& original);
	Vect& operator=(Vect& right);
	double& operator[](int index);
	int getSize();
	void setSize(int size);
	void add(double digit);
	void normal();
	void length();
	friend bool operator==(const Vect3d& left, const Vect3d& right);
	friend bool operator!=(const Vect3d& left, const Vect3d& right);
	friend istream& operator>>(istream& id, Vect3d& arg);
	friend ostream& operator<<(ostream& od, Vect3d& arg);
};