#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}
//ORDENACION QUICK SORT
//void quicksort(float arreglo[],int primero,int ultimo);
//void intermcabio(float &x,float &y);


void intermcabio(float &x,float &y){
  float aux;
  
  aux = x;
  x = y;
  y = aux;
}

void quicksort(float array[],int primero,int ultimo){
  int i,j,central;
  float pivote;           
  
  central = (primero + ultimo) / 2;
  pivote = array[central];
  i = primero;
  j = ultimo;
  
  do{
    while(array[i] < pivote) i++;
    while(array[j] < pivote) j--;
    if(i <= j){
      intercambio(array[i],array[j]);
      i++;
      j--;
    }
  } while(i <= j);
  
  if(primero < j){
    quicksort(array,primero,j); //ORDENAMOS SUBLISTA IZQUIERDA
  }
  if(i < ultimo){
    quicksort(array,i,ultimo); //ORDENAMOS SUBLISTA DERECHA
  }
}


main(){
  float arreglo[] = {4,1,7,5,2,3,6};
  
  quicksort(arreglo,0,6);
  
  cout << "ARREGLO ORDENADO : ";
  for (int i = 0; i < 6; i++){
    cout << arreglo[i] << "  ";
  }
}

