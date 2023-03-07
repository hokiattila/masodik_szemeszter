#include<iostream>
using namespace std;
int main(){
	cout<<"*** Hagyomanyos(statikus) memoriakezeles***"<<endl;//statikus (hagyom�nyos) t�mb�k haszn�lata
	int jegy[5] = { 1,2,3 };// 1, 2, 3,0,0
	cout<<"int jegy[5]={1,2,3}; tombmerete="<<sizeof(jegy) <<endl;//a sizeofmegadja a t�mb m�ret�t => elemeinek sz�m�t*4 b�jt(int)
	cout<<"jegy[0]="<<jegy[0] <<endl;   //hivatkoz�s a 0 index� elemre 
	cout<<"jegy[2]="<<*(jegy + 2) <<endl; //a jegy kezd�c�m�t�l(). elemt�l l�pj�nk kett�t, ez a 2-es index� elem
	cout<<"***  DINAMIKUS MEMORIA KEZELES  ***"<<endl;
	int*szam;//mutat� a dinamikus v�ltoz�hoz, ez a verembe ker�l
	szam = new int; //dinamikus v�ltoz� defin�ci�
	if(szam == NULL) //ha NULL �rt�k ker�l a v�ltoz�ba nem egy mem�ria c�m
	{
		cerr<<"hiba:kevesa memoria";
		system("pause");
		return 1;
	} //a mem�riac�me beleker�l iptr-be
*szam = 20;//�rt�kad�s a dinamikusv�ltoz�nak
cout<<"szam="<<*szam <<endl;
delete szam;//a dinamikus v�ltoz� felszabad�t�sa, //dinamikus t�mb haszn�lata, a halomban ker�l t�rol�sra
int db;

cout <<"***  dinamikus tomb hasznalata  ***"<<endl;

cout <<"a dinamikus tomb elemszama: n=";

cin >>db;
int*tmb= new int[db]; //db elem� dinamikus int t�pus� t�mb defin�ci�

if(tmb== NULL) { //a t�mb neve 'tmb' egy mutat� t�pus� v�lt�z�, azt a mem�riac�met jelenti a dinamikus mem�ri�ban, ahol a t�mb kezd�dik a mem�ri�ban{//az elemsz�m v�ltoz� is lehet, teh�t nem kell ismerni a program�r�sakor.
	cout<<"hiba: kevesa memoria";
	system("pause");
	return 1;
}
	cout << "sizeof(tmb): a mutatomerete= " << sizeof(tmb) << endl;//ez nem a t�mb, hanem a mutat� m�ret�t adja meg
	*tmb= 15; //�rt�kad�s a din. t�mb0 index� elem�nek 
	tmb[0] = 15;
	tmb[3] = 10; //�rt�kad�s a din. t�mb 3 index� elem�nek
	cout<<"tmb[0]="<<tmb[0] <<endl;
	*(tmb+ 1) = 20; //�rt�kad�s a din. t�mb 1 index� elem�nek
	cout<<"tmb[1]="<<*(tmb+ 1) <<endl;
	delete[]tmb;//a dinamikus t�mb felszabad�t�sa, fontos [] haszn�lata, p�lda -d�nts�k el, hogy van-e �rtelme az al�bbi programr�szletnek hib�s-e?, a tomb most statikus tomb 
	int tomb[5] = { 1,2,3,4,5 };
	int i =  3;
	cout<<tomb[i] <<endl; // *(tomb+i)
	cout<<i[tomb] <<endl;//*( i+tomb)
	cout<<&tomb[i] <<endl; 
	cout<<&i[tomb] <<endl; 
	cout<<"tmb[3]="<<*(tmb+ 3) <<endl;//hiba, mert m�r felszabad�tottuk a mem�ri�t


system("pause");
return 0;
}

