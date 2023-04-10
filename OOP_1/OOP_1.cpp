#include <iostream>
using namespace std;

class Mahasiswa {
public:											//akses modifier
	int nim;									//variable
	string nama;								//variable
	void tampil() {								//prosedure / fungsi			
		cout << "\nNIM = " << nim;				//output
		cout << "\nNama = " << nama;
	}
};

class MataKuliah {
private:										//akses modifier
	int sks;									//variable
	string kode;								//variable
	string namaMK;								//variable
public:											//akses modifier
	void inputMK() {							//prosedure / fungsi

		cout << "\nMasukkan jumlah SKS = ";
		cin >> sks;								//input
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