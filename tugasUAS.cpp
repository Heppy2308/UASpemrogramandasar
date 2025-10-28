#include <iostream>
#include <string>
using namespace std;

int main() {
    string kata, balik = "";

    cout << "Check Kata" << endl;
    cout << "Input Kata : ";
    cin >> kata;

    // Membalik kata
    for (int i = kata.length() - 1; i >= 0; i--) {
        balik += kata[i];
    }

    // Mengecek apakah sama
    if (kata == balik) {
        cout << "Hasil : True" << endl;
    }
    else {
        cout << "Hasil : False" << endl;
    }

    return 0;
}