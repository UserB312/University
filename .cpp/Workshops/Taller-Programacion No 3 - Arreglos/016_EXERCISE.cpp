#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

void titles();
int MENU();
void CREATE(int array[10][10], int x, int y);
void CALCULO(int array[10][10], int x, int y);

main(){
  char OP = 'S';
  int MATRIZ[10][10],num_row = 0,num_column = 0,OPCION;
  
  while( OP == 'S'){
    titles();
    OPCION = MENU();
    
    switch(OPCION){
      case 1 :  titles();
                gotoxy(18,6); cout << "CREAR - MATRIZ";
                  do{
                    gotoxy(18,8); cout << "                                    ";
                    gotoxy(18,8); cout << "DIGITE EL NUMERO DE FILAS : "; cin >> num_row;
                    gotoxy(18,14); cout << "ERROR...VALOR FUERA DE RANGO";
                  }while((num_row < 0) || (num_row > 10));
                    gotoxy(18,14); cout << "                                              ";
                  do{
                    gotoxy(18,9); cout << "                                    ";
                    gotoxy(18,9); cout << "DIGITE EL NUMERO DE COLUMNAS : "; cin >> num_column;
                    gotoxy(18,14); cout << "ERROR...VALOR FUERA DE RANGO";
                  }while((num_column < 0) ||(num_column > 10));
                    gotoxy(18,14); cout << "                                              ";
                CREATE(MATRIZ,num_row,num_column);
                break;
              
      case 2 :  if (num_row == 0){
                    titles();
                    gotoxy(18,7); cout << "NO SE HA CREADO NINGUNA MATRIZ";
                    gotoxy(18,10); cout << "PULSE CUALQUIER TECLA PARA CONTINUAR...";
                    getch();
                }else{
                  titles();
                  gotoxy(18,6); cout << "MOSTRAR";
                  CALCULO(MATRIZ,num_row,num_column);
                  getch();
                }
                
                break;
                
      case 3 :  OP = 'N';
                break;
        
    }
  }
}


void titles(){
  system("cls");
  system("color F5");
  gotoxy(24,4); cout << "</PROBLEMA No 16/>";
  gotoxy(18,5); cout << "BIDIMENSIONAL - UNIDIMENSIONAL";
}

int MENU(){
    int OPTION;
    gotoxy(18,7); cout << "1. CREAR MATRIZ";
    gotoxy(18,8); cout << "2. MOSTRAR";
    gotoxy(18,9); cout << "3. SALIR DEL PROGRAMA";
    
    do{
      gotoxy(18,11); cout << "                                               ";
      gotoxy(18,11); cout << "DIGITE LA OPCION A REALIZAR : "; cin >> OPTION;
      gotoxy(19,14); cout << "ERROR...VALOR FUERA DE RANGO";
    }while((OPTION < 1) || (OPTION > 3));
    gotoxy(19,14); cout << "                                        ";
    return OPTION;
}

void CREATE(int array[10][10], int x, int y){                
    for (int i = 0; i < x; i++){
      for (int j = 0; j < y; j++){
        gotoxy(18,11); cout << "                                                                      ";
        gotoxy(18,11); cout << "DIGITE UN VALOR PARA LA POSICION "<<"["<<i<<"]["<<j<<"]"<<" : ";
        gotoxy(60,11); cin >> array[i][j];
      }
    }
}

void CALCULO(int array[10][10], int x, int y){
  
  int F = 8;
  gotoxy(18,F); cout << "MATRIZ : ";
  for (int i = 0; i < x; i++){
    gotoxy(29,F);
    for (int j = 0; j < y; j++){
      printf("%3d %3s", array[i][j], "  ");
    }
    F++;
  }
  
  gotoxy(18,15); cout << "DIAGONAL SECUNDARIA : ";
  for (int i = 0; i < x; i++){
    for (int j = 0; j < y; j++){
      
      }
    }
  }
  
  
  gotoxy(18,17); cout << "VECTOR RESULTANTE : ";
  for (int i = 0; i < x; i++){
    for (int j = 0; j < y; j++){
      cout << array[i][j] << "   ";
     }
  }
  
  gotoxy(18,20); cout << "PULSE CUALQUIER TECLA PARA CONTINUAR...";
}

//               IDEA 


gotoxy(18,15); cout << "DIAGONAL SECUNDARIA : ";
  for (int i = 0; i < x; i++){
    for (int j = 0; j < y; j++){
      
      }
    }
  }
  
