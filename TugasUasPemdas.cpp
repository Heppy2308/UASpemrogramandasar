#include <iostream>
#include <string>
using namespace std;

//menghitung gaji karyawan
int main() {
	string nama;
	int golongan, jam_kerja;
	double gaji_pokok, uang_lembur;
	long int gaji_total;
	
	//masukkan nama
	cout << "Masukkan nama anda : ";
	getline(cin, nama);

	//masukkan golongan dan cek inputan
	cout << "Masukkan golongan anda (1/2/3): ";
	cin >> golongan;
	if (golongan == 1) {
		gaji_pokok = 25000;
	}
	else if (golongan == 2) {
		gaji_pokok = 35000;
	}
	else if (golongan == 3) {
		gaji_pokok = 50000;
	}
	else {
		cout << "Golongan tidak valid!" << endl;
		return 1;
	}

	//masukkan jam kerja
	cout << "Masukkan jam kerja anda per minggu : ";
	cin >> jam_kerja;

	// Menentukan gaji pokok
	


	//menghitung uang_lembur
	if (jam_kerja > 48) {
		int jam_lembur = jam_kerja - 48;
		uang_lembur = jam_lembur * 10000;
	} else {
		uang_lembur = 0;
	}


	// Menghitung gaji total
	gaji_total = (gaji_pokok * jam_kerja) + uang_lembur;
	
	// Menampilkan hasil
	cout <<  endl;
	cout << "Total Gaji " << nama << " per minggu : Rp. " << gaji_total << endl;
	return 0;
}