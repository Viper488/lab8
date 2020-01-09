#pragma once
#include "Vect3d.h"
#include "Svect.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <stdlib.h>
#include <algorithm>
#include <functional>
class Svect3d:private Svect,private Vect3d
{
public:
	Svect3d();
	~Svect3d();
	Svect3d(double* table, int size);
	Svect3d(int size);
	Svect3d(Svect& original);
	Svect& operator=(Svect& right);
	double& operator[](int index);
	int getSize();
	void setSize(int size);
	void add(double digit);
	void length();
	void normal();
	void sorts();

	friend bool operator==(const Svect3d& left, const Svect3d& right);
	friend bool operator!=(const Svect3d& left, const Svect3d& right);
	friend istream& operator>>(istream& id, Svect3d& arg);
	friend ostream& operator<<(ostream& od, Svect3d& arg);
};

