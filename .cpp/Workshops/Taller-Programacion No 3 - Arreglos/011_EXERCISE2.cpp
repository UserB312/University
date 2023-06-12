#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

// Prototipos de funciones
void titles();
int menu();
void create(int array[10][10], int num_row, int num_column);
void show(int array[10][10], int num_row, int num_column);

main() {
 int opcion,num_row = 0, num_column = 0;
 int matriz[10][10];
 char OP = 'S';

 while(OP == 'S') {
        
  titles();
  opcion = menu();

  switch(opcion) {
    case 1: titles();
            gotoxy(20,6); cout << "Crear la matriz"; 
            do {
                gotoxy(20,8); cout << "                                 "; 
                gotoxy(20,8); cout << "Digite el numero de filas: ";
                gotoxy(47,8); cin >> num_row;
            } while ((num_row < 0) || (num_row > 10));
            do {
                gotoxy(20,9); cout << "                                  ";
                gotoxy(20,9); cout << "Digite el numero de columnas: ";
                gotoxy(50,9); cin >> num_column;
            } while ((num_column < 0) || (num_column > 10));    
            gotoxy(20,8); cout << "                                         ";
            gotoxy(20,9); cout << "                                         ";
            create(matriz, num_row, num_column);
            break;
    
    case 2: if (num_row == 0) {
                gotoxy(17,11); cout << "Error: no se ha creado ninguna matriz       ";
                gotoxy(18,13); cout << "Pulse cualquier tecla para continuar";
                getch();
        }else{
                titles();
                gotoxy(20,6); cout << "Consultar la matriz"; // show
                show(matriz, num_row, num_column);
        }
            break;
    
    case 3: OP = 'N';
            break;
  }
 }
}

// Definici�n de funciones
void titles() {
        system("cls");
        system("color B0");
        gotoxy(20,4); cout << "Menu de arreglos";
        gotoxy(20,5); cout << "Hecho por Monagan";
        gotoxy(79,23); cout <<"@Juliorios_117";
}

int menu() {
        int option;
        gotoxy(19,7); cout << "1. Crear la matriz";
        gotoxy(19,8); cout << "2. Consultar la matriz";
        gotoxy(19,9); cout << "3. Salir del programa";
        do {
           gotoxy(18,11); cout << "                                            ";
           gotoxy(17,11); cout << "Digite la opcion que desea realizar : ";
           gotoxy(55,11); cin >> option;
           gotoxy(17,13); cout << "Error: esta opcion no existe, digite una opcion existente";
        } while ((option < 1) || (option > 3));
        gotoxy(17,13); cout << "                                                             ";

        return option;
}

void create(int array[10][10],int num_row, int num_column) {
            for (int i = 0; i < num_row; i++) { // Eje x
                for (int j = 0; j < num_column; j++) { // Eje y
                        gotoxy(20,11); cout << "                                                             ";
                        gotoxy(20,11); cout << "Digite un valor para la posicion " << "[" << i << "][" << j << "]" " : "; cin >> array [i][j];
                }
            }
}

void show(int array[10][10], int num_row, int num_column) {
        int sum = 0, min = 999, max = 0, F;
        F = 10;
                gotoxy(23,F); cout << "Matriz: ";
                for (int i = 0; i < num_row; i++) {
                        gotoxy(33,F);
                        for (int j = 0; j < num_column; j++) {
                                int valor = array[i][j];
                                printf("%3d %3s", array[i][j], "  ");
                                sum += array[i][j];        
                                if (valor < min) {
                                min = valor;
                                }

                                if (valor > max) {
                                max = valor;
                                }
                        }
                        F++;
                }
        
        gotoxy(20,16); cout << "La suma de todos los elementos de la matriz es: " << sum;        
        gotoxy(20,17); cout << "El valor minimo de la matriz es: " << min;        
        gotoxy(20,18); cout << "El valor maximo de la matriz es: " << max;
        getch();
}
