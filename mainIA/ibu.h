#ifndef IBU_H
#define IBU_H

class ibu {
public:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "Ibu \"" << nama << "\" ada";
	}
	~ibu() {
		cout << "Ibu \"" << nama << "\" tidak ada";
	}
	void tambahAnak(anak*);
	void cetakAnak();
};

void ibu::tambahAnak(anak* pAnak) {
	daftar_anak.push_back(pAnak);
}

void ibu::cetakAnak() {
	cout << "Daftar Anaka Dari Ibu \"" << this->nama << "\":\n";
	for (auto& a : daftar_anak) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

#endif