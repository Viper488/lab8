#include "Vect3d.h"
void Vect3d::length() {
	if (size > 3) {
		setSize(3);
	}
	size = 3;
}
void Vect3d::normal() {
	double v = sqrt(digits[0] * digits[0] + digits[1] * digits[1] + digits[2] * digits[2]);
	if (v == 0) {
		v = 1;
	}
	for (int i = 0; i < 3; i++) {
		digits[i] = digits[i] / v;
	}
}
Vect3d::Vect3d() :Vect() {
}
Vect3d::Vect3d(double* table, int size) : Vect(table, size) {
	length();
	normal();
}
Vect3d::Vect3d(int size) : Vect(size) {
}
Vect3d::Vect3d(Vect & original) : Vect(original) {
	length();
	normal();
}
Vect3d::~Vect3d() {
;
}
Vect& Vect3d::operator=(Vect & right) {
	Vect& temp = Vect::operator=(right);
	temp.setSize(3);
	length();
	normal();
	return temp;
}

double& Vect3d::operator[](int index) {
	double& temp = Vect::operator[](index);

	return temp;
}

int Vect3d::getSize() {
	return Vect::getSize();
}
void Vect3d::setSize(int size) {
	Vect::setSize(size);
	length();
}
void Vect3d::add(double digit) {
	Vect::add(digit);
	length();
	normal();
}

bool operator==(const Vect3d& left, const Vect3d& right) {
	return operator==(static_cast<Vect>(left), static_cast<Vect>(right));
}
bool operator!=(const Vect3d & left, const Vect3d & right) {
	return operator!=(static_cast<Vect>(left), static_cast<Vect>(right));
}

istream& operator>>(istream & id, Vect3d& arg) {
	operator>>(id, static_cast<Vect&>(arg));
	arg.length();
	arg.normal();
	return id;
}

ostream& operator<<(ostream & od, Vect3d& arg) {
	arg.length();
	arg.normal();
	return operator<<(od, static_cast<Vect>(arg));
}