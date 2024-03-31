#include <iostream> 
#include <string>
#include <iomanip>

using namespace std;


int main() { 

/*Calcular el área y el perímetro de un rectángulo*/
float lado1 = 0;
float lado2 = 0;
float area = 0;
float perimetro = 0;

cout << "Ingrese lado 1:" << endl;
cin >> lado1;
cout << "Ingrese lado 2:" << endl;
cin >> lado2;

perimetro = (2*lado1) + (2*lado2);
area = lado1*lado2;

cout << "El area del rectangulo es de " << area << " unidades cuadradas y el perimetro es de " << perimetro << " unidades" << endl;

std::cout << std::endl;

/*Convertir cm a metros*/
float cm = 0;
float metros = 0;

cout << "Ingrese un numero para realizar la conversion a metros:" << endl;
cin >> cm;
metros = (cm / 100);
cout << cm << " centimetros son " << metros << " metros" << endl;

std::cout << std::endl;

/*Convertir Pesos Argentinos a Reales Brasileros*/
float pesos = 0;
float reales = 0;

cout << "Ingrese el valor en pesos argentinos:" << endl;
cin >> pesos;
cout << "Ingrese la cotizacion al dia de hoy de reales brasileros:" << endl;
cin >> reales;
cout << pesos << " pesos argentinos equivalen a " << (reales*pesos) << " reales brasileros" << endl;

std::cout << std::endl;

/*Calcular el área y el perímetro de un triángulo equilátero:*/
float lado = 0;
float altura = 0;

cout << "Ingrese la medida de uno de los lados:" << endl;
cin >> lado;
cout << "Ingrese la altura del triangulo:" << endl;
cin >> altura;

cout << "El area del triangulo es de " << ((lado*altura)/2) << " unidades cuadradas y el perimetro es de " << (3*lado) << " unidades" << endl;

std::cout << std::endl;

/*Calcular el área y el perímetro de una circunferencia*/
float radio = 0;
float pi = 3.141592;

cout << "Inserte el radio de la circunferencia:" << endl;
cin >> radio;
std::cout << "El perimetro de la circunferencia es de " << std::fixed << std::setprecision(2) << (2*pi*radio) << " unidades y el area es de " << (pi*(radio*radio)) << " unidades cuadradas" << endl;

std::cout << std::endl;

/*Calcular la distancia a la que se encuentra una tormenta*/
int segundos = 0;
int sonido = 343;

cout << "Inserte los segundos transcurridos entre el relampago y el trueno:" << endl;
cin >> segundos;
cout << "La distancia a la que se encuentra la tormenta es de " << (segundos*sonido) << " metros" << endl;

std::cout << std::endl;

/*Imprimir datos personales*/
string nombre = "";
string apellido = "";
int edad = 0;
string direccion = "";
string localidad = "";
string provincia = "";
string pais = "";
string telefono = "";

cout << "Ingresa tu nombre:" << endl;
cin >> nombre;
cout << "Ingresa tu apellido:" << endl;
cin >> apellido;
cout << "Ingresa tu edad:" << endl;
cin >> edad;
cin.ignore(); 
cout << "Ingresa tu domicilio actual:" << endl;
getline(cin, direccion);
cout << "Ingresa localidad en la que resides:" << endl;
getline(cin, localidad);
cout << "Ingresa la provincia en la que resides:" << endl;
getline(cin, provincia);
cout << "Ingresa el pais en donde vives:" << endl;
getline(cin, pais);
cout << "Ingresa un numero de telefono:" << endl;
getline(cin, telefono);

cout << "Te llamas " << nombre << " " << apellido << " tienes " << edad << " años. Vives en " << direccion << " en la localidad de " << localidad << ", provincia de " << provincia << " en " << pais << ". Tu numero de telefono es " << telefono << ". ¡Es un gusto conocerte!" << endl;

return 0;

};