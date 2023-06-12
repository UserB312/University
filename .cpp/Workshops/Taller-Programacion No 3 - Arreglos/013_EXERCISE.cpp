
/************************************************************************
 *                                                                      *
 *   PERMITE CREAR E IMPRIMIR LOS VALORES DE UNA MATRIZ MAX = 10X10.    * 
 *   ASIMISMO, OBTIENE UN VECTOR CON LA SUMA DE LAS FILAS DE LA MATRIZ  *  
 *                                                                      *
 *   PROBLEMA No 13 DEL TALLER No 3                                     *
 *                                                                      *
 ************************************************************************/

#include <windows.h>                     
#include <conio.h>                   

using namespace std;                 

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}

void TITULOS();
int  MENU();
void CREAR( int ARREGLO[10][10], int NF, int NC );
void CONSULTA( int ARREGLO[10][10], int NF, int NC );

main()
    {
    char CONTROL = 'S';
    int  OPCION, N, M ; 
    int  MATRIZ[10][10];
    
    while ( CONTROL == 'S')
        {
        TITULOS();
        OPCION = MENU();
       
        switch   (OPCION)  {
            case 1 : TITULOS();
			         gotoxy(26,9) ; cout << "ASIGNAR VALORES A LA MATRIZ";
	                 do {
				       gotoxy(15,13); cout << "Digite el No de Filas, Max = 10    :      ";
	                   gotoxy(52,13); cin >> N;
	                 } while ((N < 0 ) || (N > 10));
	            
	                 do {
				       gotoxy(15,14); cout << "Digite el No de Columnas, Max = 10 :      ";
	                   gotoxy(52,14); cin >> M;
	                 } while ((M < 0 ) || (M > 10));
	                 gotoxy(15,13); cout << "                                               ";
	                 gotoxy(15,14); cout << "                                               "; 
			         CREAR(MATRIZ, N, M);
                     break;
            case 2 : CONSULTA(MATRIZ, N, M);
                	 break;
            case 3 : CONTROL = 'N';
           };
       }
    }
    
 void TITULOS()
    {
    system("cls");
    system("color B0");
    gotoxy(26,6); cout <<"CREAR E IMPRIMIR UN ARREGLO";
    }

 int MENU()
     {
     int OP;
     gotoxy(36,7);  cout <<"M E N U";
     gotoxy(26,10); cout << "1 - CAPTURAR VALORES A LA MATRIZ" ;
     gotoxy(26,11); cout << "2 - IMPRIMIR MATRIZ Y OBTENER VECTOR";
     gotoxy(26,13); cout << "3 - SALIR DEL PROGRAMA";
     do {
        gotoxy(24,16); cout << "Seleccine una alternativa :  [ _ ]";
        gotoxy(55,16); cin >> OP ;
     }  while (( OP < 1 ) || ( OP > 3));
     return OP;
    }

 void CREAR( int ARREGLO[10][10], int NF, int NC )
    {
    int K, I ;
    TITULOS();
    gotoxy(26,7); cout <<"CAPTURAR VALORES A LA MATRIZ";
    for ( I = 0 ; I < NF ; I++ )
	    {
	    gotoxy(15,19); cout << "Digite valor entre 0 - 99 ";	
	    for ( K = 0 ;  K < NC ; K++ )
	        {
	        do {
	     	   gotoxy(15,15); cout << "Introducir un valor  [   ]" ;
	           gotoxy(37,15); cin >> ARREGLO[I][K] ;
	           gotoxy(15,19); cout << "ERROR ......Digite valor entre 0 - 99 ";
	        } while ((ARREGLO[I][K] < 0) || (ARREGLO[I][K] > 99 )) ;
	        gotoxy(15,19); cout << "Digite valor entre 0 - 99                ";
	        }
	    }
   }
   
/*********** IMPRIME LA MATRIZ, CALCULA EL VECTOR Y LO IMPRIME *********/

 void CONSULTA( int ARREGLO[10][10], int NF, int NC )
    {
    int  VECTOR[10],I, K, F;
	TITULOS();
	gotoxy(21,7) ; cout << "IMPRIMIR LA MATRIZ Y VECTOR RESULTANTE" ;
	F = 11 ;
	gotoxy(20,F); cout << "MATRIZ = ";
	for ( I = 0 ; I < NF ; I++ )
	    {
	    VECTOR[I] = 0;
	    gotoxy(30,F) ;
	    for ( K = 0 ; K < NC ; K++ )
	        {
	        printf ("%3d %3s", ARREGLO[I][K], "   ") ;
	        VECTOR[I] = VECTOR[I] + ARREGLO[I][K];
			}
	    F++;
	    }
	    
	gotoxy(20,F+=2); cout << "VECTOR =  " ;
	for (I = 0; I < NF; I++) 
	    cout << VECTOR[I] << "   ";
	    
	gotoxy(20,F+3); cout << "Pulse cualquier tecla para salir";
	getch();
    }
