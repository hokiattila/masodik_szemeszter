#include<iostream>
#include<vector>
#include<string>

using namespace std;

void print_vector(vector<int> vektor) {
	for (int i = 0; i < vektor.size(); i++) {
		cout << vektor.at(i) << " ";
	}
}

int main(int argc, char** argv) {

	int f = 10;
	int* mut;
	int& fi = f;
	mut = &f;
	cout << "f=" << f << " fi=" << fi << " *mut=" << *mut << endl;
	fi = 20;
	cout << "f=" << f << " fi=" << fi << " *mut=" << *mut << endl;
	cout << &f << " " << &fi << " " << mut << " " << &mut << endl;
	cout << "-----------------------------------------------------" << endl;
	
	vector <int> jegyek(3);
	char bet;
	int szam;
	int i;
	for (i = 0; i < 3; i++) {
		do {
			cout << "Adja meg az " << i + 1 << ". tanulo jegyet(1-5) " << endl;
			cin >> jegyek[i];
		} while (jegyek[i] < 1 || jegyek[i] > 5);
	}

	cout << "Szeretne meg jegyet felvenni az osztalyba? (i => igen)" << endl;
	cin >> bet;
	if (bet == 'i') {
		do {
			cout << "Adja meg az " << i + 1 << ". tanulo jegyet (1-5) " << endl;
			cin >> szam;
			jegyek.push_back(szam);
			cout << "akar meg jegyet felvenni: (i => igen)" << endl;
			cin >> bet;
			i++;
		} while (bet == 'i');
	}


	cout << "Jegyek szama " << jegyek.size() << endl;
	cout << "Az osztaly jegyei: " << endl;
	print_vector(jegyek);
	cout << endl;

	jegyek.pop_back();
	cout << " \nAz osztaly jegyei az utolso elem torlese utan: " << endl;
	print_vector(jegyek);

	
	

	system("pause");
	return 0;
}