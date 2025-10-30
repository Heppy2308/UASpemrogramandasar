#include <iostream>
#include <string>
using namespace std;

//menghitung pendapatan parkir
int main() {
	int motor, mobil, jamMasuk, jamKeluar;
	double totalPendapatanParkir;

	//masukkan data inputan
	cout << "Masukkan jumlah motor : ";
	cin >> motor;
	cout << "Masukkan jumlah mobil : ";
	cin >> mobil;
	cout << "Input jam masuk(format 24 jam) : ";
	cin >> jamMasuk;
	cout << "Input jam keluar (format 24 jam): ";
	cin >> jamKeluar;

	// Cek input
	if (jamMasuk < 0 || jamMasuk > 23 || jamKeluar < 0 || jamKeluar > 23) {
		cout << "Jam masuk atau keluar tidak valid!" << endl;
		return 1;
	}


	// Hitung lamanya parkir
	int jamParkir;
	if (jamKeluar >= jamMasuk) {
		jamParkir = jamKeluar - jamMasuk;
	} else {
		jamParkir = (24 - jamMasuk) + jamKeluar;
	}
	
	// Hitung total pendapatan
	int totalPendapatan = (motor * 2000 * jamParkir) + (mobil * 5000 * jamParkir);
	cout << "Total pendapatan parkir: Rp " << totalPendapatan << " (" << jamParkir << " jam)" << endl;
	return 0;
}