//
//  main.cpp
//  gyak02
//
//  Created by 4-11-1-hallgato on 2023. 03. 08..
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int tomb[15] = {7,34,56,4,57,45,67,6,43,32,33,99,33,100,11};
    cout << "Pontok" << endl;
    
    int i = 0;
    for(i=0; i <15; i++)
        cout << i+1 << ". hallgato: " << tomb[i] << endl;
    
    
    // Összegzés tétele
    int sum = 0;
    for(i=0; i <15; i++)
        sum += tomb[i];
    
    cout << "A csoport atlaga: " << (float) sum / i << endl;
    
    
    // Eldöntés tétele
    i = 0;
    while(i < 15 && tomb[i] != 100) {
        i++;
    }
    
    if(i < 15)
        cout << "Volt 100 pontos dolgozat" << endl;
    else
        cout << "Nem volt 100 pontosdolgozat" << endl;
    
    
    
    // Kiválasztás tétele
    i = 0;
    while(tomb[i] != 57)
        i++;
    cout << "Az 57 pontot elert hallgato sorszama: " << i+1 << endl;
    
    
    
    // Lineáris keresés
    int szam;
    cout << "Adja meg a keresett szamot: " << endl;
    cin >> szam;
    i = 0;
    
    while(i<15 && tomb[i] != szam)
        i++;
    if(i < 15)
        cout << "A keresett pontszamot " << i+1 << " .hallgato erte el." << endl;
    else
        cout << "Nincs a keresett szam a tombben" << endl;
    
    
    // Megszámlálás tétele
    int db50=0;
    for(i = 0; i < 15; i++)
        if(tomb[i] > 50) db50++;
    cout << "A megfeleltek szama: " << db50 << endl;
    
    
    
    // Kiválogatás tétele
    int db4=0, c[15];
    for(i=0; i<15; i++)
        if(tomb[i] > 74)
            c[db4++] = i+1;
        
    cout << "A 4-est elero hallgatok sorszamai: " << endl;
    for(i=0; i< db4; i++)
        cout << c[i] << " " << endl;
    
    
    // Minimum kiválasztás tétele
    int min = 0;
    for(i=1; i<15; i++)
        if(tomb[i]<tomb[min])
            min = i;
    
    cout << "A tomb leggyengebb eredmenye: " << tomb[min] << ", sorszama" << min+1 << endl;
    
    
    return 0;
}
