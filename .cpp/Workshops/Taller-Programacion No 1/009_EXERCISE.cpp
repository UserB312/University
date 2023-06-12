
//3)   SOLUCION :  OTRA VERSION CON VALIADACIOENES PARA ALGUNAS VARIABLES
//                                SOLUCI?N

/********************************************************************************
 *                                                                              *
 *   ESTE PROGRAMA PERMITE CAPTURAR VALORES PARA UN GRUPO DE VARIABLES, Y LO    *
 *   HACE DE MANERA REPETITIVA. ASIMISMO, VALIDA EL VALOR RECIBIDO PARA CEDULA, *
 *   TELEFONO, SEXO y ESTADO CIVIL.                                             *
 *   PROBLEMA No 3 DEL TALLER No 1                                              *
 *                                                                              *
 ********************************************************************************/

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
  long CEDULA ;
  char NOMBRE[20], DIRECCION[30], EST_CIVIL, SEXO;
  unsigned  TEL;
  char OP = 'S' ;
  while (OP == 'S') 
    {
    system("cls"); 	//limpia pantalla
    system("color F0");
    gotoxy(25,4); cout<<"UNIVERSIDAD POPULAR DEL CESAR";
    gotoxy(24,5); cout<<"PROGRAMA INGENIERIA DE SISTEMAS"; 
    gotoxy(20,8); cout<< "CEDULA     : ";
    gotoxy(20,9); cout<< "NOMBRE     : ";
    gotoxy(20,10); cout<< "DIRECCION  : " ;
    gotoxy(20,11); cout<< "TELEFONO   : " ;
    gotoxy(20,12); cout<< "SEXO  M/F  : " ;
    gotoxy(20,13); cout<< "EST. CIVIL : " ;
    do {
       gotoxy(33,8) ; cout << "              ";	
       gotoxy(33,8) ; cin >> CEDULA;
       gotoxy(20,22) ; cout<< "Error .... valor fuera de rango ";
    } while (CEDULA <= 0) ;
    gotoxy(20,22); cout <<"                                   ";
    cin.sync();
    gotoxy(33,9);  gets(NOMBRE);
    gotoxy(33,10); gets(DIRECCION);
    do {
       gotoxy(33,11); cout << "           ";
       gotoxy(33,11); cin >> TEL;
       gotoxy(20,22); cout<< "Error .... valor fuera de rango ";
    } while ( TEL > 4200000000) ;
    gotoxy(20,22); cout <<"                                   ";
    cin.sync();
    do {
       gotoxy(33,12); cout<< " " ;
       gotoxy(20,20); cout << " Digite : M-> Masculino o F -> Femenino " ;
       gotoxy(33,12); SEXO = getchar();
       SEXO = toupper(SEXO) ;
    } while ((SEXO != 'M') && ( SEXO != 'F'));
    gotoxy(20,20); cout <<"                                              ";
    do {
       gotoxy(33,13); cout<< " " ;
       gotoxy(20,22); cout << " Digite : C-> Casado,  S -> Soltero, U -> Union LIbre " ;
       gotoxy(33,13); EST_CIVIL= getche();
       EST_CIVIL = toupper(EST_CIVIL) ;
    } while ((EST_CIVIL != 'C') && ( EST_CIVIL != 'S') && ( EST_CIVIL != 'U'));
    gotoxy(20,22); cout <<"                                                                          ";
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
