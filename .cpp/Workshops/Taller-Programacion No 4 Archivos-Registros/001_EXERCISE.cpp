/**********************************************************************
 *  ESTE PROGRAMA ES CREADO CON EL FIN DE CONFIRMAR EL FUNCIONAMIENTO *
 *  DE ARREGLOS TIPO REGISTRO.                                        *
 *  PROBLEMA No 1 DEL TALLER No 4   	                              * 
 **********************************************************************/
       
#include <windows.h>                      
#include <iostream>                      
#include <conio.h>                       

using namespace std;                     

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   // sentencia gotoxy
}

#define  TITULO  "ARREGLOS TIPO REGISTRO";
#define  TITULO1 "CAPTURA DE DATOS" ;
#define  TITULO2 "CONSULTA SELECTIVA" ;
#define  TITULO3 "CONSULTA TIPO LISTADO" ;
#define  TITULO4 "ELIMINAR";
#define  TITULO5 "MODIFICAR";

int MENU();
void CAPTURA();
void CONSULTA_LISTADO();
void CONSULTA_SELECTIVA();
void ELIMINAR();
void MODIFICAR(void);
void CAMBIAR(int K);
void DETALLE();

struct CAMPOS {
   long CEDULA ;
   char NOMBRE[30];
   unsigned TEL;
   char SEXO;
   }  ;
  
  CAMPOS EMPLEADO[50];
  int   NRO = 0; 

/*************** PROGRAMA PRINCIPAL ***********************/

 main()
    {
    char OP = 'S';
    int  TIPO ;
    while ( OP == 'S')
        {
        TIPO = MENU();
        switch   (TIPO)  {
            case 1 : CAPTURA();
                     break;
            case 2 : CONSULTA_SELECTIVA();
                	 break;
            case 3 : CONSULTA_LISTADO();
                     break;
            case 4 : ELIMINAR();
                     break;
            case 5 : MODIFICAR();
                     break;
            case 6 : OP = 'N';
           };
       }
    }
    
/************************ M E N U ***********************/
    
 int MENU()
   {
   int OPCION ;
   system("cls");
   system("color F0");
   gotoxy(29,6) ; cout << TITULO;
   gotoxy(36,8) ; cout << "M E N U";
   gotoxy(29,11); cout << "1. CAPTURA DE DATOS" ;
   gotoxy(29,12); cout << "2. CONSULTA SELECTIVA";
   gotoxy(29,13); cout << "3. CONSULTA TIPO LISTADO";
   gotoxy(29,14); cout << "4. ELIMINAR ";
   gotoxy(29,15); cout << "5. MODIFICAR ";
   gotoxy(29,17); cout << "6. SALIR";
   do  {
        gotoxy(22,20); cout << "SELECIONE UNA DE LAS ALTERNATIVAS : ";
        cin >> OPCION ;
        gotoxy(30,22); cout << "VALOR FUERA DE RANGO";
   }  while((OPCION < 1) || (OPCION > 6)) ;
   gotoxy(30,22); cout << "                          ";
   return OPCION ;
   }   
    
/*******************  C R E A R **********************/
    
  void CAPTURA()
    {
    char  OP = 'S';
    while ((OP == 'S') && ( NRO < 50))
        {
        system("cls");
        gotoxy(29,5)  ;cout << TITULO;
        gotoxy(32,7)  ;cout << TITULO1;
        gotoxy(20,11) ;cout << "CEDULA   : ";
        gotoxy(20,13) ;cout << "NOMBRE   : ";
        gotoxy(20,15) ;cout << "TELEFONO : ";
        gotoxy(20,17) ;cout << "SEXO     : ";
        do {
           gotoxy(31,11) ; cin >> EMPLEADO[NRO].CEDULA ;
           gotoxy(20,24); cout<< "Error .... valor fuera de rango ";
        } while ( EMPLEADO[NRO].CEDULA < 0 );
        gotoxy(20,24); cout <<"                                   ";
        cin.sync();
        gotoxy(31,13); gets( EMPLEADO[NRO].NOMBRE);
        gotoxy(31,13); cout << strupr(EMPLEADO[NRO].NOMBRE);
        do {
           gotoxy(31,15); cin >> EMPLEADO[NRO].TEL ;
           gotoxy(20,24); cout<< "Error .... valor fuera de rango ";
        } while ( EMPLEADO[NRO].TEL < 0 );
        gotoxy(20,24); cout <<"                                   ";
        do {
           gotoxy(31,17); cout<< " " ;
           gotoxy(20,24); cout << " Digite : M-> Masculino o F -> Femenino " ;
           gotoxy(31,17); EMPLEADO[NRO].SEXO = getche();
           EMPLEADO[NRO].SEXO = toupper(EMPLEADO[NRO].SEXO) ;
        } while ((EMPLEADO[NRO].SEXO != 'M') && ( EMPLEADO[NRO].SEXO != 'F'));
   	    gotoxy(20,24); cout <<"                                              ";
        NRO = NRO + 1;
        do {
           gotoxy(28,23); printf("DESEA CONTINUAR - S/N - ");
           OP= getch();
           OP = toupper(OP);
        } while ((OP != 'S' ) && ( OP!= 'N'));
      }
   }
 
 /*************** CONSULTA TIPO LISTADO ***********************/
 
 
 
 void CONSULTA_LISTADO(){
     int  F, K ;
     if  (NRO == 0){
         gotoxy (20,24); cout << "No hay datos ";
         getch();
         }else{         
          F = 11;
          DETALLE();
          for ( K = 0 ; K < NRO ; K++ )
               {
               gotoxy(12,F); cout << EMPLEADO[K].CEDULA;
               gotoxy(24,F); cout << EMPLEADO[K].NOMBRE;
               gotoxy(55,F); cout << EMPLEADO[K].TEL   ;
               gotoxy(68,F); cout << EMPLEADO[K].SEXO  ;
               if  ( F <= 24 )
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
  	    }
       }
	 
	 
/**********************  CONSULTA SELECTIVA ***********************/ 
	 
  void CONSULTA_SELECTIVA()
      {
	  long CED;	
	  int K, SW ;
      char OPCION = 'S';
      if  (NRO == 0)
          {
          gotoxy (20,22); cout << "No hay datos ";
          getch();
          }
        else
          {
          while (OPCION == 'S' )
                {
                system("cls");
                gotoxy(29,5);  cout << TITULO;
                gotoxy(31,7);  cout << TITULO2;
                gotoxy(25,11); cout << "CEDULA    : ";
                do {
                   gotoxy(37,11) ; cin >> CED ; 
	                 gotoxy(20,24); cout<< "Error .... valor fuera de rango ";
	              } while (CED < 0 );
	              gotoxy(20,24); cout <<"                                   ";
	              SW = 0;
	              for (K = 0 ; K < NRO && SW == 0 ; K ++ )
	                  if  (CED == EMPLEADO[K].CEDULA ){
	                    SW = 1;
		                  gotoxy(25,13); cout << "NOMBRE    = " << EMPLEADO[K].NOMBRE;
		                  gotoxy(25,15); cout << "TELEFONO  = " << EMPLEADO[K].TEL   ;
		                  gotoxy(25,17); cout << "SEXO      = " << EMPLEADO[K].SEXO  ;
                      }
                if (SW == 0)
                   {
                   gotoxy(50,11) ; cout << "NO EXISTE REGISTRO" ;
                   }
                do {
                   gotoxy(28,22); printf("DESEA CONTINUAR - S/N - ");
                   OPCION = getch();
	               OPCION = toupper(OPCION);
	            } while (( OPCION != 'S' ) && ( OPCION != 'N'));
	          }
	      }	  
       }
	  
/********************* ELIMINAR ***********************/
	 
  void ELIMINAR()
      {
      char OP = 'S' ;
      long CED ;
      int K , W , SW ;
      while ((OP == 'S' ))   
	       {
		   if  ( NRO == 0 )
		       {
		       gotoxy (20,24); cout << "No hay datos                        ";
		       OP = 'N'; getch();
		       }
		     else
		       {
		       system("cls");
		       gotoxy(29,5);  cout << TITULO;
               gotoxy(36,7);  cout << TITULO4;
               gotoxy(25,11); cout << "CEDULA    : ";
               do {
                   gotoxy(37,11) ; cin >> CED ;
	               gotoxy(20,24); cout<< "Error .... valor fuera de rango ";
	            } while (CED < 0 );
	            gotoxy(20,24); cout <<"                                      ";
	            SW = 0 ;
	            for (K = 0 ; K < NRO && SW == 0; K ++ )
	                if  (CED == EMPLEADO[K].CEDULA )
	                    {
		                gotoxy(25,13); cout << "NOMBRE    = " << EMPLEADO[K].NOMBRE;
		                gotoxy(25,15); cout << "TELEFONO  = " << EMPLEADO[K].TEL   ;
		                gotoxy(25,17); cout << "SEXO      = " << EMPLEADO[K].SEXO  ;
		                SW = 1;
		                for ( W = K ; W < NRO ; W++ ) 
				            {
					     	EMPLEADO[W].CEDULA = EMPLEADO[W + 1].CEDULA;	
		           	        strcpy( EMPLEADO[W].NOMBRE, EMPLEADO[W+ 1].NOMBRE);
		           	        EMPLEADO[W].TEL = EMPLEADO[W+ 1].TEL;
		           	        EMPLEADO[W].SEXO = EMPLEADO[W+ 1].SEXO;
				         	}
					    NRO = NRO - 1 ; 
				     	gotoxy(50,11); cout << "Elemento Eliminado";
		                }
                if  (SW == 0)
                    {
                    gotoxy(50,11) ; cout << "NO EXISTE REGISTRO" ;
                    }
                do {
		           gotoxy(28,24); printf("DESEA CONTINUAR - S/N - ");
			       OP = getch();
			       OP = toupper(OP);
		        } while (( OP != 'S' ) && ( OP != 'N'));
		      }
		   }	
       }
       
 /************************ FUNCION MODIFICAR REGISTRO **********************/ 
    
 void MODIFICAR(void)
     {
     int K, SW ;
     char OPCION = 'S' ;
     long CED ;
     if  (NRO == 0)
          {
          gotoxy (20,24); cout << "No hay datos ";
          getch();
          }
        else
          {
          while (OPCION == 'S' )
             {
	    	 system("cls");
             gotoxy(29,5);  cout <<  TITULO ;
	         gotoxy(36,6);  cout <<  TITULO5 ;
	         gotoxy(20,11); cout << "CEDULA   : ";
	         cin.sync();
	         do {
	            gotoxy(31,11) ; cin >> CED ;
	            gotoxy(20,24); cout<< "Error .... valor fuera de rango ";
             } while (( CED < 0 ) || ( CED > 2147483640));
	         gotoxy(20,24); cout << "                                   ";
	         SW = 0;
	         for (K = 0 ; K < NRO && SW == 0 ; K ++ )
	           if (CED == EMPLEADO[K].CEDULA )
     	          {
     	          SW = 1;
		          gotoxy(20,13); cout << "NOMBRE   = " << EMPLEADO[K].NOMBRE;
		          gotoxy(20,15); cout << "TELEFONO = " << EMPLEADO[K].TEL   ;
		          gotoxy(20,17); cout << "SEXO     = " << EMPLEADO[K].SEXO  ;
		          CAMBIAR(K);
	              gotoxy(50,11); cout << "REGISTRO MODIFICADO";
                  }
                if (SW == 0)
                   {
                   gotoxy(50,11) ; cout << "NO EXISTE REGISTRO" ;
                   }
                do {
                   gotoxy(28,24); printf("DESEA CONTINUAR - S/N - ");
                   OPCION = getch();
	               OPCION = toupper(OPCION);
	            } while (( OPCION != 'S' ) && ( OPCION != 'N'));
	         }
         }
   }  
    
 /*********************************** CAMBIAR **********************************/ 
 
 void CAMBIAR(int K)
    {
   	int OP = 1,F = 13;
	char TECLA;
	gotoxy(20,21);cout<<"UTILICE : Flechas Abajo y Arriba Para Desplazarse, ENTER para seleccionar y Terminar";
	do {
	   gotoxy(31,F); TECLA = getch();
	   if ( kbhit()) 
	      {	
		  TECLA = getch();
		  if (TECLA == 80)    // Baja
		     {
		     OP++;
		     F+=2;
		     }
		  if (TECLA == 72)   // Sube
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
		        gotoxy(31,13); gets( EMPLEADO[K].NOMBRE);
                gotoxy(31,13); cout << strupr(EMPLEADO[K].NOMBRE);
	           	break;
		case 2: do {
			       gotoxy(31,15) ; cout <<"           " ;
			       gotoxy(31,15); cin >> EMPLEADO[K].TEL ;
                   gotoxy(20,24); cout<< "Error .... valor fuera de rango ";
                } while ( EMPLEADO[K].TEL < 0 );
                gotoxy(20,24); cout <<"                                   ";
		        break;
		case 3: do {
                   gotoxy(31,17) ; cout << "  ";
                   gotoxy(20,24); cout << " Digite : M-> Masculino o F -> Femenino " ;
                   gotoxy(31,17); EMPLEADO[K].SEXO = getche();
                   EMPLEADO[K].SEXO = toupper(EMPLEADO[K].SEXO) ;
                } while ((EMPLEADO[K].SEXO != 'M') && ( EMPLEADO[K].SEXO != 'F'));
		        gotoxy(20,24); cout << "                                           ";
				break;
		}
  }	
   
    

/******************* FUNCION DETALLE ***********************/

 void DETALLE()
   {
   system("cls");
   gotoxy(29,3) ; cout << TITULO;
   gotoxy(30,5) ; cout << TITULO3;
   gotoxy(12,9) ; printf("CEDULA      NOMBRE                         TELEFONO     SEXO ");
   }
  

