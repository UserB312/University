#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){         
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

main(){
  int Vbase,Vpotencia;
  char OP = 'S';
  while (OP == 'S'){
    float RESULT=0;
    system("cls");
    system("color F5");
    gotoxy(33,4); cout<<"</ CALCULAR LA POTENCIA DE UN NUMERO N Y EXPONENTE N />";
    gotoxy(47,6); cout<<"DIGITE EL NUMERO BASE : "; 
    gotoxy(42,7); cout<<"DIGITE EL NUMERO EXPONENTE : "; 
    do{
      gotoxy(71,6); cout<<"                       ";
      gotoxy(71,6); cin>>Vbase;
      gotoxy(40,14); cout<<"ERROR...EL VALOR DEBE SER UN ENTERO POSITIVO.";
    }while(Vbase<=0);
    gotoxy(40,14); cout<<"                                                             ";
  
    do{
      gotoxy(71,7); cout<<"                         ";
      gotoxy(71,7); cin>>Vpotencia;
      gotoxy(40,14); cout<<"ERROR...EL VALOR DEBE SER UN ENTERO POSITIVO.";
    }while(Vpotencia<=0);
    gotoxy(40,14); cout<<"                                                               ";
  
  
    for (int I = 1 ; I<Vpotencia ; I++){
      if(RESULT<Vbase){
        RESULT = Vbase * Vbase;
      }else{
        RESULT = RESULT * Vbase;
      }
    }
    gotoxy(37,9); cout << "EL RESULTADO DE "<<Vbase<<" ELEVADO A LA POTENCIA DE "<<Vpotencia<<" : "<< RESULT;
  
    do{
      gotoxy(47,12); cout<<("DESEA CONTINUAR --S/N--");
      getch();
      OP=toupper(OP);
    }while((OP!='S')&&(OP!='N'));
  }
}
