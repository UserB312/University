/*********************************************************************************    
 *                                                                               *
 *   ESTE PROGRAMA PERMITE CALCULAR EL NUMERO DE ESTUDIANTES Y EL PROMEDIO  DE   *   
 *   NOTAS DE LOS QUE APROBRARON Y REPROBARON DE UN GRUPO QUE CURSARON LA        *
 *   LA ASIGNATURA PROGRAMACIÓN 1. ADEMAS, SE DESEA CONOCER EL PROMEDIO GENERAL, *
 *   NOTAS Y LA NOTA MAS ALTA Y MAS BAJA. (PROBLEMA No 15 TALLER No 1 )          *    
 *                                                                               *
 *********************************************************************************/
 
#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <windows.h>

using namespace std; 

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}
main()
    {
    char  NOMBRE[30];
    long  CEDULA;
    float  NOTA, ACUMAPROBO = 0, ACUMREPROBO = 0, ACUMTOTAL = 0 ;
    float  NOTAMAYOR = 0 , NOTAMENOR = 5;
    int  APROBO = 0, REPROBO = 0,  CONTOTAL = 0;
    char   OP ='S';
     
    while (OP == 'S')
          {
          system("cls") ; 
          system("color F5");
          gotoxy(25,5); printf("UNIVERSIDAD POPULAR DEL CESAR");
          gotoxy(31,6); printf("REGISTRO DE NOTAS");
          gotoxy(20,10); printf("DIGITE CEDULA   :  "); 
          gotoxy(20,11); printf("DIGITE NOMBRE   :  ");  
          gotoxy(20,12); printf("DIGITE NOTA     :  ");
          do {
             gotoxy(39,10) ; cout << "              ";	//LIMPIAR ESPACIO EN CEDULA
	         gotoxy(39,10) ; cin >> CEDULA;
	         gotoxy(20,22); cout<< "Error .... valor fuera de rango ";
	      } while ((CEDULA <= 0) || (CEDULA > 2000000000));
          gotoxy(20,22); cout <<"                                   ";
          cin.sync();
          gotoxy(39,11); gets(NOMBRE);
          do  {
              gotoxy(39,12); cin >> NOTA;
              gotoxy(20,22); cout << "Valor fuera de rango ( debe ser entre 0 y 5)";
          }  while ((NOTA < 0) || (NOTA > 5));
          gotoxy(20,22); cout << "                                               ";
          ACUMTOTAL = ACUMTOTAL + NOTA;
          CONTOTAL = CONTOTAL + 1 ;
          if  ( NOTA < 3 )
              {
		      ACUMREPROBO = ACUMREPROBO + NOTA;
              REPROBO  =  REPROBO + 1;
              }
            else
              {
		      ACUMAPROBO = ACUMAPROBO + NOTA;
              APROBO = APROBO + 1;
              }
              
          if  ( NOTA > NOTAMAYOR )   
		      NOTAMAYOR = NOTA;
		  if  (NOTA < NOTAMENOR )	 
			  NOTAMENOR = NOTA; 
          do  {
              gotoxy(28,16); printf("DESEA CONTINUAR - S/N - ");
              OP = getch();
              OP = toupper(OP);
          } while (( OP != 'S' ) && ( OP != 'N'));
        }
     system("cls");
     gotoxy(25,5); printf("UNIVERSIDAD POPULAR DEL CESAR");
     gotoxy(35,6); printf("RESULTADOS");
     gotoxy(20,9);  cout << "Numero de Estudiantes que Reprobaron = " << REPROBO;
     if (REPROBO > 0)
        {
		gotoxy(20,11); cout << "Promedio de Nota que Reprobaron      = " << ACUMREPROBO/REPROBO;
	    }  
      else
        {
	    gotoxy(20,11); cout << "Promedio de Nota que Reprobaron      = " << 0 ; 
	    }
     gotoxy(20,13); cout << "Numero de Estudiantes que Aprobaron  = " << APROBO;
     if ( APROBO > 0 )
        {
	    gotoxy(20,15); cout << "Promedio de Nota que Aprobaron       = " << ACUMAPROBO/APROBO;
	    }
	  else
	    {
		gotoxy(20,15); cout << "Promedio de Nota que Aprobaron       = " << 0 ;
    	}
     gotoxy(20,17); cout << "Promedio general de Notas            = " << ACUMTOTAL/CONTOTAL; 
     gotoxy(20,19); cout << "Nota Mayor del Grupo                 = " << NOTAMAYOR ;
     gotoxy(20,21); cout << "NOTA Menor del Grupo                 = " << NOTAMENOR ;
     gotoxy(25,24); printf("PULSE CUALQUIER TECLA Y TERMINA");
     getch();
  }
