#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

//FUNCIONES
void PRIMO (int num);

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
    PRIMO(num);
    do{
      gotoxy(25,12); cout<<"DESEA CONTINUAR S/N ";
      OP = getch();
      OP = toupper(OP);
    }while((OP != 'S') && (OP != 'N'));
  }
}

void PRIMO (int num){
  int SW = 0;
  for ( int I = 2; I < num; I++)
        if ( num % I == 0) 
           SW = 1;
     switch (SW) {
	     case 0 : gotoxy(25,9); cout << num << " NO ES UN NUMERO PRIMO ";
	              break;
	     case 1 : gotoxy(25,9); cout << num << " SI ES UN NUMERO PRIMO ";
	   }
}
