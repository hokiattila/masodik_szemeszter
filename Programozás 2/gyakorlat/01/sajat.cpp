#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include<fstream>
#define SETW 20

using namespace std;

struct eredmeny {
	unsigned short szakitas=0, lokes = 0, rajtszam = 0, suly = 0;
	string nev;
};

int main(int argc, char** argv) {
	srand((unsigned int)time(NULL));
	eredmeny eredmenyek[15];
	unsigned short int _400kgfelett = 0;
	unsigned short int _100kgalatt = 0;

	ifstream input("nevek.txt");
	unsigned short versenyzo = 0;

	if (input.fail()) { cerr << "Hiba tortent a fajl megnyitasa soran.\n"; system("pause"); exit(1); }
	while (input.good()) {
		input >> eredmenyek[versenyzo].szakitas;
		input >> eredmenyek[versenyzo].lokes;
		getline(input, eredmenyek[versenyzo].nev);
		versenyzo++;
	}
	input.close();
	cout << "Vegul " << versenyzo << " versenyzo indult a versenyen.\n";
	for (unsigned short i = 0; i < versenyzo; i++) {
		unsigned short rajtszam = rand() % 90 + 10;
		eredmenyek[i].rajtszam = rajtszam;
		do {
			cout << "Adja meg a" << eredmenyek[i].nev << " jatekos testsulyat:\n";
			cin >> eredmenyek[i].suly;
			if (eredmenyek[i].suly < 95 || eredmenyek[i].suly > 150) cout << "A testsulynak 95-150 kg kozott kell lennie. Kerem ismetelje meg.\n";
		} while (eredmenyek[i].suly < 95 || eredmenyek[i].suly > 150);

		if (eredmenyek[i].lokes + eredmenyek[i].szakitas > 400) _400kgfelett++;
		if (eredmenyek[i].suly < 100) _100kgalatt++;
	}

	cout << setw(SETW) << "Szakitas:\t" << "Lokes:\t" << "Nev:\t\t" << "Rajtszam:\t" << "Suly:\t" << "Osszesitett: \n";
	for (unsigned short i = 0; i < versenyzo; i++) cout << setw(SETW) << eredmenyek[i].szakitas << "\t" << eredmenyek[i].lokes << "\t" << eredmenyek[i].nev << "\t\t" << eredmenyek[i].rajtszam << "\t" << eredmenyek[i].suly << "\t" << eredmenyek[i].lokes
		+ eredmenyek[i].szakitas << "\n";
	
	cout << _400kgfelett << " versenyzo emelt 400 kg felett \n";
	cout << _100kgalatt << " versenyzo nem eri el a 100kg-ot\n";

	ofstream output("eredmeny.txt");
	output << setw(SETW) << "Szakitas:\t" << "Lokes:\t" << "Nev:\t\t" << "Rajtszam:\t" << "Suly:\t" << "Osszesitett: \n";
	for (unsigned short i = 0; i < versenyzo; i++) output << setw(SETW) << eredmenyek[i].szakitas << "\t" << eredmenyek[i].lokes << "\t" << eredmenyek[i].nev << "\t\t" << eredmenyek[i].rajtszam << "\t" << eredmenyek[i].suly << "\t" << eredmenyek[i].lokes
		+ eredmenyek[i].szakitas << "\n";
	cout << "A lista elkeszult\n";
	output.close();

	system("pause");
	return 0;
}