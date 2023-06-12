/*******************************************************************************
 *                                                                             *
 *   PERMITE CREAR, ORDENAR(Metodo Lineal) E IMPRIMIR LOS VALORES DE UN        *
 *   VECTOR DE MAX = 10 ELEMENTOS. USA FUNCIONES PARA CREAR E IMPRIMIR EL      *
 *   VECTOR                                                                    *
 *   PROBLEMA No 5 DEL TALLER No 3                                             *
 *                                                                             *
 *******************************************************************************/

#include <windows.h>                    
#include <iostream>                     
#include <conio.h>                      

using namespace std;                     

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

void TITULOS();
int MENU();
int CREAR(int VECTOR[10]);
void IMPRIMIR(int VECTOR[10], int N);

main()
  {
  int TIPO ;
  char OP = 'S';
  int VECTOR[10], N = 0;
  while  ( OP == 'S' )
    {
    TITULOS();
    TIPO = MENU();
    switch ( TIPO ) {
     
       case 1 : N = CREAR(VECTOR);
	            break ;
       case 2 : IMPRIMIR(VECTOR, N);
	            break ;
       case 3 : OP = 'N' ;
	            break ;
       }
    }
  }

void   TITULOS()
   {
   system("cls");
   system("color F1");
   gotoxy(22,6) ; cout <<"CREAR, ORDENAR E IMPRIMIR UN VECTOR";
   gotoxy(34,7);  cout <<"METODO LINEAL" ;
   }
   
int MENU()
   {
   	int TIPO;
   	gotoxy(26,10); cout << "1 - ASIGNAR VALORES AL VECTOR" ;
    gotoxy(26,11); cout << "2 - ORDENAR VECTOR E IMPRIMIR";
    gotoxy(26,13); cout << "3 - SALIR DEL PROGRAMA";
    do {
       gotoxy(24,16); cout << "Seleccine una alternativa :  ";
       gotoxy(54,16); cin>> TIPO;
    } while ((TIPO < 1 ) || (TIPO > 3));
    return TIPO;
   }

int CREAR(int VECTOR[10])
  {
  int I, N ;
  TITULOS();
  gotoxy(27,9) ; cout << "ASIGNAR VALORES AL VECTOR";  
  do {
     gotoxy(15,13); cout << "Digite el No de Elemetos, Max = 10 :      ";
     gotoxy(52,13); cin >> N;
  } while ((N < 0 ) || (N > 10));
  gotoxy(15,13); cout << "                                               ";
 
  for ( I = 0 ; I < N ; I++ )
      {
      gotoxy(15,15); cout << "Introducir un valor Entero para la posicion "<< I << " [    ]";
      gotoxy(62,15); cin >> VECTOR[I] ;
      }
     return N;
   }

void IMPRIMIR(int VECTOR[10], int N)
   {
   int I, K, AUX;
   if ( N == 0)
      {
      gotoxy (20,24); cout << " No existen elementos en la Listas";
      getch();
      }
    else
	  {
	  TITULOS();
      gotoxy(26,10) ; cout << "ORDENAR VECTOR E IMPRIMIR" ;
            	   
      // **** RUTINA DE IMPRIMIR VECTOR INICIAL ****	
             	   
      gotoxy(25,14); cout << "VECTOR  INICIAL = " ;
      for ( I = 0 ; I < N ; I++ )
	      cout<< VECTOR[I] << "   " ;
	                
	  // **** RUTINA DE ORDENAMIENTO - METODO LINEAL ****  
						               
      for ( K= 0 ; K < N-1 ; K++ )
        for ( I = K + 1 ; I < N ; I++ )
	      if (VECTOR[K] > VECTOR[I])
	         {
	         AUX = VECTOR[K] ;
	         VECTOR[K] = VECTOR[I] ;
	         VECTOR[I] = AUX;
	         }  
	
	  // **** RUTINA DE IMPRIMIR VECTOR ORDENADO ****	
						   
	  gotoxy(25,17); cout << "VECTOR ORDENADO = " ;
      for ( I = 0 ; I < N ; I++ )
	    cout<< VECTOR[I] << "   " ;			    
	                   
	  gotoxy(25,22); cout << "Pulse cualquier tecla para salir ";
      getch();
      }
   }
