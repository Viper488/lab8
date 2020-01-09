#include "Vect.h"

Vect::Vect() {
	digits = NULL;
	size = 0;
}
Vect::Vect(double* table, int size) {
	this->size = size;
	digits = new double[this->size];
	for (int i = 0; i < this->size; i++) {
		digits[i] = table[i];
	}
}
Vect::Vect(int size) {
	this->size = size;
	digits = new double[this->size];
}
Vect::Vect(const Vect& original){
	this->size = original.size;
	digits = new double[this->size];
	for (int i = 0; i < this->size; i++) {
		digits[i] = original.digits[i];
	}
}
Vect::~Vect() {
	
}

Vect& Vect::operator=(const Vect& right) {
	if (&right != this) {
		this->size = right.size;
		digits = new double[this->size];
		for (int i = 0; i < this->size; i++) {
			digits[i] = right.digits[i];
		}
	}
	return *this;
}

double& Vect::operator[](int index) {
	return digits[index];
}

int Vect::getSize() {
	return size;
}
void Vect::setSize(int size) {
	Vect temp;
	temp.size = this->size;
	temp.digits = new double[this->size];
	for (int i = 0; i < this->size; i++) {
		temp.digits[i] = digits[i];
	}
	this->~Vect();
	this->size = size;
	this->digits = new double[this->size];
	for (int i = 0; i < this->size; i++) {
		if (i < temp.getSize()) {
			this->digits[i] = temp.digits[i];
		}
		else {
			this->digits[i] = 0;
		}
	}
	temp.~Vect();
}
void Vect::add(double digit) {
	Vect temp;
	temp.size = this->size;
	temp.digits = new double[this->size];
	for (int i = 0; i < this->size; i++) {
		temp.digits[i] = digits[i];
	}
	this->~Vect();
	this->size = temp.size + 1;
	this->digits = new double[this->size];
	for (int i = 0; i < (this->size - 1); i++) {
		this->digits[i] = temp.digits[i];
	}
	this->digits[this->size - 1] = digit;
	temp.~Vect();
}
bool operator==(const Vect& left, const Vect& right) {
	if (left.size != right.size) {
		return false;
	}
	else {
		for (int i = 0; i < left.size; i++) {
			if (left.digits[i] != right.digits[i])
				return false;
		}
		return true;
	}
}
bool operator!=(const Vect& left, const Vect& right) {
	if (&left != &right && left.size == right.size) {
		for (int i = 0; i < left.size; i++) {
			if (left.digits[i] != right.digits[i])
				return true;
		}
		return false;
	}
	else
		return false;
}
istream& operator>>(istream& id, Vect& arg) {
	int size = 0;
	id >> size;
	arg.setSize(size);
	cout << " [ ";
	for (int i = 0; i < arg.getSize(); i++) {
		id >> arg.digits[i];
	}
	cout << " ]" << endl;
	return id;
}

ostream& operator<<(ostream& od, const Vect& arg) {
	od << " [ ";
	for (int i = 0; i < arg.size; i++) {
		od << arg.digits[i] << " ";
	}
	od << "]" << endl;
	return od;
}