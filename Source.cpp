#include <iostream>
#include <conio.h>

using namespace std;

// Fungsi Menghitung Luas
double HitungLuas(double P, double L)
{
	double Luas;
	Luas = P * L;
	return Luas;
}

//Fungsi Menghitung Keliling
double HitungKeliling(double P, double L)
{
	double Keliling;
	Keliling = (2 * P) + (2 * L);
	return Keliling;
}

//Fungsi Untuk Menampilkan Hasil Luas dan Keliling
void Tampilkan_Hasil(double P, double L)
{
	cout << "Luas       = " << HitungLuas(P, L) << endl;
	cout << "Keliling   = " << HitungKeliling(P, L) << endl;
}

void CetakBaris()
{
	for (size_t i = 0; i <= 45; i++)
	{
		cout << "-";
	}
	cout << endl;
}

int main()
{
	double Panjang, Lebar;

	CetakBaris(); cout << "MENGHITUNG LUAS DAN KELILING PERSEGI PANJANG" << endl; CetakBaris();
	cout << "Masukkan Nilai Panjang  : "; cin >> Panjang;
	cout << "Masukkan Nilai Lebar    : "; cin >> Lebar; 
	cout << endl;

	Tampilkan_Hasil(Panjang, Lebar);

	_getch();
	return 0;
}