#include <iostream>
#include <conio.h>
#include <cstring>
#include <cmath>

using namespace std;

double PILA1[30];
int TOPE1 = 0;

//FUNCIONES
void EMPILAR1(double dato);
double DESEMPILAR1();
bool PILA_LLENA1();
bool PILA_VACIA1();
bool OPERADOR1(char dato);
double Operacion1(char operador, double x, double y);
bool OperandoNumber(double dato);


double evaluarExpresionPost(string POSTFIJA) {

	for(int i = 0; i < POSTFIJA.length(); i++) {
		char caracter = POSTFIJA[i];
		if(isalpha(caracter)) {
			double valor;
			cout << "INGRESE UN VALOR PARA " << caracter << " : ";
			cin >> valor;
			EMPILAR1(valor);
		} else if(OPERADOR1(caracter)) {
			double y = DESEMPILAR1();
			double x = DESEMPILAR1();
			if((caracter == '/') && ( y == 0)) {
				cout << "ERROR...NO ES POSIBLE DIVIDIR ENTRE CERO";
				return '\0';
			}
			double resultado = Operacion1(caracter,x,y);

			EMPILAR1(resultado);
		}
	}
	return DESEMPILAR1();
}

//********************IMPLEMENTACION DE FUNCIONES***********++
bool OperandoNumber(double dato) {
	if(isdigit(dato)) {
		return true;
	} else {
		return false;
	}
}

void EMPILAR1(double dato) {
	if (PILA_LLENA1()) {
		cout << "stack overflow";
	} else {
		PILA1[TOPE1] = dato;
		TOPE1++;
	}
}
double DESEMPILAR1() {
	double dato;
	if(PILA_VACIA1()) {
		cout<<"Stack Underflow";
		dato = 0.0;
	} else {
		dato = PILA1[TOPE1 - 1];
		TOPE1--;
	}
	return dato;
}
bool PILA_LLENA1() {
	if (TOPE1 <= 30) {
		return false;
	} else {
		return true;
	}
}
bool PILA_VACIA1() {
	if (TOPE1 == 0) {
		return true;
	} else {
		return false;
	}
}
bool OPERADOR1(char dato) {
	if (dato == '+' || dato == '-' || dato == '*' || dato == '/' || dato == '^') {
		return true;
	} else {
		return false;
	}
}
double Operacion1(char operador, double x, double y) {
	double resultado = 0;
	if (operador == '+') {
		resultado = x + y;
	} else if (operador == '-') {
		resultado = x - y;
	} else if (operador == '*') {
		resultado = x * y;
	} else if (operador == '/') {
		resultado = x / y;
	} else if (operador == '^') {
		resultado = pow(x, y);
	}

	return resultado;
}

