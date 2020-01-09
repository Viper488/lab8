#include "Svect.h"

int compare(const void* a, const void* b)
{
	if (*(double*)a < *(double*)b) return -1;
	if (*(double*)a == *(double*)b) return 0;
	if (*(double*)a > * (double*)b) return 1;
}

void Svect::sorts() {
	sort(digits, digits + size);
}

Svect::Svect():Vect(){
}
Svect::Svect(double* table, int size) :Vect(table, size){
	sorts();
}
Svect::Svect(int size) :Vect(size){
}
Svect::Svect(Vect& original):Vect(original){
	sorts();
}
Svect::~Svect() {
	size = 0;
	free(digits);
}
Vect& Svect::operator=(Vect& right){
	Vect& temp = Vect::operator=(right);
	sorts();
	return temp;
}

double& Svect::operator[](int index) {
	double& temp = Vect::operator[](index);
	
	return temp;
}

int Svect::getSize() {
	return Vect::getSize();
}
void Svect::setSize(int size) {
	Vect::setSize(size);
}
void Svect::add(double digit) {
	Vect::add(digit);
}

bool operator==(const Svect& left, const Svect& right) {
	return operator==(static_cast<Vect>(left), static_cast<Vect>(right));
}
bool operator!=(const Svect & left, const Svect & right) {
	return operator!=(static_cast<Vect>(left), static_cast<Vect>(right));
}

istream& operator>>(istream& id, Svect& arg) {
	operator>>(id, static_cast<Vect&>(arg));
	arg.sorts();
	return id;
}

ostream& operator<<(ostream & od, Svect & arg) {
	arg.sorts();
	return operator<<(od, static_cast<Vect>(arg));
}