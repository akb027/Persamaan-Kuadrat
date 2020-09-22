#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// Membuat variabel
	float a, b, c, hasil, hasill;
	char tanda;
	
	// Title
	cout << "====+ PEMFAKTORAN PERSAMAAN KUADRAT +====" << endl;
	
	// Input data yang dibutuhkan
	cout << "Ax2 + Bx + C = 0" << endl;
	cout << "Masukkan A :";
	cin >> a;

	cout << "Masukkan B :";
	cin >> b;
	cout << "Masukkan C :";
	cin >> c;
	
	// Menghitung
	hasil = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	hasill = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	// Menampilkan hasil perhitungan
	cout << "Nilai X1 = " << hasil << endl;
	cout << "Nilai X2 = " << hasill << endl;
	
	return 0;
}
