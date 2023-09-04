#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void escribir();
void leer();
template<typename T>
T buscar = [&]();

int main() {
	escribir();
	leer();


	system("pause");
}


void escribir() {
	ofstream archivo("Nombres.txt"); //ios::app agrega y no sobreEscribe
	if (archivo.is_open()) {
		cout << "Archivo Abierto como tu poto" << endl;
		archivo << "Ivan" << endl;

	}
	else {
		cout << "Ta cagao" << endl;
	}
}

void leer() {
	ifstream archivo("Nombres.txt");
	string linea;
	if (archivo.is_open()) {
		while (getline(archivo, linea)) {
			cout << linea << endl;
			auto buscar = [&linea]() {
				if (linea == "Ivan") {
					cout << "Encontramos Ivan" << endl;
				}
			};
			buscar();
		}
	}
	else {
		cout << "Ta cagao" << endl;
	}
}
