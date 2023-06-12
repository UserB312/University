/*********************************************************************
 *                                                                   *
 *  PERMITE CREAR Y CONSULTAR LOS VALORES DE UNA MATRIZ Max = 10x10  *
 *                                                                   *
 *  PROBLEMA No 9 DEL TALLER No 3                                    *
 *********************************************************************/

#include <windows.h>                     
#include <iostream>                    
#include <conio.h>                   

using namespace std;                 

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}

main()
   {
   char  OP = 'S';
   int   MATRIZ[10][10], NF = 0, NC = 0, I, K , F , TIPO;
   while ( OP == 'S' )
     {
     system("cls");
     system("color B0");
     gotoxy(25,6); cout <<"CREAR Y CONSULTAR  UN ARREGLO";
     gotoxy(28,7); cout <<"BIDIMENSIONAL - MATRIZ" ;
     gotoxy(26,10); cout << "1 - ASIGNAR VALORES A LA MATRIZ" ;
     gotoxy(26,11); cout << "2 - CONSULTAR VALORES DE LA MATRIZ";
     gotoxy(26,13); cout << "3 - SALIR DEL PROGRAMA";
     do {
           gotoxy(24,16); cout << "Seleccine una alternativa :  [ _ ]";
           gotoxy(55,16); cin >> TIPO ;
     }  while ((TIPO < 1 ) || (TIPO > 3));
     
     switch ( TIPO ) {
     	
       case  1 :system("cls");
                system("color B0");
                gotoxy(25,6); cout <<"CREAR Y CONSULTAR  UN ARREGLO";
                gotoxy(28,7); cout <<"BIDIMENSIONAL - MATRIZ" ;
	            gotoxy(26,9); cout << "ASIGNAR VALORES A LA MATRIZ";
	            do {
				   gotoxy(15,13); cout << "Digite el No de Filas, Max = 10    :      ";
	               gotoxy(52,13); cin >> NF;
	            } while ((NF < 0 ) || (NF > 10));
	            
	            do {
				   gotoxy(15,14); cout << "Digite el No de Columnas, Max = 10 :      ";
	               gotoxy(52,14); cin >> NC;
	            } while ((NF < 0 ) || (NC > 10));
	            gotoxy(15,13); cout << "                                               ";
	            gotoxy(15,14); cout << "                                               ";
	            
	            for ( I = 0 ; I < NF ; I++ )
                    for ( K = 0 ;  K < NC ; K++ )
	                    {
                        gotoxy(15,15); cout << "Introducir un valor en las posiciones " << I << " y "<< K <<" [   ]" ;
	                    gotoxy(60,15); cin >> MATRIZ[I][K] ;
	                    }
	            break ;
	            
      case  2 : if ( NF == 0)
	               {
	               gotoxy (20,24); cout << " No existen elementos en la Matriz";
	               getch();
				   }
				 else
				   {
	                 system("cls");
                   system("color B0");
                   gotoxy(25,6); cout <<"CREAR Y CONSULTAR  UN ARREGLO";
                   gotoxy(28,7); cout <<"BIDIMENSIONAL - MATRIZ" ;
	                 gotoxy(24,9); cout << "CONSULTAR VALORES DE LA MATRIZ" ;
	                 F = 13 ;
	                 gotoxy(20,F); cout << "MATRIZ = ";
	                 for ( I = 0 ; I < NF ; I++ )
	                     {
					             gotoxy(30,F) ;
	                       for ( K = 0 ; K < NC ; K++ )
	                         printf ("%3d %3s", MATRIZ[I][K], "   ") ;
	                       F++;
	                      }
	                  gotoxy(20,F+3); cout << "Pulse cualquier tecla para salir";
                    getch();
  	                }
	                 break ;
      case  3 : OP = 'N' ;
	            break ;
           }
       }
   }
