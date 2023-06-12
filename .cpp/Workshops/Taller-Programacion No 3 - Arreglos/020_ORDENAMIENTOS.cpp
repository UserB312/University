#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

/*METODOS DE ORDENAMIENTO
-DIRECTOS
Burbuja - Insercion - Seleccion
-INDIRECTOS
Shell - Quick sort - Merge sort - Radix sort
*/

main(){
  int numeros[5];
  int aux,min;
  system("color F5");
  system("cls");
  for(int i = 0; i < 5; i++){
    cout << "INGRESE UN VALOR ENTERO PARA LA LISTA DE TAMAÑO MAX 5 ELEMENTOS : "; cin >> numeros[i];
  }
  
  //ORDENAMIENTO BURBUJA
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      if (numeros[j] > numeros[j+1]){
        aux = numeros[j];
        numeros[j] = numeros[j+1];
        numeros[j+1] = aux;
      }
    }
  } 
  //ORDENAMIENTO POR INSERCION
  for (int i = 0; i < 5; i++){
    int pos = i;
    aux = numeros[i];
    
    while ((pos > 0) && (numeros[pos-1] > aux)){
      numeros[pos] = numeros[pos-1];
      pos--;
    }
    numeros[pos] = pos;
  }
  //ORDENAMIENTO POR SELECCION
  for (int i = 0; i < 5; i++){
    min = i;
    for (int j = 0; j < 5; j++){
      if (numeros[j] < numeros[min]){
        min = j;
      }
    }
    aux = numeros[i];
    numeros[i] = numeros[min];
    numeros[min] = aux;
  }
  
  cout << endl << "LISTA ORDENADA : ";
  for (int k = 0; k < 5; k++){
    cout << numeros[k] << "  ";
  }
  
  getch();
}


