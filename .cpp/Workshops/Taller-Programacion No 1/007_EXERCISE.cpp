#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>
using namespace std;

main(){
  system("cls");
  system("color F5");
  
  int suma = 0,N,K = 1,potencia = 0;
  cout<<"DIGITE EL NUMERO DE ELEMNTOS A SUMAR : "<<endl;
  cin>>N;
  
  for (int I = 1; I <= N; I++){
    potencia = pow(I,K);
    K++;
    suma += potencia;
  }
  
  cout<<"LA SUMA TOTAL ES : "<<suma<<endl;
  system("pause");
}
