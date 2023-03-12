//
//  main.cpp
//  gyak02_02
//
//  Created by 4-11-1-hallgato on 2023. 03. 08..
//

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct kosar {
    string nev;
    int magassag;
    int pont;
};

int main(int argc, const char * argv[]) {
    int letszam;
    
    do {
        cout << "Adja meg a letszamot 5-12 kozott" << endl;
        cin >> letszam;
    } while (letszam > 12 || letszam < 5);
    
    kosar csapat[letszam];
    srand((unsigned int) time(NULL));
    
    for(int i = 0; i < letszam; i++) {
        cout << "Adja meg az " << i+1 << ".jatekos nevet: " << endl;
        cin >> csapat[i].nev;
        csapat[i].magassag = rand() % 51 + 170;
        csapat[i].pont = rand() % 101;
    }
    
    cout << "\tnev" << "\tmag" << "\tpont" << endl;
    for(int i = 0; i< letszam; i++)
        cout << "\t" << csapat[i].nev << "\t" << csapat[i].magassag << "\t" << csapat[i].pont << endl;
    
    // átlag
    int sum = 0;
    for(int i=0; i<letszam; i++)
        sum += csapat[i].pont;
    cout << "A csapat pontatlaga: " << sum/letszam;
    
    return 0;
}
