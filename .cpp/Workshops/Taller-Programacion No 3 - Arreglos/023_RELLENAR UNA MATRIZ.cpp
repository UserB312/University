#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

main(){
  int matriz[100][100],filas,columnas,F;
  system("cls");
  system("color F5");
  gotoxy(21,4); cout<<"</VECTORES BIDIMENSIONALES/>";
  gotoxy(30,5); cout<<"</MATRIZ/>";
  gotoxy(21,7); cout<<"DIGITE EL NUMERO DE FILAS : "; cin>>filas;
  gotoxy(21,8); cout<<"DIGITE EL NUMERO DE COLUMNAS : "; cin>>columnas;
  
  //RELLENAMOS LA MATRIZ
  for (int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
      gotoxy(57,10); cout<<"      ";
      gotoxy(16,10); cout<<"DIGITE UN NUMERO PARA LA POSICION ["<<i<<"]["<<j<<"]"<<" : ";
      cin>>matriz[i][j];
    }
  }
  
  gotoxy(16,10); cout<<"                                                                     ";
  F = 12;
  gotoxy(16,F); cout<<"</MATRIZ/> ";
  for (int i = 0; i < filas; i++){
    gotoxy(26,F);
    for(int j = 0; j < columnas; j++){ 
      printf("%3d %3s",matriz[i][j],"  ");
    }
    F++;
  }
  getch();
}
