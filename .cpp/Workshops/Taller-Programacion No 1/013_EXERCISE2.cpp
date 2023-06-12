/****************************************************************************
 *  Recibir desde el teclado : La CEDULA, El NOMBRE,  el SEXO ( M o F)      *
 *  y el ESTADO CIVIL  ( C -> Casado, S -> Soltero, U -> Uni?n Libre ) de   *
 *  un grupo de personas. Se desea conocer el N?mero de personas por SEXO   *
 *  y por ESTADO   CIVIL.  (PROBLEMA No 13 DEL TALLER No 1)                 *
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

main(){
	long CEDULA ;
	char NOMBRE[20], DIRECCION[30], EST_CIVIL, SEXO;
	unsigned  TEL;
	int  ContM = 0, ContF= 0, ContC = 0, ContS = 0, ContU = 0;
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
     
        switch ( SEXO) {
		
            case 'M' : ContM = ContM + 1;
                       break;
            case 'F' : ContF = ContF + 1;
           }
        
		switch ( EST_CIVIL) {
		
		    case 'C' : ContC = ContC + 1 ;
		               break;
		    case 'S' : ContS = ContS +1 ;
		               break;
		    case 'U' : ContU = ContU  + 1;
           } 
         
        do {
        	gotoxy(27,20); cout<< "DESEA CONTINUAR  S/N : " ;
        	OP = getche();
        	OP = toupper(OP);
        }  while ((OP != 'S') && (OP != 'N'));
	}
	system("cls"); 	
    system("color F1");
    gotoxy(29,4);  cout<<"E S T A D I S T I C A";
    gotoxy(26,6);  cout<<"CIUDAD DE VALLEDUPAR - CESAR";
    gotoxy(23,9);  cout <<" Numero de Personas Maculinas   = " << ContM;
    gotoxy(23,10); cout <<" Numero de Personas Femeninas   = " << ContF;
    gotoxy(23,11); cout <<" Numero de Personas Casadas     = " << ContC;
    gotoxy(23,12); cout <<" Numero de Personas Solteras    = " << ContS;
    gotoxy(23,13); cout <<" Numero de Personas Union Libre = " << ContU;
    gotoxy(26,18); cout << "PULSE CUALQUIER TECLA PARA TERMINAR";
    getch();
 }
