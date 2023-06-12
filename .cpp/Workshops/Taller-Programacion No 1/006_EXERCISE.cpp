/****************************************************************************
 *                                                                          *
 *      CALCULAR E IMPRIMIR POR PANTALLA LA SERIE FIBONACCI DE 1 A N        *
 *                                                                          * 
 ****************************************************************************/

#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){         
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

main(){
  int a = 1,b = 1,c,n;
  
  system("cls");
  system("color F5");
  gotoxy(44,2); cout<<"UNIVERSIDAD POPULAR DEL CESAR";
  gotoxy(51,3); cout<<"SERIE FIBONACCI";
  gotoxy(47,5); cout<<"DIGITE EL VALOR DE N: "; cin>>n;
  gotoxy(46,7); for ( int i = 1; i <= n; i++){
    cout<< a <<"  ";
    c = a + b;
    a = b;
    b = c;  
  }
  gotoxy(43,22); cout<<"PRESIONE UNA TECLA PARA TERMINAR.";
  getch();
}
