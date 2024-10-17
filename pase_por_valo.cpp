#include <iostream>
using namespace std;

void incremento(int x){
	cout << "Antes de la ejecucion del incremento(dentro de la funcion) " << x << endl;
	x++;
	cout << "Despues del incremento(dentro de la funcion)" << x << endl;
}

int main(){
	int x = 5;
	cout << "Antes de incrementar x = " << x << endl;
	incremento(x);
	cout << "Despues de incrementar x = " << x << endl;
	
	return 0;
}

//Pasa esto porque, por mas que sean iguales, existen en ambitos diferentes.
