/*********************************************************
 *    Recibe un numero y determina si es Primo           *
 *    Problema No 10 del Taller No 1                     *
 *********************************************************/

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
  int NUMERO, K, SW ;
  char OP = 'S' ;
  while (OP == 'S') 
	 {
	 system("cls"); 	
     system("color F1");
     gotoxy(24,4); cout<<"CALCULA SI UN NUMERO ES PRIMO";
     
     do {
	    gotoxy(20,10); cout<< "DIGITE VALOR  :            "; 
		  gotoxy(36,10); cin >> NUMERO ;
	    gotoxy(20,22); cout <<"ERROR...... EL VALOR DEBE SER POSITIVO";
     } while (NUMERO < 0);
     gotoxy(20,22); cout <<"                                        ";
     SW = 0 ;
     for ( K = 2; K < NUMERO; K++)
        if ( NUMERO % K == 0) 
           SW = 1;
     switch (SW) {
	     case 0 : gotoxy(20,15); cout << NUMERO << " NO ES UN NUMERO PRIMO ";
	              break;
	     case 1 : gotoxy(20,15); cout << NUMERO << " SI ES UN NUMERO PRIMO ";
	   }
     do {
       	gotoxy(27,20); cout<< "DESEA CONTINUAR  S/N : " ;
       	OP = getche();
       	OP = toupper(OP);
     }  while ((OP != 'S') && (OP != 'N'));
	}
  }

