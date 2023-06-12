#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

main(){
	int option, i, number, search = 0;
	char avanzar = 'S';
	int vector[15], size = 0;
	while (avanzar == 'S') {
		system("cls");
		system("color f5");
		gotoxy(23,5); cout << "Crear y consultar un arreglo";
		gotoxy(21,6); cout << "Programa hecho por el MonaganBoy";
		gotoxy(23,8); cout << "1. Asignar valores";
		gotoxy(23,9); cout << "2. Buscar valores";
		gotoxy(23,10); cout << "3. Salir del programa";
		do {
			gotoxy(21,12); cout << "                                ";
			gotoxy(21,12); cout << "Seleccione una opcion: ";
			gotoxy(44,12); cin >> option;
		} while ((option < 1) || (option > 3));
		
		switch(option) {
			case 1: system("cls");
							system("color f5");
							gotoxy(23,5); cout << "Crear y consultar un arreglo";
							gotoxy(21,6); cout << "Programa hecho por el MonaganBoy";
							gotoxy(23,7); cout << "Asignar valores al vector";
							do {
								gotoxy(21,9); cout << "                                            ";
								gotoxy(17,9); cout << "Asigne la tamano al vector, max = 10: ";
								gotoxy(55,9); cin >> size;
							} while ((size < 0) || (size > 15));
							gotoxy(17,9); cout << "                                               ";
							for (i = 0; i < size; i++) {
								gotoxy(17,9); cout << "Ingresa un valor entero para la posicion " << i << " [  ]";
								gotoxy(61,9); cin >> vector[i];
							}
							break;
							
			case 2: if (size == 0) {
								gotoxy(21,7); cout << "No existen elementos en el vector";
								getch();
							}
							else {
								system("cls");
								system("color f5");
								gotoxy(23,5); cout << "Crear y consultar un arreglo";
								gotoxy(21,6); cout << "Programa hecho por el MonaganBoy";
								gotoxy(23,7); cout << "Buscar valores";
								gotoxy(23,8); cout << "Digite el valor a buscar: ";
								gotoxy(49,8); cin >> number;
								
								gotoxy(23,12); cout << "Vector = ";
								for (i = 0; i < size; i++) {
									cout << vector[i] << " ";
								}
								for (i = 0; i < size; i++) {
									if (vector[i] == number) {
										search++;
									}
								}
								if (search == 1) {
									gotoxy(23,13); cout << "El numero " << number << " se encuentra en el vector.";	
								}
								else {
									gotoxy(23,13); cout << "El numero " << number << " no existe en el vector.";
								}
								
								gotoxy(23,15); cout << "Presione cualquier tecla para salir...";
								getch();
							}
							break;
							
			case 3: avanzar = 'N';
							break;
		}
	}
}
