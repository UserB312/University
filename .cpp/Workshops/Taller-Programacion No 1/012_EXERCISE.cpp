/*********************************************************
 *    Recibe un numero y determina si es PAR o IMPAR     *
 *    Problema 12 del Taller No 1                        *
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
  long NUMERO ;
  char OP = 'S' ;
  while (OP == 'S') 
	 {
	 system("cls"); 	
     system("color F5");
     gotoxy(24,4); cout<<"CALCULA SI UN NUMERO ES PAR O IMPAR";
     gotoxy(20,10); cout<< "DIGITE VALOR  : "; cin >> NUMERO ;
     
     switch ( NUMERO % 2)  {
	    case 0 : gotoxy(20,15); cout << NUMERO << "  ES UN NUMERO PAR ";
	             break;
	    case 1 : gotoxy(20,15); cout << NUMERO << "  ES UN NUMERO IMPAR ";
	    }
		            
     do {
       	gotoxy(27,20); cout<< "DESEA CONTINUAR  S/N : " ;
       	OP = getche();
       	OP = toupper(OP);
     }  while ((OP != 'S') && (OP != 'N'));
	}
  }


