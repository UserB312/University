//Hacer un programa que para un grupo de datos, permita Leer desde el teclado: 
//CEDULA, NOMBRE, DIRECCI?N, TELEFONO, SEXO y EST_CIVIL. Una vez capturado los 
//datos, imprimirlos por pantalla. 
/*******************************************************************************
 *                                                                             *
 *   ESTE PROGRAMA PERMITE CAPTURAR VALORES PARA UN GRUPO DE VARIABLES, Y LO   *
 *   HACE DE MANERA REPETITIVA.                                                *
 *   PROBLEMA No 3 DEL TALLER No 1                                             *
 *                                                                             *
 *******************************************************************************/

#include <windows.h>     // libreria para gotoxy(USHORT x,USHORT y) 
#include <iostream>      // entrada salida (cin>> y el cout<<)
#include <conio.h>       // entrada para getche getch

using namespace std;     // esta directiva es obligatoria para cin>> y cout<< , no se te olvide

int gotoxy(USHORT x,USHORT y){                                  // Esta funcion es obligatoria
COORD cp={x,y};                                                 // para que pueda funcionar la
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   // sentencia gotoxy
}

main() 
  {
  long CEDULA ;
  char NOMBRE[20], DIRECCION[30], SEXO, EST_CIVIL;
  char OP = 'S' ;
  unsigned  TEL;
  while (OP == 'S') 
	{
	system("cls"); 	//limpia pantalla
    system("color F1");
    gotoxy(25,4); cout<<"UNIVERSIDAD POPULAR DEL CESAR";
    gotoxy(24,5); cout<<"PROGRAMA INGENIERIA DE SISTEMAS"; 
    gotoxy(20,8); cout<< "CEDULA     : ";
    gotoxy(20,9); cout<< "NOMBRE     : ";
    gotoxy(20,10); cout<< "DIRECCION  : " ;
    gotoxy(20,11); cout<< "TELEFONO   : " ;
    gotoxy(20,12); cout<< "SEXO  M/F  : " ;
    gotoxy(20,13); cout<< "EST. CIVIL : " ;
    gotoxy(33,8) ; cin >> CEDULA;
	cin.sync();
    gotoxy(33,9); gets(NOMBRE);
    gotoxy(33,10); gets(DIRECCION);
    gotoxy(33,11) ;cin >> TEL;
	cin.sync();
    gotoxy(33,12); SEXO = getchar();
    gotoxy(33,13); EST_CIVIL= getche();
    gotoxy(34,15); printf( "DATOS LEIDOS");
    gotoxy(20,17); cout<< "CEDULA     = " << CEDULA;
	gotoxy(20,18); cout<< "NOMBRE     = " << NOMBRE;
	gotoxy(20,19); cout<< "DIRECCION  = " << DIRECCION ;
	gotoxy(20,20); cout<< "TELEFONO   = " << TEL;
	gotoxy(20,21); cout<< "SEXO       = " << SEXO ;
	gotoxy(20,22); cout<< "EST. CIVIL = " << EST_CIVIL ; 
    do {
      	gotoxy(27,24); cout<< "DESEA CONTINUAR  S/N : " ;
      	OP = getche();
      	OP = toupper(OP);
    }  while ((OP != 'S') && (OP != 'N'));
	}
}


