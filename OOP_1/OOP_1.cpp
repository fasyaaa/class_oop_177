#include <iostream>
using namespace std;

class Mahasiswa {
public:											//akses modifier
	int nim;
	string nama;
	void tampil() {								
		cout << "\nNIM = " << nim;
		cout << "\nNama = " << nama;
	}
};

class MataKuliah {
private:										//akses modifier
	int sks;
	string kode;
	string namaMK;	
public:											//akses modifier
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
	Mahasiswa mhs;					//objek
	MataKuliah MK;					//objek

	cout << "Masukkan NIM = ";
	cin >> mhs.nim;
	cout << "Masukkan Nama = ";
	cin >> mhs.nama;
	
	mhs.tampil();
	MK.tampilMK();
	MK.inputMK();
	
}