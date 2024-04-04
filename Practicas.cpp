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
int main(){
	int cant = 0;
	patron(cant);
}