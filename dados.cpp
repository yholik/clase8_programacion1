#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void dado (int);

int main(){
	
	int n, nRandom;
	srand(time(0));
	
	
	for(int i = 0; i < 3 ; i++){
	nRandom = rand() % 6 + 1; //Crear una funcion con esta parte.
	dado(nRandom);
	}
	
	return 0;
}

void dado(int spot){
	switch(spot){
		case 1: 
		cout << "*-------*" << endl;
		cout << "|       |" << endl;
		cout << "|   .   |" << endl;
		cout << "|       |" << endl;
		cout << "*-------*" << endl;
		break;
		case 2:
		cout << "*-------*" << endl;
		cout << "|       |" << endl;
		cout << "|   ..  |" << endl;
		cout << "|       |" << endl;
		cout << "*-------*" << endl;
		break;
		case 3:
		cout << "*-------*" << endl;
		cout << "|   .   |" << endl;
		cout << "|  . .  |" << endl;
		cout << "|       |" << endl;
		cout << "*-------*" << endl;
		break;
		case 4:
		cout << "*-------*" << endl;
		cout << "|  . .  |" << endl;
		cout << "|       |" << endl;
		cout << "|  . .  |" << endl;
		cout << "*-------*" << endl;
		break;
		case 5:
		cout << "*-------*" << endl;
		cout << "|  . .  |" << endl;
		cout << "|   .   |" << endl;
		cout << "|  . .  |" << endl;
		cout << "*-------*" << endl;
		break;
		case 6:
		cout << "*-------*" << endl;
		cout << "|  . .  |" << endl;
		cout << "|  . .  |" << endl;
		cout << "|  . .  |" << endl;
		cout << "*-------*" << endl;
		break;
		//No te olvides de poner los default, aunque el programa corra. Puede ser motivo de bajar puntos en parciales.
	}
}


