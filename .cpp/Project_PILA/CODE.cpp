#include <iostream>
#include <conio.h>
#include <cstring>
#include <cmath>
#include <string>
#include "evaluarExpresion.h" //IMPORTAMOS NUESTRO ARCHIVO evaluarExpresion EL CUAL CONTIENE EL ALGORITMO PARA EVALUAR NUESTRA EXPRESION POSTFIJA

using namespace std;

char PILA[30];
char INFIJA[30];
char POSTFIJA[30];
int TOPE = 0;

//FUNCIONES
int menu();
bool PILA_LLENA();
bool PILA_VACIA();
void EMPILAR(char dato);
char DESEMPILAR();
bool OPERADOR(char dato);
int nPrioridad(char operador);
bool PRIORIDAD(char dato1, char dato2);
char UltimoElemento();
bool OPERANDO(char dato);
bool validarExpresion(const char* expresion);


main() {
	//VARIABLES A UTILIZAR
	int OP, k;
	char operador;
	int resultadoFINAL;
	bool postBAND = false;
	string strPostfija; // VARIABLE DONDE ALMACENO MI EXPRESION YA POSTFIJA

	cout << "INGRESE UNA EXPRESION INFIJA: ";
	cin.getline(INFIJA, sizeof(INFIJA));
	if(strlen(INFIJA) >= 3) {
		if (validarExpresion(INFIJA)) {
			do {
				cout << "\n************</> M E N U </>***********" << endl;
				cout << "1. CONVERTIR EXPRESION INFIJA A POSTFIJA" << endl;
				cout << "2. EVALUAR EXPRESION" << endl;
				cout << "3. SALIR" << endl;
				do {
					cout << "\nINGRESE LA OPCION DESEADA : ";
					cin >> OP;
				} while (OP < 1 || OP > 3);

				switch (OP) {
					case 1:
						k = 0;
						//strcpy(POSTFIJA, " ");COLOCAMOS Q LA PILA ESTE VACIA MANDANDOLE UN CARACTER EN BLANCO
						for (int i = 0; i < strlen(INFIJA); i++) {
							if (OPERANDO(INFIJA[i])) {
								POSTFIJA[k] = INFIJA[i];
								k++;
							} else if (OPERADOR(INFIJA[i])) {
								if (!PILA_VACIA()) {
									bool BAND;
									do {
										operador = UltimoElemento();
										if (!PRIORIDAD(operador, INFIJA[i])) {
											BAND = false;
											EMPILAR(operador);
										} else {
											POSTFIJA[k] = operador;
											k++;
											BAND = true;
										}
									} while (!PILA_VACIA() && BAND);
								}
								EMPILAR(INFIJA[i]);
							} else if (INFIJA[i] == '(') {
								EMPILAR(INFIJA[i]);
							} else if (INFIJA[i] == ')') {
								operador = UltimoElemento();
								while (!PILA_VACIA() && operador != '(') {
									POSTFIJA[k] = operador;
									k++;
									operador = UltimoElemento();
								}
							}
						}
						while (!PILA_VACIA()) {
							operador = UltimoElemento();
							POSTFIJA[k] = operador;
							k++;
						}
						//POSTFIJA[k] = '\0';
						cout << "\n*************************************" << endl;
						cout << "EXPRESION POSTFIJA: " << POSTFIJA << endl;
						cout << "*************************************" << endl;
						strPostfija = POSTFIJA;
						postBAND = true;
						break;
					case 2:
						if(postBAND != true) {
							cout << "\n***********************************************************" << endl;
							cout << "ERROR...NO SE HA TRANSFORMADO LA EXPRESION INFIJA A POSTFIJA";
							cout << "\n***********************************************************" << endl;
						} else {
							resultadoFINAL = evaluarExpresionPost(strPostfija);
							cout << "\n*************************************" << endl;
							cout << "EXPRESION EVALUADA : " << resultadoFINAL;
							cout << "\n*************************************" << endl;
						}
						break;

					case 3:
						cout << "---Graciassss---" << endl;
						cout << "Copyright | Todos los derechos reservados" << endl;
						cout << "@JuulioRios" << endl;
						OP = 3;
						break;
				}
			} while (OP != 3);
		} else {
			cout << "\n************************\n";
			cout << "ERROR...EXPRESION NO VALIDA\n";
			cout << "****************************";
		}
	} else {
		cout << "\n**************************\n";
		cout << "ERROR...EXPRESION NO VALIDA\n";
		cout << "****************************";
	}
}


//******************IMPLEMENTANCION DE FUNCIONES**********************
void EMPILAR(char dato) {
	if (PILA_LLENA()) {
		cout << "stack overflow";
	} else {
		TOPE++;
		PILA[TOPE - 1] = dato;
	}
}
char DESEMPILAR() {
	char letra;
	if (PILA_VACIA()) {
		cout << "stack underflow";
		letra = ' ';
	} else {
		letra = PILA[TOPE];
		TOPE--;
	}
	return letra;
}
bool PILA_LLENA() {
	if (TOPE < 30) {
		return false;
	} else {
		return true;
	}
}
bool PILA_VACIA() {
	if (TOPE == 0) {
		return true;
	} else {
		return false;
	}
}
bool OPERADOR(char dato) {
	if (dato == '+' || dato == '-' || dato == '*' || dato == '/' || dato == '^') {
		return true;
	} else {
		return false;
	}
}
int nPrioridad(char operador) {
	int nivel = 0;
	switch (operador) {
		case '(':
			nivel = 0;
			break;
		case '+':
			nivel = 1;
			break;
		case '-':
			nivel = 1;
			break;
		case '*':
			nivel = 2;
			break;
		case '/':
			nivel = 2;
			break;
		case '^':
			nivel = 3;
			break;
	}
	return nivel;
}
bool PRIORIDAD(char dato1, char dato2) {
	int nivelDato1 = nPrioridad(dato1);
	int nivelDato2 = nPrioridad(dato2);
	if (nivelDato1 >= nivelDato2) {
		return true;
	} else {
		return false;
	}
}
bool validarExpresion(const char* expresion) {
	bool Operando;
	bool Operador;
	for(int i = 0; i < strlen(INFIJA); i++) {
		if(isalpha(INFIJA[i])) {
			Operando = true;
		} else if (INFIJA[i] == '+' || INFIJA[i] == '-' || INFIJA[i] == '*' || INFIJA[i] == '/' || INFIJA[i] == '^') {
			Operador = true;
		}

		if(Operando && Operador) {
			return true;
		}
	}
	return false;
}
char UltimoElemento() {
	char aux;
	if (TOPE > 0) {
		aux =  PILA[TOPE - 1];
		TOPE--;
		return aux;
	} else {
		return '\0';
	}
}
bool OPERANDO(char dato) {
	dato = toupper(dato);
	if(dato >= 'A' && dato <= 'Z') {
		return true;
	} else {
		return false;
	}
}


