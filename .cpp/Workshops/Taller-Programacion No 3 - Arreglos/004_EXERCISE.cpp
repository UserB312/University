#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

main(){
  char OP = 'S';
  int par = 0,impar = 0;
  int vector[10],PAR[10],IMPAR[10],cantV;
  while (OP == 'S'){
    system("cls");
    system("color F5");
    gotoxy(28,3); cout<<"</VECTOR/>";
    
    do{
      gotoxy(48,5); cout<<"          ";
      gotoxy(22,5); cout<<"INGRESE EL TAMAÑO DEL VECTOR : "; cin>>cantV;
      gotoxy(21,15); cout<<"ERROR...MAX 10 ELEMENTOS";
    }while((cantV<0) || (cantV>10));
    gotoxy(21,15); cout<<"                                                ";
    
    for (int i = 0; i < cantV; i++){
      gotoxy(60,6); cout<<"         ";
      gotoxy(22,6); cout<<"INGRESE EL VALOR PARA LA POSICION "<<i<<" : ";
      cin>>vector[i];
      
      if(vector[i] % 2 == 0){
        PAR[par]=vector[i];
        par++;
      }else{
        IMPAR[impar]=vector[i];
        impar++;
      }
    }
    gotoxy(24,8); cout<<"VECTOR ORIGINAL : ";
    for (int i = 0; i < cantV; i++){
      cout<<vector[i]<<"   ";
    }
    gotoxy(24,10); cout<<"VECTOR PAR : ";
    for (int i = 0; i < par; i++){
      cout<<PAR[i]<<"   ";
    }
    gotoxy(24,12); cout<<"VECTOR IMPAR : ";
    for (int i = 0; i < impar; i++){
      cout<<IMPAR[i]<<"   ";
    }
    
    do{
    gotoxy(23,18); cout<<"--DESEA CONTINUAR S/N--";
    OP = getch();
    OP = toupper(OP);
    }while((OP != 'S') && (OP != 'N'));
  }
}
