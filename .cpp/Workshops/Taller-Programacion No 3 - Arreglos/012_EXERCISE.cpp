#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

void titles();
int menu();

main() {
  int matriz[10][10], nf = 0, nc = 0, option, type,F,A;  
  char OP = 'S';
  while (OP == 'S') {
    titles();
    type = menu();

    switch(type) {
      case 1: titles();
              gotoxy(23,5); cout << "Crear matriz";
              do {
                gotoxy(23,7); cout << "                                          ";
                gotoxy(23,7); cout << "Digite el numero de filas: "; cin >> nf;
              } while((nf < 0) || (nf > 10));
              do {
                gotoxy(23,8); cout << "                                          ";
                gotoxy(23,8); cout << "Digite el numero de columnas: "; cin >> nc;
              } while((nc < 0) || (nc > 10));

              for (int i = 0; i < nf; i++) {
                for (int j = 0; j < nc; j++) {
                  gotoxy(23,10); cout << "                                                                                     ";
                  gotoxy(23,10); cout << "Digite un valor para la posicion " << "[" << i << "]" << " " << "[" << j << "]" << " : "; cin >> matriz[i][j]; 
                }
              }
              break;
      
      case 2: titles();
              F = 8;
              gotoxy(23,5); cout << "Mostrar la matriz";
              gotoxy(23,F); cout << "Matriz: ";
              for (int i = 0; i < nf; i++) {
                gotoxy(33,F);
                for (int j = 0; j < nc; j++) {
                  printf("%3d %3s", matriz[i][j], "  ");
                }
                F++;
              }
              /*
              for (int k = 0; k < nf; k++) {
                for (int m = 0; m < nc; m++) {
                  vector[k] = matriz[k][m];
                }
              }
              */
              A = 14;
              gotoxy(13,A); cout << "Vector Resultante: ";
              for (int k = 0; k < nf; k++) {
                for (int m = 0; m < nc; m++){
                  printf("%3d %3s", matriz[k][m], "  ");
                }
              }
              getch();
              break;

      case 3: OP = 'N';
              break;
    }
  }
}

void titles() {
  system("cls");
  system("color f2");
  gotoxy(23,4); cout << "Problema 12 Taller";
}

int menu() {
  int option;
  gotoxy(23,5); cout << "1 - Crear matriz";
  gotoxy(23,6); cout << "2 - Mostrar matriz";
  gotoxy(23,7); cout << "3 - Salir del programa";
  
  do {
    gotoxy(23,9); cout << "                                  ";
    gotoxy(23,9); cout << "Digite una alternativa: "; cin >> option;
    gotoxy(23,11); cout << "Error: alternativa inexistente... ";
  } while ((option < 1) || (option > 3));
  gotoxy(23,11); cout << "                                                       ";

  return option;
}
