/****************************************************************************
 *  Recibir desde el teclado : La CEDULA, El NOMBRE, La DIRECCIÓN, El No.   *
 *  de TELEFONO, El SEXO ( M o F) y el ESTADO CIVIL ( C -> Casado, S ->     *
 *  Soltero, U -> Unión Libre ) de un grupo de personas. Se desea conocer   *
 *  el Número de  personas  por  Estado Civil  dentro de cada SEXO.         *
 *  (PROBLEMA No 14 DEL TALLER No 1)                                        *
 *                                                                          *
 ****************************************************************************/

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
  int  MC = 0, MS = 0, MU = 0, FC = 0, FS = 0, FU = 0;
  unsigned  TEL;
  char OP = 'S' ;
  while (OP == 'S') 
    {
    system("cls"); 	
    system("color F1");
    gotoxy(29,4); cout<<"E S T A D I S T I C A";
    gotoxy(26,6); cout<<"CIUDAD DE VALLEDUPAR - CESAR";
    gotoxy(20,10); cout<< "CEDULA     : ";
    gotoxy(20,11); cout<< "NOMBRE     : ";
    gotoxy(20,12); cout<< "DIRECCION  : " ;
    gotoxy(20,13); cout<< "TELEFONO   : " ;
    gotoxy(20,14); cout<< "SEXO  M/F  : " ;
    gotoxy(20,15); cout<< "EST. CIVIL : " ;
    do {
       gotoxy(33,10) ; cout << "              ";	
       gotoxy(33,10) ; cin >> CEDULA;
       gotoxy(20,22); cout<< "Error .... valor fuera de rango ";
    } while (CEDULA <= 0) ;
    //getch();
    gotoxy(20,22); cout <<"                                   ";
    cin.sync();
    gotoxy(33,11); gets(NOMBRE);
    gotoxy(33,12); gets(DIRECCION);
    do {
       gotoxy(33,13); cout << "           ";
       gotoxy(33,13) ;cin >> TEL;
       gotoxy(20,22); cout<< "Error .... valor fuera de rango ";
    } while (TEL <= 0);
    gotoxy(20,22); cout <<"                                   ";
    cin.sync();
    do {
       gotoxy(33,14); cout<< " " ;
       gotoxy(20,20); cout << " Digite : M-> Masculino o F -> Femenino " ;
       gotoxy(33,14); SEXO = getchar();
       SEXO = toupper(SEXO) ;
    } while ((SEXO != 'M') && ( SEXO != 'F'));
    gotoxy(20,20); cout <<"                                              ";
    cin.sync();
    do {
       gotoxy(33,15); cout<< " " ;
       gotoxy(20,20); cout << " Digite : C-> Casado,  S -> Soltero, U -> Union LIbre " ;
       gotoxy(33,15); EST_CIVIL= getchar();
       EST_CIVIL = toupper(EST_CIVIL) ;
    } while ((EST_CIVIL != 'C') && ( EST_CIVIL != 'S') && ( EST_CIVIL != 'U'));
    gotoxy(20,20); cout <<"                                                                          ";
       
    if ( SEXO == 'M') 
       if ( EST_CIVIL == 'C')
	      MC = MC + 1 ;
		 else
	      if ( EST_CIVIL == 'S')
	         MS = MS + 1 ;
	       else
             MU = MU + 1 ;
      else
	   if ( EST_CIVIL == 'C')
          FC = FC +1 ;
        else
	     if ( EST_CIVIL == 'S')
            FS = FS +1 ;
          else
            FU = FU +1 ;     	   
    do {
       gotoxy(27,20); cout<< "DESEA CONTINUAR  S/N : " ;
       OP = getch();
       OP = toupper(OP);
    }  while ((OP != 'S') && (OP != 'N'));
  }
  system("cls"); 	
  system("color F1");
  gotoxy(29,4); cout<<"E S T A D I S T I C A";
  gotoxy(26,6); cout<<"CIUDAD DE VALLEDUPAR - CESAR";
  gotoxy(20,10); cout <<" Numero de Personas Maculinas Casadas     = " << MC;
  gotoxy(20,11); cout <<" Numero de Personas Maculinas Solteras    = " << MS;
  gotoxy(20,12); cout <<" Numero de Personas Maculinas Union Libre = " << MU;
  gotoxy(20,14); cout <<" Numero de Personas Femeninas Casadas     = " << FC;
  gotoxy(20,15); cout <<" Numero de Personas Femeninas Solteras    = " << FS;
  gotoxy(20,16); cout <<" Numero de Personas Femeninas Union Libre = " << FU;
  gotoxy(29,22); cout << "PULSE CUALQUIER TECLA PARA TERMINAR";
  getch();
 }
