#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {								
		cout << "NIM = " << nim;
		cout << "\nNama = " << nama;
	}
};

class MataKuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMK() {

		cout << "\nMasukkan jumlah SKS = ";
		cin >> sks;
		cout << "\nMasukkan Kode MK = ";
		cin >> kode;
		cout << "\nMasukkan Nama MK = ";
		cin >> namaMK;
	}

	void tampilMK() {
		cout << "\nJumlah sks = " << sks;
		cout << "\nKode MK = " << kode;
		cout << "\nNama MK = " << namaMK << endl;
	}
};


int main() {

}