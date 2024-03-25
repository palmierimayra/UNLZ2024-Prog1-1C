#include <iostream> 
#include <string>

using namespace std;


int main() { 

    int numero = 0;
    int numero2 = 0;
    short numerochico = 0;
    long numerogrande = 0;

    cout << "Ingrese un número" << endl;

    cin >> numero;

    cout << "Ingrese otro número" << endl;

    cin >> numero2;

if (!(numero == numero2) || numero == 0) {
    cout << "Los numeros son iguales" << endl;
} else {
    cout << "Los numeros son distintos" << endl;
};
	
	cout << "El primer numero fue:" << endl;
	cout << numero << endl;
	numero = numero + 4;
	cout << "El nuevo numero es:" << endl;
	cout << numero << endl;
	
    return 0;
}