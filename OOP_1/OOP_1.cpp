#include <iostream>
using namespace std;

class Mahasiswa {
public:											//akses modifier
	int nim;
	string nama;
	void tampil() {								//prosedure / fungsi			
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
	void inputMK() {							//prosedure / fungsi

		cout << "\nMasukkan jumlah SKS = ";
		cin >> sks;
		cout << "\nMasukkan Kode MK = ";
		cin >> kode;
		cout << "\nMasukkan Nama MK = ";
		cin >> namaMK;
	}
			
	void tampilMK() {							//prosedure / fungsi
		cout << "\nJumlah sks = " << sks;
		cout << "\nKode MK = " << kode;
		cout << "\nNama MK = " << namaMK << endl;
	}
};


int main() {
	Mahasiswa mhs;					//objek
	MataKuliah MK;					//objek

	cout << "\nMasukkan NIM = ";
	cin >> mhs.nim;
	cout << "\nMasukkan Nama = ";
	cin >> mhs.nama;
	
	mhs.tampil();					//tampilakannya harus urut
	MK.inputMK();
	MK.tampilMK();
	
	
	
}