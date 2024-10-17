#include <iostream>
using namespace std;

int esVacio(char x[]){
	return x[0] == '\0';
}

int main(){
	char a[20] = { 0 };
	char b[20] = {"Hola como estas"};
	char c[20] = { "\0 que pasa ahora? "};
	
	cout << " a = " << a << " es vacia? " << esVacio(a) << endl;
	cout << " b = " << b << " es vacia? " << esVacio(b) << endl;
	cout << " c = "	<< c << " es vacia? " << esVacio(c) << endl;
	return 0;
}


