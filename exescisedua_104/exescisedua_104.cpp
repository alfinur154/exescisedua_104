#include <iostream>
#include <vector>
using namespace std;

class Penerbit; 
class Pengarang {
public:
	string nama;
	vector<Penerbit*> daftar_Penerbit;
	void penerbit(string pNama);
	~Pengarang() {
		cout << "Pengarang \"" << nama << "\" tidak ada\n";
	}
	void tambahPenerbit(Penerbit*);
	void cetakpenerbit();

};

class Pengarang; {
public:
	string nama;
	vector<Pengarang*> daftar_Pengarang;

	Pengarang(string pNama) :nama(pNama) {
		cout << "pengarang \"" << nama << "\" ada\n";
	}
	~engarang() {
		cout << "pengarang \"" << nama << "\" tidak ada\n";
	}

	void  tambahPengarang(pengarang*);
	void cetakPengarang();

};

class buku; {
public:
	string nama;
	vector<pengarang*> nama_buku;

	buku(string pNama) :nama(pNama) {
		cout << "buku \"" << nama << "\" tidak ada\n";
	}
	~buku() {
		cout << "buku \"" << nama << "\" tidak ada\";
	}

	void cetakbuku();

};

void pengarang::tambahPenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit);
}

void pengarang::cetakpenerbit() {
	cout << "pengarang  mencetak penerbit \"" << this->nama << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
	pPengarang->tambahPenerbit(this);
}

void penerbit::cetakPengarang() {
	cout << "Daftar Pengarang yang mencetak penerbit\"" << this->nama << "\":\n";
	for (auto& a : daftar_Pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;

void penerbit::cetakbuku() {
	cout << "Daftar Buku yang dicetak penerbit\"" << this->nama << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a : a->nama << "\n";
	}
	cout << endl;

int main() {
	pengarang* varPengarang1 = new pengarang("irfan")

}
