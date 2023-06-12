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
  int matriz[10][10],OPTION,suma = 0,mayor = 0,menor = 999,NF,NC,F,AUX;
  
  while(OP == 'S'){
    system("cls");
    system("color F5");
    gotoxy(30,3); cout<<"</VECTOR/>";
    gotoxy(21,5); cout<<"1. ASIGNAR VALORES AL VECTOR";
    gotoxy(21,6); cout<<"2. MOSTRAR VALORES DEL VECTOR";
    gotoxy(21,7); cout<<"3. SALIR";
    do{
      gotoxy(50,9); cout<<"                                           ";
      gotoxy(20,9); cout<<"DIGITE LA OPCION A REALIZAR : ";cin>>OPTION;
      gotoxy(25,15); cout<<"ERROR...VALOR FUERA DE RANGO";
    }while((OPTION<0) || (OPTION>3));
    
    switch(OPTION){
      case 1: system("cls");
              system("color F5");
              gotoxy(35,3); cout<<"</VECTOR/>";
              gotoxy(27,5); cout<<"ASIGNAR VALORES A LA MATRIZ";
              do{
                gotoxy(27,7); cout<<"DIGITE EL NUMERO DE FILAS : "; cin>>NF;
              } while((NF<0) || (NF>10));
              do{
                gotoxy(27,8); cout<<"DIGITE EL NUMERO DE COLUMNAS : "; cin>>NC;
              } while((NC<0) || (NC>10));
              
              gotoxy(25,7); cout<<"                                                         ";
              gotoxy(25,8); cout<<"                                                         ";
              for (int i = 0; i < NF; i++){
                for(int j = 0; j < NC; j++){
                  gotoxy(57,7); cout<<"     ";
                  gotoxy(16,7); cout<<"DIGITE UN NUMERO PARA LA POSICION ["<<i<<"]["<<j<<"]"<<" : ";
                  cin>>matriz[i][j];
                  suma+=matriz[i][j];
                }
              }
              break;
              
      case 2: system("cls");
              system("color F5");
              gotoxy(35,3); cout<<"</VECTOR/>";
              
              /*ORDENAMIENTO BIDIMENSIONAL
              for (int i = 0; i < NF; i++){
                for(int j = 0; j < NC; j++){ 
                  for (int k = 0; k < NF; k++){
                     for(int m = 0; m < NC; m++){ 
                      if (matriz[i][j] > matriz[k][m]){
                        matriz[k][m] = matriz[k][m];
                      }else{
                        int aux = matriz[k][m];
                        matriz[k][m] = matriz[i][j];
                        matriz[i][j] = aux;
                      }
                    }
                  }
                }
              }
              for (int i = 0; i < N; i++){
                for(int j = i + 1; j < N; j++){
                  if(vector[j] > vector[i]){
                    AUX = vector[j]
                    vector[j] = vector[i]
                    vector[i] = AUX;
              */
              //IMPRIMIR MATRIZ
              F = 7;
              gotoxy(23,F); cout<<"</MATRIZ/> : ";
              for (int i = 0; i < NF; i++){
                gotoxy(33,F);
                for(int j = 0; j < NC; j++){ 
                  int valor = matriz[i][j];
                  printf("%3d %3s",matriz[i][j],"  ");
                    if (valor < menor) {
                        menor = valor;
                        }
                    if (valor > mayor) {
                        mayor = valor;
                        }
                }
                F++;
              }
              
              gotoxy(21,13); cout<<"LA SUMA DE TODOS LOS ELEMENTOS DEL VECTOR ES : "<<suma;
              gotoxy(21,14); cout<<"EL NUMERO MENOR DEL VECTOR ES : "<<menor;
              gotoxy(21,15); cout<<"EL NUMERO MAYOR DEL VECTOR ES : "<<mayor;
              
              gotoxy(28,22); cout << "Pulse cualquier tecla para salir";
              getch();
              break;
      case 3:  OP = 'N';
              break;       
    }
  }
}

