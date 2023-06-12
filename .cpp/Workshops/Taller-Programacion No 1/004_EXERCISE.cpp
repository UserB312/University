#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <math.h> // libreria de funciones matematicas en C/C++

using namespace std;

int gotoxy(USHORT x,USHORT y){         
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

main(){
  int num1,num2;
  double raiz;
  char OP='S';
  
  while (OP=='S'){
    system("cls");
    system("color F5");
    gotoxy(44,2); cout<<"UNIVERSIDAD POPULAR DEL CESAR";
    gotoxy(47,3); cout<<"POTENCIA DE UN NUMERO X";
    gotoxy(58,4); cout<<":D";
    gotoxy(42,6); cout<<"DIGITE UN NUMERO (NUMERO BASE):";
    cin>>num1;
    gotoxy(42,7); cout<<"DIGITE UN NUMERO (NUMERO EXPONENTE):";
    cin>>num2;
    int elevado = pow(num1, num2);
    gotoxy(39, 9); cout<<"EL NUMERO "<<num1<<" ELEVADO A LA POTENCIA "<<num2<<" ES: "<<elevado;
  
    gotoxy(44,11); cout<<"RAIZ CUADRADA DE UN NUMERO X"; 
    gotoxy(44,12); cout<<"DIGITE EL NUMERO A CALCULAR: "; cin>>raiz;
    double raizcuadrada = sqrt(raiz);
    gotoxy(44,14); cout<<"RAIZ CUADRADA DE "<<raiz<<" ES "<<raizcuadrada;
    do{
      gotoxy(47,18); cout<<"DESEA CONTINUAR - S/N -";
      OP=getch();
      OP=toupper(OP);
    }while ((OP!='S')&&(OP!='N'));
  }
}
