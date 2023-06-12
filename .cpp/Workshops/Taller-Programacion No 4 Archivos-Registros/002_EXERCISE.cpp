#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}

//ESTRUCTURA
struct REGISTRO{
  long id;
  char name[20];
  char address[30];
  unsigned tel;
  float nota;
}VECTOR_R[100];

int NT = 0;

//FUNCIONES
int menu();
void entrada();
void consulta();
void plantilla();
void consulta_ID();
void eliminar();

main(){
  char OP = 'S';
  int opcion;
  while(OP == 'S'){
    opcion = menu();
    switch(opcion){
      case 1:
        entrada();
        break;
      case 2:
        consulta();
        break;
      case 3:
        consulta_ID();
        break;
      case 4:
      	eliminar();
        break;
      case 5: OP = 'N';
    }
  }
  
}


//PROTOTIPO DE FUNCIONES
int menu(){
  int option;
  system("cls");
  system("color F4");
  gotoxy(37,6); cout << "M E N U";
  gotoxy(25,9); cout << "1. CAPTURAR DATOS";
  gotoxy(25,10); cout << "2. CONSULTA DE DATOS TIPO LISTADO";
  gotoxy(25,11); cout << "3. CONSULTA MEDIANTE ID";
  gotoxy(25,12); cout << "4. ELIMINAR MEDIANTE ID";
  gotoxy(25,13); cout << "5. SALIR";
  do{
    gotoxy(58,16); cout << "        ";
    gotoxy(24,16); cout << "SELECCIONE LA OPCION A REALIZAR : ";
    gotoxy(58,16); cin >> option;
    gotoxy(24,18); cout << "--ERROR..VALOR FUERA DE RANGO--";
  }while((option < 1) ||(option > 5));
  gotoxy(24,16); cout << "                                              ";
  gotoxy(24,18); cout << "                                              ";
  return option;
}

void entrada(){
  char OP = 'S';
  while ((OP == 'S') && (NT < 100)){
    system("cls");
    gotoxy(30,8); cout << "CAPTURA DE DATOS";
    gotoxy(25,10); cout << "CEDULA    : ";
    gotoxy(25,11); cout << "NOMBRE    : ";
    gotoxy(25,12); cout << "DIRECCION : ";
    gotoxy(25,13); cout << "TELEFONO  : ";
    gotoxy(25,14); cout << "NOTA      : ";
    do{
      gotoxy(37,10); cout << "             ";
      gotoxy(37,10); cin >> VECTOR_R[NT].id;
      gotoxy(25,18); cout << "ERROR...VALOR FUERA DE RANGO";
    }while(VECTOR_R[NT].id <= 0);
    gotoxy(25,18); cout << "                                      ";
    cin.sync();
    gotoxy(37,11); gets(VECTOR_R[NT].name);
    gotoxy(37,11); cout << strupr(VECTOR_R[NT].name);
    gotoxy(37,12); gets(VECTOR_R[NT].address);
    gotoxy(37,12); cout << strupr(VECTOR_R[NT].address);
    do{
      gotoxy(37,13); cout << "               ";
      gotoxy(37,13); cin >> VECTOR_R[NT].tel;
      gotoxy(25,18); cout << "ERROR...VALOR FUERA DE RANGO";
    }while(VECTOR_R[NT].tel <= 0);
    gotoxy(25,18); cout << "                                 ";
    cin.sync();
    do{
      gotoxy(37,14); cout << "          ";
      gotoxy(37,14); cin >> VECTOR_R[NT].nota;
      gotoxy(25,18); cout << "ERROR...VALOR FUERA DE RANGO";
    }while(VECTOR_R[NT].nota < 0);
    gotoxy(25,18); cout << "                                ";
    NT = NT + 1;
    do{
      gotoxy(25,18); cout << "DESEA CONTINUAR --S/N--";
      OP = getch();
      OP = toupper(OP);
    }while((OP != 'S') && (OP != 'N'));
  }
}

void consulta(){
  int j; //PARA LAS FILAS A LA HORA DE IMPRIMIR
  if(NT == 0){
    system("cls");
    gotoxy(37,6); cout << "C O N S U L T A";
    gotoxy(39,9); cout << "NO HAY DATOS";
    gotoxy(27,11); cout << "--PULSE CUALQUIER TECLA PARA CONTINUAR--";
    getch();
  }else{
    j = 12;
    plantilla();
    for (int i = 0; i < NT; i++){
      gotoxy(11,j); cout << VECTOR_R[i].id;
      gotoxy(24,j); cout << VECTOR_R[i].name;
      gotoxy(44,j); cout << VECTOR_R[i].address;
      gotoxy(60,j); cout << VECTOR_R[i].tel;
      gotoxy(72,j); cout << VECTOR_R[i].nota;
      if(j <= 15){
        j++;
      }else{
        gotoxy(25,j+3); cout << "PULSE CUALQUIER TECLA PARA CONTINUAR";
        getch();
        j = 12;
        plantilla();
      }
    }
    gotoxy(25,j+3); cout << "--PULSE CUALQUIER TECLA PARA CONTINUAR--";
    getch();
  }
}

void plantilla(){
  system("cls");
  gotoxy(35,6); cout << "C O N S U L T A";
  gotoxy(11,10); cout << "CEDULA       NOMBRE              DIRECCION       TELEFONO    NOTA ";
}                        

void consulta_ID(){
  int documento,x;
  char OP = 'S';
  if (NT == 0){
    system("cls");
    gotoxy(37,6); cout << "CONSULTA SELECTIVA";
    gotoxy(39,9); cout << "NO HAY DATOS";
    gotoxy(27,11); cout << "--PULSE CUALQUIER TECLA PARA CONTINUAR--";
    getch();
  }else{
    while(OP == 'S'){
      system("cls");
      gotoxy(37,6); cout << "CONSULTA SELECTIVA POR ID";
      gotoxy(25,9); cout << "CEDULA    : ";
      do{
        gotoxy(37,9); cout << "           ";
        gotoxy(37,9); cin >> documento;
        gotoxy(25,18); cout << "ERROR...VALOR FUERA DE RANGO";
      }while(documento <= 0);
      gotoxy(25,18); cout << "                                        ";
      x = 0;
      for (int i = 0; i < NT && x == 0; i++){
        if(documento == VECTOR_R[i].id){
          x = 1;
          gotoxy(25,11); cout << "NOMBRE    : " << VECTOR_R[i].name;
		  gotoxy(25,13); cout << "TELEFONO  : " << VECTOR_R[i].address  ;
		  gotoxy(25,15); cout << "SEXO      : " << VECTOR_R[i].tel  ;
		  gotoxy(25,17); cout << "NOTA      : " << VECTOR_R[i].nota;
        }
        if(x == 0){
          gotoxy(50,11); cout << "NO EXISTE REGISTRO";
        }
        
        do{
        	gotoxy(28,22); printf("DESEA CONTINUAR - S/N - ");
          	OP = getch();
	        OP = toupper(OP);
	    }while (( OP != 'S' ) && ( OP != 'N'));
      }
    }
  }
}

void eliminar(){
	char OP = 'S';
	long id;	
	int i , j , SW ;
    while (OP == 'S' ){
    	if  ( NT == 0 ){
    		gotoxy (20,24); cout << "No hay datos                        ";
		    OP = 'N'; getch();
		    }else{
		    	system("cls");
                gotoxy(36,7);  cout << "E L I M I N A R";
                gotoxy(25,11); cout << "CEDULA    : ";
                do {
                	gotoxy(37,11) ; cin >> id;
	                gotoxy(20,24); cout<< "ERROR ....VALOR FUERA DE RANGO";
	            } while (id < 0 );
	            gotoxy(20,24); cout <<"                                      ";
	            SW = 0 ;
	            for (i = 0 ; i < NT && SW == 0; i ++ )
	                if  (id == VECTOR_R[i].id )
	                    {
		                gotoxy(25,13); cout << "NOMBRE    : " << VECTOR_R[i].name;
		                gotoxy(25,15); cout << "TELEFONO  : " << VECTOR_R[i].address;
		                gotoxy(25,17); cout << "SEXO      : " << VECTOR_R[i].tel;
		                gotoxy(25,19); cout << "NOTA      : " << VECTOR_R[i].nota;
		                SW = 1;
		                for ( j = i ; j < NT ; j++ ){
		                	VECTOR_R[j].id = VECTOR_R[j + 1].id;	
		           	        strcpy( VECTOR_R[j].name, VECTOR_R[j + 1].name);
		           	        strcpy(VECTOR_R[j].address, VECTOR_R[j + 1].address);
		           	        VECTOR_R[j].tel = VECTOR_R[j + 1].tel;
		           	        VECTOR_R[j].nota = VECTOR_R[j + 1].nota;
				         	}
				        	NT = NT - 1 ; 
				     		gotoxy(50,11); cout << "ELEMENTO ELIMINADO";
		                	}
		                	
                	if  (SW == 0){
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

