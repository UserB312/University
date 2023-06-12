/**********************************************************************
Recibir desde el teclado un numero entero en el programa principal y a 
continuación enviarlo a una función llamada MOSTRAR que indique si el 
numero recibido es positivo o negativo 
***********************************************************************/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}

void numsigno(int x);

main(){
  int num;
  char OP = 'S';
  
  while (OP=='S'){
    system("cls");
    system("color F5");
    gotoxy(28,4); cout<<"</UNIVERSIDAD POPULAR DEL CESAR/>";
    gotoxy(32,5); cout<<"</POSITIVO - NEGATIVO/>";
    gotoxy(34,7); cout<<"DIGITE UN NUMERO : "; cin>>num;
    gotoxy(34,10); numsigno(num);
  do{
    gotoxy(34,16); cout<<"DESEA CONTINUAR S/N ";
    OP = getch();
    OP = toupper(OP);
    }while((OP!='S')&&(OP!='N'));
  }
}

//FUNCION
void numsigno (int x){
  if(x>0){
    cout<<"EL NUMERO ES POSITVO";
  }else{
    cout<<"EL NUMERO ES NEGATIVO";
  }
}
