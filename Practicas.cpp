#include <iostream>
using namespace std;
/*Escriba un algoritmoque imprima en pantalla el siguiente patrón.
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
El patrón deberá imprimirse hasta una cierta cantidad de veces, según
indique el usuario
*/
void patron(int cant) {
	cout << "Ingrese la cantidad a imprimir el patron" << endl;
	cin >> cant;
	for (int i = 1; i <=cant; i++){
		for (int j = 1 ; j <= i  ; j++) {
			std::cout << i ;
		}
		std::cout << endl;
	}
}
/*Escriba un algoritmo que imprima en pantalla el siguiente patrón
A
A A
A A A
A A A A
A A A A A
El patrón deberá imprimirse hasta una cierta cantidad de veces, según
indique el usuario
*/
void patronA(int cant) {
	cout << "Ingrese la cantidad de A ha imprimir" << endl;
	cin >> cant;
	for (int i = 1; i <=cant; i++){
		for (int j = 1; j <=i ; j++){
			cout << "A";
		}
		cout << endl;
	}
} 
/*Escriba un algoritmo que imprima en pantalla el siguiente patrón
			A A A A A A A
			A A A A A A A
			A A A A A A A
			A A A A A A A
			A A A A A A A
			A A A A A A A
El patrón deberá imprimirse hasta una cierta cantidad de veces, según
indique el usuario.
*/
void patronCuadrado(int cant) {
	cout << "Ingrese la cantidad de A ha imprimir" << endl;
	cin >> cant;
	for (int i = 1; i <= cant; i++) {
		for (int j = 1; j < cant; j++) {
			cout << " A";
		}
		cout << endl;
	}
}
/*Escriba un algoritmo que imprima en
pantalla el siguiente patrón progresivo
y regresivo.
El patrón podrá aumentar la cantidad
de niveles según la cantidad que
indique el usuario.
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1*/
void progresivo(int cant) {
	cout << "Ingrese la cantidad de imprimir progresivo y regresivo" << endl;
	cin >> cant;
	for (int i = 1; i <= cant; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}
	for (int i = cant; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}
}
int main(){
	int cant = 0;
	patron(cant);
	patronA(cant);
	patronCuadrado(cant);
	progresivo(cant);
	return 0;
}