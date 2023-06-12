#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}

main(){
  int num;
  char OP=('S');
  while(OP=='S'){
    
    int facto=1;
    
    system("cls");
    system("color F5");
    gotoxy(53,2); cout<<"FACTORIAL :3";
    gotoxy(46,4); cout<<"DIGITE UN NUMERO ENTERO: ";
    do{
      gotoxy(70,4); cout<<"                 ";
      gotoxy(70,4); cin>>num;
      gotoxy(39,10); cout<<"EL FACTORIAL DE UN NUMERO NEGATIVO NO EXISTE";
    }while(num<0);
    gotoxy(39,10); cout<<"                                                    ";
    
    for (int x=1 ; x <= num; x++){
      facto*=x;
    }
    
    gotoxy(48,8); cout<<"EL FACTORIAL DE "<<num<<" ES "<<facto;
  
    do{
      gotoxy(47,12); cout<<("DESEA CONTINUAR --S/N--");
      getch();
      OP=toupper(OP);
    }while((OP!='S')&&(OP!='N'));
  }
  }
