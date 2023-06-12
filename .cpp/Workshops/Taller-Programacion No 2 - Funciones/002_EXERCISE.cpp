#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

//FUNCIONES
void MOSTRAR(int num);

main(){
  int num;
  char OP = 'S';
  while (OP == 'S'){
    system("cls");
    system("color F5");
    gotoxy(22,3); cout<<"UNIVERSIDAD POPULAR DEL CESAR";
    gotoxy(28,4); cout<<"</FUNCIONES/>";
    gotoxy(25,6); cout<<"DIGITE UN NUMERO : ";
    gotoxy(44,6); cin>>num;
    MOSTRAR(num);
    do{
      gotoxy(25,12); cout<<"DESEA CONTINUAR S/N ";
      OP = getch();
      OP = toupper(OP);
    }while((OP != 'S') && (OP != 'N'));
  }
}

void MOSTRAR(int num){
  if (num>0){
    gotoxy(25,9); cout<<"EL NUMERO ES POSITIVO";
  }else{
    gotoxy(25,9); cout<<"EL NUMERO ES NEGATIVO";
  }
}
