#include "Svect3d.h"
void Svect3d::sorts(){
	Svect::sorts();
}
void Svect3d::length(){
	Vect3d::length();
}
void Svect3d::normal(){
	Vect3d::normal();
}
Svect3d::Svect3d() :Svect() {
	length();
	normal();
	sorts();
}
Svect3d::Svect3d(double* table, int size) : Svect(table, size) {
	length();
	normal();
	sorts();
}
Svect3d::Svect3d(int size) : Svect(size) {
}
Svect3d::Svect3d(Svect& original) : Svect(original) {
	length();
	normal();
	sorts();
}
Svect3d::~Svect3d() {
	;
}
Svect& Svect3d::operator=(Svect& right) {
	Svect& temp = Svect::operator=(right);
	length();
	normal();
	sorts();
	return temp;
}

double& Svect3d::operator[](int index) {
	double& temp = Svect::operator[](index);

	return temp;
}

int Svect3d::getSize() {
	return Svect::getSize();
}
void Svect3d::setSize(int size) {
	Svect::setSize(size);
	length();
	normal();
	sorts();
}
void Svect3d::add(double digit) {
	Svect::add(digit);
	length();
	normal();
	sorts();
}

bool operator==(const Svect3d& left, const Svect3d& right) {
	return operator==(static_cast<Svect>(left), static_cast<Svect>(right));
}
bool operator!=(const Svect3d & left, const Svect3d & right) {
	return operator!=(static_cast<Svect>(left), static_cast<Svect>(right));
}

istream& operator>>(istream& id, Svect3d& arg) {
	operator>>(id, static_cast<Svect&>(arg));
	arg.length();
	arg.normal();
	arg.sorts();
	return id;
}

ostream& operator<<(ostream& od, Svect3d& arg) {
	return operator<<(od, static_cast<Svect&>(arg));
}