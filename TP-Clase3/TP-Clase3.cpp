#include <iostream> 
#include <string>

using namespace std;


int main() { 

/*01. Desarrollar un programa que solicite al usuario ingresar tres números enteros y que imprima el mayor de los tres*/

int numero1 = 0;
int numero2 = 0;
int numero3 = 0;

cout << "Ingrese el primer numero" << endl;
cin >> numero1;
cout << "Ingrese el segundo numero" << endl;
cin >> numero2;
cout << "Ingrese el tercer numero" << endl;
cin >> numero3;

bool numeroUnoMayor = (numero1 > numero2 & numero1 > numero3);
bool numeroDosMayor = (numero2 > numero1 & numero2 > numero3);

if (numeroUnoMayor) {
cout << "El mayor de los tres es: " << numero1 << endl;
} else if (numeroDosMayor){
cout << "El mayor de los tres es: " << numero2 << endl;
} else {
cout << "El mayor de los tres es: " << numero3 << endl;
}

cout << endl;

/*02. Desarrollar un programa que solicite el año de nacimiento de una persona, calcular su edad: Si la edad es mayor o igual a 18 años, imprimir "La persona es mayor de edad", de lo contrario, imprimir "La persona es menor de edad".*/

int nacimiento = 0;
int actual = 2024;
int edad = 0;

cout << "Ingrese su año de nacimiento" << endl;
cin >> nacimiento;

edad = actual - nacimiento;

if(edad>=18){
cout << "La persona es mayor de edad" << endl;
cout << endl;
} else if (edad<18){
cout << "La persona es menor de edad" << endl;
cout << endl;
}

/*03. Desarrollar un programa que determine si un año ingresado por el usuario es bisiesto o no. Un año es bisiesto si es divisible por 4 pero no por100, o si es divisible por 400.*/

int numero = 0;

cout << "Ingrese un año para saber si es bisiesto: " << endl;
cin >> numero;

bool esBisiesto = ( numero % 4 == 0 && numero % 100 != 0 || numero % 400 == 0);

if (esBisiesto == true) {
cout << "El año ingresado es bisiesto" << endl;
} else {
cout << "El año ingresado NO es bisiesto" << endl;
}

cout << endl;

/*Desarrollar un programa que solicite al usuario ingresar un número del 1 al 7 y que imprima el día de la semana correspondiente. (Por ejemplo, si el usuario ingresa 1, imprimir "Lunes"; si ingresa 2, imprimir "Martes", etc.) */

int num = 0;

cout << "Ingrese un numero del 1 al 7:" << endl;
cin >> num;

switch (num) {
case 1:
cout << "Lunes" << endl;
break;
case 2:
cout << "Martes" << endl;
break;
case 3:
cout << "Miercoles" << endl;
break;
case 4:
cout << "Jueves" << endl;
break;
case 5:
cout << "Viernes" << endl;
break;
case 6:
cout << "Sabado" << endl;
break;
case 7:
cout << "Domingo" << endl;
break;
default:
break;
}

cout << endl;

/* Desarrollar un programa que solicite al usuario ingresar un carácter y que determine si es una vocal o una consonante.*/

char caracter;

cout << "Ingrese un caracter:" << endl;
cin >> caracter;

switch (caracter) {
case 'a':
cout << "Es una vocal" << endl;
break;
case 'e':
cout << "Es una vocal" << endl;
break;
case 'i':
cout << "Es una vocal" << endl;
break;
case 'o':
cout << "Es una vocal" << endl;
break;
case 'u':
cout << "Es una vocal" << endl;
break;
default:
cout << "Es una consonante" << endl;
break;
}

cout << endl;

/*Desarrollar un programa que simule una calculadora simple. El usuario debe ingresar dos números y luego seleccionar una operación (suma, resta, multiplicación o división). El programa debe realizar la operación seleccionada e imprimir el resultado*/

int num1 = 0;
int num2 = 0;
int opcion = 0;
float resultado = 0;

cout << "Ingrese el primer numero" << endl;
cin >> num1;
cout << "Ingrese el segundo numero" << endl;
cin >> num2;
cout << endl;
cout << "Ingrese una opcion:" << endl;
cout << "1. Suma" << endl;
cout << "2. Resta" << endl;
cout << "3. Multiplicacion" << endl;
cout << "4. Division" << endl;
cin >> opcion;
cout << endl;
cout << "Ingresaste la opcion:" << opcion << endl;

switch (opcion) {
case 1:
resultado = num1 + num2;
cout << "El resultado de la suma es: " << resultado << endl;
break;
case 2:
resultado = num1 - num2;
cout << "El resultado de la resta es: " << resultado << endl;
break;
case 3:
resultado = num1 * num2;
cout << "El resultado de la multiplicacion es: " << resultado << endl;
break;
case 4:
resultado = num1 / num2;
cout << "El resultado de la division es: " << resultado << endl;
break;
default:
break;
}

cout << endl;

return 0;

}