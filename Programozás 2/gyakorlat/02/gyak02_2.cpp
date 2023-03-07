#include<iostream>
using namespace std;
int main(){
	cout<<"*** Hagyomanyos(statikus) memoriakezeles***"<<endl;//statikus (hagyományos) tömbök használata
	int jegy[5] = { 1,2,3 };// 1, 2, 3,0,0
	cout<<"int jegy[5]={1,2,3}; tombmerete="<<sizeof(jegy) <<endl;//a sizeofmegadja a tömb méretét => elemeinek számát*4 bájt(int)
	cout<<"jegy[0]="<<jegy[0] <<endl;   //hivatkozás a 0 indexû elemre 
	cout<<"jegy[2]="<<*(jegy + 2) <<endl; //a jegy kezdõcímétõl(). elemtõl lépjünk kettõt, ez a 2-es indexû elem
	cout<<"***  DINAMIKUS MEMORIA KEZELES  ***"<<endl;
	int*szam;//mutató a dinamikus változóhoz, ez a verembe kerül
	szam = new int; //dinamikus változó definíció
	if(szam == NULL) //ha NULL érték kerül a változóba nem egy memória cím
	{
		cerr<<"hiba:kevesa memoria";
		system("pause");
		return 1;
	} //a memóriacíme belekerül iptr-be
*szam = 20;//értékadás a dinamikusváltozónak
cout<<"szam="<<*szam <<endl;
delete szam;//a dinamikus változó felszabadítása, //dinamikus tömb használata, a halomban kerül tárolásra
int db;

cout <<"***  dinamikus tomb hasznalata  ***"<<endl;

cout <<"a dinamikus tomb elemszama: n=";

cin >>db;
int*tmb= new int[db]; //db elemû dinamikus int típusú tömb definíció

if(tmb== NULL) { //a tömb neve 'tmb' egy mutató típusú váltózó, azt a memóriacímet jelenti a dinamikus memóriában, ahol a tömb kezdõdik a memóriában{//az elemszám változó is lehet, tehát nem kell ismerni a programírásakor.
	cout<<"hiba: kevesa memoria";
	system("pause");
	return 1;
}
	cout << "sizeof(tmb): a mutatomerete= " << sizeof(tmb) << endl;//ez nem a tömb, hanem a mutató méretét adja meg
	*tmb= 15; //értékadás a din. tömb0 indexû elemének 
	tmb[0] = 15;
	tmb[3] = 10; //értékadás a din. tömb 3 indexû elemének
	cout<<"tmb[0]="<<tmb[0] <<endl;
	*(tmb+ 1) = 20; //értékadás a din. tömb 1 indexû elemének
	cout<<"tmb[1]="<<*(tmb+ 1) <<endl;
	delete[]tmb;//a dinamikus tömb felszabadítása, fontos [] használata, példa -döntsük el, hogy van-e értelme az alábbi programrészletnek hibás-e?, a tomb most statikus tomb 
	int tomb[5] = { 1,2,3,4,5 };
	int i =  3;
	cout<<tomb[i] <<endl; // *(tomb+i)
	cout<<i[tomb] <<endl;//*( i+tomb)
	cout<<&tomb[i] <<endl; 
	cout<<&i[tomb] <<endl; 
	cout<<"tmb[3]="<<*(tmb+ 3) <<endl;//hiba, mert már felszabadítottuk a memóriát


system("pause");
return 0;
}

