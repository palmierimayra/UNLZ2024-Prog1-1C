#include <iostream> 
#include <string>

using namespace std;

//operadores relacionales. 

const int VALOR = 10;
    
int main() { 

    //Inicialización de Variables
    bool resultado = false; 

    cout <<resultado  << endl;

    int ingresoPorTeclado = 0;
    cout <<"Ingrese un número: " << endl;

    cin >> ingresoPorTeclado;
    resultado = ingresoPorTeclado == VALOR;

    cout << resultado;

}
