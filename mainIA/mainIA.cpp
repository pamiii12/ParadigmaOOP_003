#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varIbu = new ibu("Dini");
	ibu* varIbu2 = new ibu("Novi");
	anak* varAnak = new anak("tono");
	anak* varAnak2 = new anak("rini");
	anak* varAnak3 = new anak("dewi");

	varIbu->tambahAnak(varAnak);
	varIbu->tambahAnak(varAnak2);
	varIbu2->tambahAnak(varAnak3);
	varIbu2->tambahAnak(varAnak);

	varIbu->cetakAnak();
	varIbu->cetakAnak();

	delete varIbu;
	delete varIbu2;
	delete varAnak;
	delete varAnak2;
	delete varAnak3;

	return 0;

}