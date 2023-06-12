/****************************************************************************
 *  Recibir desde el teclado :  El NOMBRE,  el SEXO ( M o F) y el ESTADO    *
 *  CIVIL  ( C -> Casado, S -> Soltero, U -> Uni?n Libre, V -> Viudo ) de   *
 *  un grupo de personas. Se desea conocer el N?mero de personas por        *
 *	Estado Civil dentro de cada Sexo.  (PROBLEMA No 14 DEL TALLER No 1)     *
 *                                                                          *
 *  OBJETIVO : HACER USO DEL switch                                         *
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
  char NOMBRE[20], EST_CIVIL, SEXO;
  int  MC = 0, MS = 0, MU = 0, MV = 0, FC = 0, FS = 0, FU = 0, FV = 0;
  char OP = 'S' ;
  while (OP == 'S') 
    {
    system("cls"); 	
    system("color F1");
    gotoxy(29,4); cout<<"E S T A D I S T I C A";
    gotoxy(26,6); cout<<"CIUDAD DE VALLEDUPAR - CESAR"; 
    gotoxy(20,10); cout<< "NOMBRE     : ";
    gotoxy(20,11); cout<< "SEXO  M/F  : " ;
    gotoxy(20,12); cout<< "EST. CIVIL : " ;
    cin.sync();
    gotoxy(33,10); gets(NOMBRE);
    do {
       gotoxy(33,11); cout<< " " ;
       gotoxy(20,20); cout << " Digite : M-> Masculino o F -> Femenino " ;
       gotoxy(33,11); SEXO = getchar();
       SEXO = toupper(SEXO) ;
    } while ((SEXO != 'M') && ( SEXO != 'F'));
    gotoxy(20,20); cout <<"                                              ";
    cin.sync();
    do {
       gotoxy(33,12); cout<< " " ;
       gotoxy(20,20); cout << " Digite : C-> Casado,  S -> Soltero, V -> Viudo, U -> Union LIbre " ;
       gotoxy(33,12); EST_CIVIL= getchar();
       EST_CIVIL = toupper(EST_CIVIL) ;
    } while ((EST_CIVIL != 'C') && ( EST_CIVIL != 'S') && (EST_CIVIL != 'V') && ( EST_CIVIL != 'U'));
    gotoxy(20,20); cout <<"                                                                          ";
        
    switch( SEXO ) {
    
	  case 'M': switch( EST_CIVIL) {
		
		            case 'C' : MC = MC +1;
				               break;
				    case 'S' : MS = MS +1;
				               break;			
				    case 'U' : MU = MU +1;
				               break;
				    case 'V' : MV = MV +1;
				               break;
			        }
		            break;
	      
	  case 'F': switch( EST_CIVIL) {
			
			        case 'C' : FC = FC +1;
				               break;
				    case 'S' : FS = FS +1;
				               break;			
				    case 'U' : FU = FU +1;
				               break;
				    case 'V' : FV = FV +1;
				               break;
			        }
    	}
	
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
    gotoxy(20,13); cout <<" Numero de Personas Maculinas Viudas      = " << MV;
    gotoxy(20,14); cout <<" Numero de Personas Femeninas Casadas     = " << FC;
    gotoxy(20,15); cout <<" Numero de Personas Femeninas Solteras    = " << FS;
    gotoxy(20,16); cout <<" Numero de Personas Femeninas Union Libre = " << FU;
    gotoxy(20,17); cout <<" Numero de Personas Femeninas Viudas      = " << FV;
    gotoxy(29,22); cout << "PULSE CUALQUIER TECLA PARA TERMINAR";
    getch();
 }

