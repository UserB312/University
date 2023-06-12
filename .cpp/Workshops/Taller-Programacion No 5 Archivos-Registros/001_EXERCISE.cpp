/***********************************************************************
 *  ESTE PROGRAMA ES CREADO CON EL FIN DE CONFIRMAR EL FUNCIONAMIENTO  *
 *  DE ARCHIVOS SECUENCIALES Y LAS OPERACIONES BASICAS.                *
 *                                                                     *
 *  Problema No 1 del Taller No 5         	                           *
 ***********************************************************************/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>  

using namespace std; 

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}

/********************** DECLARACION DE FUNCIONES ********************/

#define  TITULO  "CUEROLANDIA LTDA";
#define  TITULO1 "REGITRO DE LOS DATOS" ;
#define  TITULO2 "CONSULTA SECUENCIAL TIPO LISADO";
#define  TITULO3 "CONSULTA SELECTIVA";
#define  TITULO4 "MODIFICAR";
#define  TITULO5 "ELIMINAR";

/********************** DECLARACION DE FUNCIONES ********************/

int MENU();
void CREAR();
void CONSULTA_LISTADO();
void CONSULTA_SELECTIVA();
void ELIMINAR();
void CAMBIAR();
void MODIFICAR();
void DETALLE();

/********************** DECLARACION DE ESTRUCTURA ********************/

struct ARCHIVO {
   long CEDULA ;
   char NOMBRE[30];
   unsigned TEL;
   char SEXO;
   } ;
   
ARCHIVO EMPLEADO;
fstream DATOS;

/*************************** PROGRAMA PRINCIPAL ***********************/

 main()
   {
   char OP ='S', OPCION;
   int  SW ;
   while (OP == 'S')
      {
      SW = MENU();
      switch( SW ) {

         case 1 : CREAR();
	              break;
         case 2 : CONSULTA_LISTADO();
                  break;
         case 3 : CONSULTA_SELECTIVA();
                  break;
         case 4 : MODIFICAR();
                  break;
         case 5 : ELIMINAR();
                  break;
         case 6 : OP = 'N';

       }
    }
 }
 
 /****************************  FUNCION MENU ****************************/
 
 int MENU()
    {
	int OPCION ;
    system("cls") ;
    system("color F0");
    gotoxy(33,5) ; cout << TITULO;
    gotoxy(37,6) ;cout << "M E N U";
    gotoxy(32,8) ;cout << "ARCHIVO SECUENCIAL";
    gotoxy(28,11) ;cout << "1. CREAR, ADICIONAR EN EL ARCHIVO";
    gotoxy(28,12) ;cout << "2. CONSULTA TIPO LISTADO";
    gotoxy(28,13) ;cout << "3. CONSULTA SELECTIVA";
    gotoxy(28,14) ;cout << "4. MODIFICAR REGISTRO";
    gotoxy(28,15) ;cout << "5. ELIMINAR REGISTRO";
    gotoxy(28,17) ;cout << "6. SALIR ";
    do {
       gotoxy(28,22); cout << "SELECCIONE UNA ALTERNATIVA ";
       cin >> OPCION ;
    } while (( OPCION < 1 ) || ( OPCION > 6 ) ) ;
    return OPCION ;
   }

/********************** FUNCION CREAR, Y ADICIONAR ********************/

 void CREAR(void)
   {
   char OPCION ;
   //DATOS.open("D:\\DATOSBAS\\PERIODO231.DAT", ios :: app);
   ofstream DATOS("D:\\DATOSBAS\\PERIODO231.DAT", ios::app);
   OPCION = 'S' ;
   while ( OPCION == 'S' )
	   {
	   system("cls");
	   gotoxy(33,5) ; cout << TITULO ;
       gotoxy(30,6) ; cout << TITULO1 ;
	   gotoxy(20,11); cout << "CEDULA   : ";
	   gotoxy(20,13); cout << "NOMBRE   : ";
	   gotoxy(20,15); cout << "TELEFONO : ";
	   gotoxy(20,17); cout << "SEXO     : ";
	   cin.sync();
	   do {
	   	  gotoxy(31,11) ; cin >> EMPLEADO.CEDULA;
	      gotoxy(20,24); cout<< "Error .... valor fuera de rango ";
		} while ( EMPLEADO.CEDULA < 0 );
		gotoxy(20,24); cout << "                                ";
		cin.sync();
		gotoxy(31,13); gets(EMPLEADO.NOMBRE);
		gotoxy(31,13); cout << strupr(EMPLEADO.NOMBRE);
		do {
		   gotoxy(31,15) ; cin>> EMPLEADO.TEL ;
		   gotoxy(20,24); cout<< "Error .... valor fuera de rango ";
		} while ( EMPLEADO.TEL < 0 );
		gotoxy(20,24); cout << "                                  ";
		do {
           gotoxy(31,17) ; cout << "  ";
           gotoxy(20,24); cout << " Digite : M-> Masculino o F -> Femenino " ;
		   gotoxy(31,17); EMPLEADO.SEXO = getche();
		   EMPLEADO.SEXO = toupper(EMPLEADO.SEXO) ;
	   } while ((EMPLEADO.SEXO != 'M') && ( EMPLEADO.SEXO != 'F'));
	   gotoxy(20,24); cout << "                                           ";
	   DATOS.write((char *)&EMPLEADO, sizeof(ARCHIVO));
       do {
         gotoxy(28,22); cout << "DESEA CONTINUAR - S/N - ";
		   OPCION = getch();
		   OPCION = toupper(OPCION);
       } while (( OPCION != 'S' ) && ( OPCION != 'N'));
	   }
	   DATOS.close();
   }

   

/********************** FUNCION CONSULTA TIPO LISTADO ********************/

 void CONSULTA_LISTADO(void) 
    {
    int F;	
    ifstream DATOS("D:\\DATOSBAS\\PERIODO231.DAT");
    //DATOS.open("D:\\DATOSBAS\\ENERO.dat", ios :: in  );
    if ( DATOS.fail() )
	   {
	   gotoxy(28,24) ; cout << " NO EXISTE ARCHIVO " ;
	   getch();
	   }
     else
       {
       F = 11;
	   DETALLE();
       while ( ! DATOS.eof() ){
	      DATOS.read((char *)&EMPLEADO,sizeof(ARCHIVO));
	      if ( DATOS.eof() )
	         break;
	      gotoxy(12,F); cout << EMPLEADO.CEDULA;
	      gotoxy(24,F); cout << EMPLEADO.NOMBRE;
		  gotoxy(57,F); cout << EMPLEADO.TEL   ;
		  gotoxy(72,F); cout << EMPLEADO.SEXO  ;
		  if ( F <= 24 )
		     F++ ;
		   else
		    {
		    gotoxy(21,F+=3); cout << "Pulse Cualquier tecla para Continuar";
		    getch();
		    F = 11 ;
		    DETALLE();
		    }
          } 
		gotoxy(21,F+=3); cout << "Pulse Cualquier tecla para Continuar";
		getch();
	    DATOS.close();
       }
   }
   
/************************ FUNCION CONSULTA SELECTIVA **********************/
   
void CONSULTA_SELECTIVA(void)
     {
     int SW ;
     char OPCION = 'S' ;
     long CED ;
     DATOS.open("D:\\DATOSBAS\\ENERO.dat", ios :: in );
     if ( DATOS.fail() )
	    {
	    gotoxy(28,24) ; cout << " NO EXISTE ARCHIVO " ;
	    getch();
        }
	   else
	    {
	    system("cls");
        gotoxy(33,5);  cout << TITULO ;
	    gotoxy(32,6);  cout << TITULO3 ;
	    gotoxy(20,11); cout << "CEDULA    : ";
	    cin.sync();
	    do {
	       gotoxy(31,11) ; cin >> CED ;
	       gotoxy(20,24); cout<< "Error .... valor fuera de rango ";
        } while (( CED < 0 ) || ( CED > 2147483640));
	    gotoxy(20,24); cout << "                                   ";
	    SW = 0;
	    while ( ! DATOS.eof() && SW == 0)
		    {
		    DATOS.read((char *)&EMPLEADO, sizeof(ARCHIVO));  // PERMITE LEER UN REGISTRO
	        if (CED == EMPLEADO.CEDULA)
	           {
	           SW = 1;
	           gotoxy(20,13); cout << "NOMBRE    = " << EMPLEADO.NOMBRE;
	           gotoxy(20,15); cout << "TELEFONO  = " << EMPLEADO.TEL   ;
	           gotoxy(20,17); cout << "SEXO      = " << EMPLEADO.SEXO  ;
	           }
	        }
	    if (SW == 0)
	       {
	       gotoxy(50,11); cout <<"REGISTRO NO EXISTE ";
	       }
	  gotoxy(20,22); cout << "PULSE CUALQUIER TECLA Y REGRESA AL MENU";
	  getch();
      DATOS.close(); 
	  }
    }
    
   
  /************************ FUNCION MODIFICAR REGISTRO **********************/ 
    
 void MODIFICAR(void)
     {
     int SW ;
     char OPCION = 'S' ;
     long CED ;
     DATOS.open("D:\\DATOSBAS\\ENERO.dat", ios :: in );
     ofstream NUEVO("D:\\DATOSBAS\\ENERO2.dat");
     if ( DATOS.fail() )
	    {
	    gotoxy(28,24) ; cout << " NO EXISTE ARCHIVO " ;
	    getch();
        }
	   else
	    {
	    system("cls");
        gotoxy(33,5);  cout <<  TITULO ;
	    gotoxy(36,6);  cout <<  TITULO4 ;
	    gotoxy(20,11); cout << "CEDULA    : ";
	    cin.sync();
	    do {
	       gotoxy(31,11) ; cin >> CED ;
	       gotoxy(20,24); cout<< "Error .... valor fuera de rango ";
        } while (( CED < 0 ) || ( CED > 2147483640));
	    gotoxy(20,24); cout << "                                   ";
	    SW = 0;
	    while ( ! DATOS.eof() )
		    {
		    DATOS.read((char *)&EMPLEADO, sizeof(ARCHIVO));  // PERMITE LEER UN REGISTRO
		    if ( DATOS.eof() )
	           break;
	        if (CED == EMPLEADO.CEDULA)
	           {
	           SW = 1;
	           gotoxy(20,13); cout << "NOMBRE   = " << EMPLEADO.NOMBRE;
	           gotoxy(20,15); cout << "TELEFONO = " << EMPLEADO.TEL   ;
	           gotoxy(20,17); cout << "SEXO     = " << EMPLEADO.SEXO  ;
	           CAMBIAR();
	           gotoxy(50,11); cout << "REGISTRO MODIFICADO";
	           }
	        
	        NUEVO.write((char *)&EMPLEADO,sizeof(ARCHIVO));
	        }
	    if (SW == 0)
	       {
	       gotoxy(50,11); cout <<"REGISTRO NO EXISTE ";
	       }
	  gotoxy(20,24); cout << "PULSE CUALQUIER TECLA Y REGRESA AL MENU";
	  getch();
      DATOS.close();
	  NUEVO.close(); 
	  remove("D:\\DATOSBAS\\ENERO.dat");
	  rename("D:\\DATOSBAS\\ENERO2.dat", "D:\\DATOSBAS\\ENERO.dat");
	  }
    }
    
 /*********************************** CAMBIAR **********************************/ 
 
 void CAMBIAR(void)
    {
   	int OP = 1,F = 13;
	char TECLA;
	gotoxy(20,21);cout<<"UTILICE : Flechas Abajo y Arriba Para Desplazarse, ENTER para seleccionar y Terminar";
	do {
	   gotoxy(31,F); TECLA = getch();
	   if ( kbhit()) 
	      {	
		  TECLA = getch();
		  if (TECLA == 80)
		     {
		     OP++;
		     F+=2;
		     }
		  if (TECLA == 72)
			 {
			 OP--;
		     F-=2;
		     }
		  if ((OP > 3) ||  (OP < 1))
			 {
			 OP = 1;
		     F = 13;
			} 
		  }
	} while ((TECLA == 80) ||(TECLA == 72)) ; 
	
	
	switch (OP){ 
	    case 1: cin.sync();
		        gotoxy(31,13); cout << "                                ";
	           	gotoxy(31,13); gets(EMPLEADO.NOMBRE);
	           	gotoxy(31,13); cout << strupr(EMPLEADO.NOMBRE);
		        break;
		case 2: do {
			       gotoxy(31,15) ; cout <<"           " ;
		           gotoxy(31,15) ; cin>> EMPLEADO.TEL ;
		           gotoxy(20,24); cout<< "Error .... valor fuera de rango ";
	         	} while ( EMPLEADO.TEL < 0 );
	         	gotoxy(20,24); cout << "                                  ";
	            break;
		case 3: do {
                   gotoxy(31,17) ; cout << "  ";
                   gotoxy(20,24); cout << " Digite : M-> Masculino o F -> Femenino " ;
		           gotoxy(31,17); EMPLEADO.SEXO = getche();
		           EMPLEADO.SEXO = toupper(EMPLEADO.SEXO) ;
	            } while ((EMPLEADO.SEXO != 'M') && ( EMPLEADO.SEXO != 'F'));
	            gotoxy(20,24); cout << "                                           ";
				break;
		}
  }	
  
/************************ FUNCION ELIMINAR REGISTRO **********************/ 
    
void ELIMINAR(void)
     {
     int SW ;
     char OPCION = 'S' ;
     long CED ;
     DATOS.open("D:\\DATOSBAS\\ENERO.dat", ios :: in );
     ofstream NUEVO("D:\\DATOSBAS\\ENERO2.dat");
     if ( DATOS.fail() )
	    {
	    gotoxy(28,24) ; cout << " NO EXISTE ARCHIVO " ;
	    getch();
        }
	   else
	    {
	    system("cls");
        gotoxy(33,5);  cout << TITULO ;
	    gotoxy(36,6);  cout << TITULO5 ;
	    gotoxy(25,11); cout << "CEDULA    : ";
	    cin.sync();
	    do {
	       gotoxy(37,11) ; cin >> CED ;
	       gotoxy(20,24); cout<< "Error .... valor fuera de rango ";
        } while (( CED < 0 ) || ( CED > 2147483640));
	    gotoxy(20,24); cout << "                                   ";
	    SW = 0;
	    while ( ! DATOS.eof() )
		    {
		    DATOS.read((char *)&EMPLEADO, sizeof(ARCHIVO));  // PERMITE LEER UN REGISTRO
		    if ( DATOS.eof() )
	           break;
	        if (CED == EMPLEADO.CEDULA)
	           {
	           SW = 1;
	           gotoxy(25,13); cout << "NOMBRE    = " << EMPLEADO.NOMBRE;
	           gotoxy(25,15); cout << "TELEFONO  = " << EMPLEADO.TEL   ;
	           gotoxy(25,17); cout << "SEXO      = " << EMPLEADO.SEXO  ;
	           gotoxy(50,11); cout << "ELIMINADO REGISTRO";
	           }
	         else
	           NUEVO.write((char *)&EMPLEADO,sizeof(ARCHIVO));
	        }
	    if (SW == 0)
	       {
	       gotoxy(50,11); cout <<"REGISTRO NO EXISTE ";
	       }
	  gotoxy(20,22); cout << "PULSE CUALQUIER TECLA Y REGRESA AL MENU";
	  getch();
      DATOS.close();
	  NUEVO.close(); 
	  remove("D:\\DATOSBAS\\ENERO.dat");
	  rename("D:\\DATOSBAS\\ENERO2.dat", "D:\\DATOSBAS\\ENERO.dat");
	  }
    }
   
     
/************************** FUNCION DETALLE  ************************/

void DETALLE()
   {
   system("cls");
   gotoxy(33,5) ;cout << TITULO ;
   gotoxy(24,6) ;cout << TITULO2 ;
   gotoxy(12,9); cout << "CEDULA      NOMBRE                           TELEFONO     SEXO ";
   }
   
