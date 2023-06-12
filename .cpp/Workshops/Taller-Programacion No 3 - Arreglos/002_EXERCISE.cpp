/*****************************************************************************
 *                                                                           *
 *   PERMITE CREAR Y CONSULTAR LOS VALORES DE UN VECTOR MAX = 10 ELEMENTOS   *
 *   USANDO UNA FUNCION PARA CREAR Y OTRA PARA IMPRIMIR                      *
 *                                                                           *
 *   PROBLEMA No 2 DEL TALLER No 3                                           *
 *****************************************************************************/

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
int CREAR(int ARREGLO[10]);
void CONSULTA(int ARREGLO[10], int LONG);

main()
    {
    char OP = 'S';
    int  TIPO, N = 0 ;
    int  VECTOR[10];
    while ( OP == 'S')
        {
        TITULOS();
        TIPO = MENU();
        switch (TIPO) {
            case 1 : N = CREAR(VECTOR);
                     break;
            case 2 : CONSULTA(VECTOR, N );
                	 break;
            case 3 : OP = 'N';
           };
       }
    }
  
  
void TITULOS()
   {
   system("cls");
   system("color F1");
   gotoxy(25,6) ; cout <<"CREAR Y CONSULTAR UN ARREGLO";
   gotoxy(28,7);  cout <<"UNIDIMENSIONAL - VECTOR" ;
   }
  
  int MENU()
   {
   int OP ;
   gotoxy(26,10); cout << "1 - ASIGNAR VALORES AL VECTOR" ;
   gotoxy(26,11); cout << "2 - CONSULTAR VALORES DEL VECTOR";
   gotoxy(26,13); cout << "3 - SALIR DEL PROGRAMA";
   do  {
        gotoxy(22,16); cout << "SELECIONE UNA DE LAS ALTERNATIVAS : ";
        cin >> OP ;
        gotoxy(30,22); cout << "VALOR FUERA DE RANGO";
   }  while((OP < 1) || (OP > 5)) ;
   gotoxy(30,22); cout << "                            ";
   return OP ;
   }    

 int CREAR(int ARREGLO[10])
    {
    int I, N;
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
	  gotoxy(62,15); cin >> ARREGLO[I] ;
	  }
	return N;
    } 

 void CONSULTA(int ARREGLO[10], int N)
    {
    int I ;
	if ( N == 0)
	   {
	   gotoxy (20,24); cout << " No existen elementos en la Listas";
	   getch();
	   }
	 else
	   {
	     TITULOS();
       gotoxy(26,9) ; cout << "CONSULTAR VALORES AL VECTOR" ;
       gotoxy(25,14); cout << "VECTOR = " ;
       for ( I = 0 ; I < N ; I++ )
	       cout<< ARREGLO[I] << "   " ;
       gotoxy(25,19); cout << "Pulse cualquier tecla para salir ";
       getch();
       } 
     }
