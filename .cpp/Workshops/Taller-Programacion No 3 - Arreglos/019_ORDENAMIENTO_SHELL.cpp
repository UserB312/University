#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

void intercambio(float &x,float &y);
void shell(float array[5], int n);


main(){
  float arreglo[5];
  cout << "TAMAÑO DEL ARREGLO 5 ELEMENTOS" << endl;
  for (int i = 0; i < 5; i++){
    cout << "INGRESE UN VALOR PARA EL ARREGLO : "; cin >> arreglo[i];
  }
  
  shell(arreglo,5);
  cout << "ARREGLO ORDENADO : " << endl;
  for (int j = 0; j < 5; j++){
    cout << arreglo[j] << "  ";
  } 
}

//CUERPO FUNCIONES
void intercambio(float &x,float &y){
  int aux;
  
  aux = x;
  x = y;
  y = aux;
}

void shell(float array[], int n){
  int salto = n/2,i,j,k;
  
  while(salto > 0){
    for (i = salto; i < n; i++){
      j = i - salto;
      while(j >= 0){
        k = j + salto;
        if (array[j] <= array[k]){
          j = -1;
        }else{
          intercambio(array[j],array[k]);
          j -= salto;
        }
      }
    }
    salto = salto/2;
  }
}
