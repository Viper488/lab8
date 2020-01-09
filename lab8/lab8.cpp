// lab8.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "Vect.h"
#include "Svect.h"
#include "Vect3d.h"
#include "Svect3d.h"

int main() {
	cout << "VECT" << endl << endl;
	//test klasy vect
	int i;
	Vect v1(10);
	for (i = 0; i < v1.getSize(); i++) v1[i] = i;
	Vect v2(v1), v3;
	v3 = v2;
	v3[2] = 5.5;
	cout << "v1 = " << v1 << endl << "v2 = " << v2
		<< endl << "v3 = " << v3 << endl;
	if (v1 == v2) cout << "v1 == v2" << endl;
	if (v1 != v3) cout << "v1 != v3" << endl;
	v1.setSize(15);
	v1.add(34.56);
	cout << "podaj v2 = ";
	cin >> v2;
	cout << "v1 = " << v1 << endl << "v2 = " << v2 << endl;
	cout << "SVECT" << endl << endl;
	//test klasy svect
	Svect sv1(10);
	cout << "Romiar: " << sv1.getSize() << endl;
	for (i = 0; i < sv1.getSize(); i++) { sv1[i] = 0; }
	Svect sv2(sv1);
	Svect sv3(sv1);
	cout << "sv1 = " << sv1 << endl << "sv2 = " << sv2
		<< endl << "sv3 = " << sv3 << endl;
	if (sv1 == sv2) cout << "sv1 == sv2" << endl;
	if (sv1 != sv3) cout << "sv1 != sv3" << endl;
	v1[0] = sv1[7] = sv2[3] = sv3[4] = 4.5;
	cout << "v1 = " << v1 << endl << "sv1 = " << sv1 << endl << "sv2 = " << sv2 << endl << "sv3 = " << sv3 << endl;
	sv3 = v2;
	sv1.setSize(20);
	sv1.add(-12.45);
	cout << "podaj sv2 = ";
	cin >> sv2;
	cout << "sv1 = " << sv1 << endl << "sv2 = " << sv2 << endl << "sv3 = " << sv3 << endl;
	cout << "VECT 3D" << endl << endl;
	//test klasy Vect3d
	Vect3d v3d_1(10);
	cout << "Romiar: " << v3d_1.getSize() << endl;
	for (i = 0; i < sv1.getSize(); i++) { v3d_1[i] = 5; }
	Vect3d v3d_2(v3d_1);
	Vect3d v3d_3(v3d_1);
	cout << "v3d_1 = " << v3d_1 << endl << "v3d_2 = " << v3d_2
		<< endl << "v3d_3 = " << v3d_3 << endl;
	if (v3d_1 == v3d_2) cout << "v3d_1 == v3d_2" << endl;
	if (v3d_1 != v3d_3) cout << "v3d_1 != v3d_3" << endl;
	v1[0] = v3d_1[7] = v3d_2[3] = v3d_3[4] = 4.5;
	cout << "v1 = " << v1 << endl << "v3d_1 = " << v3d_1 << endl << "v3d_2 = " << v3d_2 << endl << "v3d_3 = " << v3d_3 << endl;
	cout << "1" << endl;
	v3d_3 = v2;
	cout << "2" << endl;
	v3d_1.setSize(20);
	cout << "3" << endl;
	v3d_1.add(-12.45);
	cout << "4" << endl;
	cout << "podaj v3d_2 = ";
	cin >> v3d_2;
	cout << "v3d_1 = " << v3d_1 << endl << "v3d_2 = " << v3d_2 << endl << "v3d_3 = " << v3d_3 << endl;
	cout << "SVECT 3D" << endl << endl;
	//test klasy Svect3d
	Svect3d sv3d_1(10);
	cout << "Romiar: " << sv3d_1.getSize() << endl;
	for (i = 0; i < sv1.getSize(); i++) { sv3d_1[i] = 1; }
	Svect3d sv3d_2(sv3d_1);
	Svect3d sv3d_3(sv3d_1);
	cout << "sv3d_1 = " << sv3d_1 << endl << "sv3d_2 = " << sv3d_2<< endl << "sv3d_3 = " << sv3d_3 << endl;
	if (sv3d_1 == sv3d_2) cout << "sv3d_1 == sv3d_2" << endl;
	if (sv3d_1 != sv3d_3) cout << "sv3d_1 != sv3d_3" << endl;
	v1[0] = sv3d_1[7] = sv3d_2[3] = sv3d_3[4] = 4.5;
	cout << "v1 = " << v1 << endl << "sv3d_1 = " << sv3d_1 << endl
		<< "sv3d2 = " << sv3d_2 << endl << "sv3d3 = " << sv3d_3 << endl;
	sv3d_3 = sv2;
	sv3d_1.setSize(20);
	sv3d_1.add(-12.45);
	cout << "podaj sv3d_2 = ";
	cin >> sv3d_2;
	cout << "sv3d_1 = " << sv3d_1 << endl << "sv3d_2 = " << sv3d_2 << endl << "sv3d_3 = " << sv3d_3 << endl;
	return 0;
}