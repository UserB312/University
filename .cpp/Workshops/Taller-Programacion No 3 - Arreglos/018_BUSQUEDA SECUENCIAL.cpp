#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

main(){
  int a [] = {5,3,6,8,9,2};
  int i;
  char band = 'F';
  
  //BUSQUEDA SECUENCIAL
  int dato = 2;
  i = 0;
  while((band == 'F') && (i < 6)){
    if(a[i] == dato){
      band = 'V';
    }
    i++;
  }
  
  if(band == 'F'){
    cout << "EL NUMERO A BUSCAR NO EXISTE EN EL ARREGLO"<<endl;
  }else if(band == 'V'){
    cout << "EL DATO HA SIDO ENCONTRADO EN LA POSICION : " << i-1 << endl;
  }
}
