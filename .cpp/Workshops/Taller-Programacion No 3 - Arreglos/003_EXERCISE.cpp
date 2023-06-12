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
  
  while (OP == 'S'){
    int vector[10],mayor=0,menor=0,suma=0,cantV,AUX = 0;    
    system("cls");
    system("color F5");
    gotoxy(39,4); cout<<"</VECTOR/>";
    do{
      gotoxy(66,6); cout<<"           ";
      gotoxy(20,6); cout<<"DIGITE LA CANTIDAD DE ELEMENTOS DE SU VECTOR : ";cin>>cantV;
      gotoxy(31,14); cout<<"ERROR...VALOR MAX 10 ELEMENTOS";
    }while((cantV<0)||(cantV>10));
    gotoxy(24,14); cout<<"                                             ";
    
    for (int i = 0; i < cantV; i++){
      gotoxy(62,8); cout<<"         ";
      gotoxy(25,8); cout<<"INGRESE EL VALOR PARA LA POSICION "<<i<<" : ";cin>>vector[i];
      suma += vector[i];
      if (vector[i] > mayor){
        mayor = vector[i];
      }
    }
    
    gotoxy(33,12); cout<<"VECTOR = ";
    for (int i = 0; i < cantV; i++){
      cout<<vector[i]<<"  ";
    }
    
    for (int k = 0; k < cantV-1 ; k++){
      for(int j = k+1; j < cantV ;j++){
        if (vector[k] > vector[j])
	         {
	         AUX = vector[k] ;
	         vector[k] = vector[j] ;
	         vector[j] = AUX;
	         }  
      }
    }
  
    gotoxy(20,8); cout<<"                                                                      ";
    gotoxy(20,8); cout<<"LA SUMA DE TODOS LOS ELEMENTOS DEL VECTOR ES : "<<suma;
    gotoxy(20,9); cout<<"EL NUMERO MAYOR DE LOS ELEMENTOS DEL VECTOR ES :"<<mayor;
    gotoxy(20,10); cout<<"EL NUMERO MENOR DE LOS ELEMENTOS DEL VECTOR ES :"<<vector[0]; 
    
    do{
      gotoxy(32,15); cout<<"--DESEA CONTINUAR S/N--";
      OP=getch();
      OP=toupper(OP);
    }while((OP != 'S')&& (OP != 'N'));
  }
}

