/****************************************************************
*                                                               *
*   CALCULA TODAS LAS TABLAS DE MULTIPLICAR DEl 1 Al 12         *
*                                                               *
*   PROBLEMA No 2 DEL TALLER No 1                               *
*                                                               *
*****************************************************************/

#include <iostream>
#include <conio.h>
#include <windows.h>  

using namespace std; 

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}

main() {
	
    int J, K, T, F, N ;
    char OP = 'S';
    for ( N = 1 ; ((N <= 12 )&& ( OP == 'S')) ; N++)
	   {
         system("cls");
         system("color F5");
         gotoxy(31,5); cout << "TABLA DE MULTIPLICAR DEL " <<  N;
         F = 8 ;
         for (J = 1 ; J <= 12 ; J++)
             {
             T = N * J ;
             gotoxy(34,F); printf(" %2d %3s %2d %3s %2d", J, " * ", N, " = ", T) ;
             F++ ;
	     }
	 do {
            gotoxy(31,F+3); cout<< "DESEA CONTINUAR  S/N : " ;
            OP = getch();
            OP = toupper(OP);
         }  while ((OP != 'S') && (OP != 'N'));
			
	}
     }

