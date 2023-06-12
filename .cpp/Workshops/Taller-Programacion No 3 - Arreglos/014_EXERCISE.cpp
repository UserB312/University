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
void menu();
void create(int array[10][10], int num_row, int num_column);
void calculo(int array[10][10], int num_row, int num_column);

main() {
 int option, matriz[10][10],num_row = 0, num_column;
 char OP = 'S';

 while(OP == 'S') {
  titles();
  menu();
  do {
   gotoxy(18,11); cout << "                                        ";
   gotoxy(18,11); cout << "Digite la opcion que desea realizar: ";
   gotoxy(55,11); cin >> option;
   gotoxy(17,13); cout << "Error: esta opcion no existe, digite una opcion existente";
  } while ((option < 1) || (option > 3));
  gotoxy(17,13); cout << "                                                              ";

  switch(option) {
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
            create(matriz, num_row, num_column);
            break;
    
    case 2: if (num_row == 0) {
                gotoxy(18,11); cout << "Error: no se ha creado ninguna matriz ";
                getch();
        }

        else {
                titles();
                gotoxy(20,6); cout << "Consultar la matriz"; // show

                calculo(matriz, num_row, num_column);
                getch();
        }
            break;
    
    case 3: OP = 'N';
            break;
  }
 }
}

// Definición de funciones
void titles() {
        system("cls");
        system("color f3");
        gotoxy(20,4); cout << "Menu de arreglos";
        gotoxy(20,5); cout << "Hecho por Monagan";
}

void menu() {
        gotoxy(19,7); cout << "1. Crear la matriz";
        gotoxy(19,8); cout << "2. Calcular y mostrar la matriz";
        gotoxy(19,9); cout << "3. Salir del programa";
}

void create(int array[10][10],int num_row, int num_column) {
            for (int i = 0; i < num_row; i++) { // Eje x
                for (int j = 0; j < num_column; j++) { // Eje y
                        gotoxy(20,11); cout << "                                                             ";
                        gotoxy(20,11); cout << "Digite un valor para la posicion " << "[" << i << "]" << "  " << "[" << j << "]" " : "; cin >> array[i][j];
                }
            }
}

void calculo(int array[10][10], int num_row, int num_column) {
        int vector_par[100], vector_impar[100];
        int F, x = 0, y = 0;
        F = 10;
                gotoxy(23,F); cout << "Matriz: ";
                for (int i = 0; i < num_row; i++) {
                        gotoxy(33,F);
                        for (int j = 0; j < num_column; j++) {
                                printf("%3d %3s", array[i][j], "  ");

                                if (array[i][j] % 2 == 0) {
                                        vector_par[x] = array[i][j];
                                        x++; //x = x + 1 
                                }else{
                                        vector_impar[y] = array[i][j];
                                        y++;
                                }
                        }
                        F++;
                }
                gotoxy(23,17); cout << "Vector par: ";
                for (int i = 0; i < x; i++) {
                        cout << vector_par[i] << "   "; 
                }

                gotoxy(23,18); cout << "Vector impar: ";
                for (int k = 0; k < y; k++) {
                        cout << vector_impar[k] << "   ";
                } 

        gotoxy(23,20); cout << "Presione cualquier tecla para finalizar ";
        getch(); 
}
