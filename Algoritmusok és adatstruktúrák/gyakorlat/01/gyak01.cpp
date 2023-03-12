#include<iostream>

int main() {
	int a, b =20;
	int* ptr_a = &a;

// register int a 

//	a = 20;


//	a = b
	_asm {
		mov eax, b;
		mov b, eax;
		nop;
	}

	return 0;
}