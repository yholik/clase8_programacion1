#include <iostream>
using namespace std;

//Al utilizar & luego del tipo de dato estamos refiriendo al programa la ubicacion donde debe buscar ese valor.
void swap(int& a, int&b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a = 5, b = 19;
	swap(a, b);
	cout << "Valor de variable a " << a << " Valor de variable b " << b << endl;
	return 0;
}
