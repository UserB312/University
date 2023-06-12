#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}

struct REGISTRO{
	long id;
	char name[30];
	char sex;
}VECTOR[100];

int NT = 0;

//FUNCIONES
int menu();
void capturad();
void consulta();
void showsex();

main(){
	char OP = 'S';
	int opcion;
	while(OP == 'S'){
		opcion = menu();
		switch(opcion){
			case 1:
				capturad();
				break;
			case 2:
				consulta();
				break;
			case 3:
				showsex();
				break;
			case 4:
				OP = 'N';
		}
	}
}

//CUERPO DE FUNCIONES
int menu(){
	int option;
	system("cls");
	system("color F4");
	gotoxy(37,6); cout << "< M E N U >";
	gotoxy(25,8); cout << "1. CAPTURAR DATOS";
	gotoxy(25,9); cout << "2. CONSULTA TIPO LISTADO";
	gotoxy(25,10); cout << "3. CONSULTA TIPO LISTADO X SEXO";
	gotoxy(25,12); cout << "4. SALIR";
	do{
		gotoxy(55,15); cout << "           ";
		gotoxy(25,15); cout << "DIGITE LA OPCION A REALIZAR : ";
		gotoxy(55,15); cin >> option;
		gotoxy(25,17); cout << "--ERROR...VALOR FUERA DE RANGO--";
	}while((option < 0) ||(option > 4));
	gotoxy(25,15); cout << "                                        ";
	gotoxy(25,17); cout << "                                        ";
	
	return option;
}

void capturad(){
	char OP = 'S';
	while((OP == 'S') && (NT < 100)){
		system("cls");
		gotoxy(36,6); cout << "CAPTURA DE DATOS";
		gotoxy(25,9); cout << "CEDULA : ";
		gotoxy(25,10); cout << "NOMBRE : ";
		gotoxy(25,11); cout << "SEXO   : ";
		do{
			gotoxy(34,9); cout << "         ";
			gotoxy(34,9); cin >> VECTOR[NT].id;
			gotoxy(25,14); cout << "--ERROR...VALOR FUERA DE RANGO--";
		}while(VECTOR[NT].id < 0);
		gotoxy(25,14); cout << "                                     ";
		cin.sync();
		gotoxy(34,10); gets(VECTOR[NT].name);
		gotoxy(34,10); cout << strupr(VECTOR[NT].name);
		do {
           gotoxy(34,11); cout<< "  " ;
           gotoxy(25,14); cout << " DIGITE  M -> Masculino o F -> Femenino " ;
           gotoxy(34,11); VECTOR[NT].sex = getche();
           VECTOR[NT].sex = toupper(VECTOR[NT].sex) ;
        } while ((VECTOR[NT].sex != 'M') && ( VECTOR[NT].sex != 'F'));
   	    gotoxy(25,14); cout << "                                              ";
   	    
		NT = NT + 1;
		do{
			gotoxy(25,14); cout << "--DESEA CONTINUAR S/N --";
			OP = getch();
			OP = toupper(OP);
		}while((OP != 'S')&&(OP != 'N'));
	}
}

void plantilla(){
	system("cls");
	gotoxy(36,6); cout << "C O N S U L T A";
	gotoxy(25,8); cout << "CEDULA        NOMBRE                        SEXO";
}

void consulta(){
	int j;
	if (NT == 0){
		system("cls");
		gotoxy(36,6); cout << "C O N S U L T A";
		gotoxy(25,8); cout << "NO HAY DATOS";
		gotoxy(25,10); cout << "--PULSE CUALQUIER TECLA PARA CONTINUAR";
		getch();
	}else{
		j = 10;
		plantilla();
		for (int i = 0; i < NT; i++){
			gotoxy(25,j); cout << VECTOR[i].id;
			gotoxy(39,j); cout << VECTOR[i].name;
			gotoxy(69,j); cout << VECTOR[i].sex;
			if (j <= 15){
				j++;
			}else{
				gotoxy(25,j+3); cout << "PULSE CUALQUIER TECLA PARA AVANZAR";
				getch();
				j = 10;
				plantilla();
			}
		}
		gotoxy(25,j+3); cout << "PULSE CUALQUIER TECLA PARA CONTINUAR";
		getch();
	}
}

void showsex(){
	int j = 10;
	char sex;
	char OP = 'S';
	int band = 0;
	if (NT == 0){
		system("cls");
		gotoxy(36,6); cout << "C O N S U L T A";
		gotoxy(25,8); cout << "NO HAY DATOS";
		gotoxy(25,10); cout << "--PULSE CUALQUIER TECLA PARA CONTINUAR";
		getch();
	}else{
		system("cls");
		gotoxy(36,6); cout << "CONSULTA MEDIANTE SEXO";
		gotoxy(25,8); cout << "SEXO : ";
		do{
			gotoxy(32,8); cout << "   ";
			gotoxy(25,14); cout << "DIGITE M -> MASCULINO o F -> FEMENINO";
			gotoxy(32,8); sex = getch();
			sex = toupper(sex);
		}while((sex != 'M') && (sex != 'F'));
		gotoxy(25,14); cout << "                                           ";
		
		for (int i = 0; i < NT && sex == 'F' or 'M'; i++){
			if(sex == VECTOR[i].sex){
				plantilla();
				gotoxy(25,j); cout << VECTOR[i].id;
				gotoxy(39,j); cout << VECTOR[i].name;
				gotoxy(69,j); cout << VECTOR[i].sex;
				if(j <= 15){
					j++;
      			}else{
      				gotoxy(25,j+3); cout << "PULSE CUALQUIER TECLA PARA AVANZAR";
        			getch();
        			j = 10;
					plantilla();
	      		}
			}
		}
		gotoxy(25,14); cout << "PULSE CUALQUIER TECLA PARA CONTINUAR";
		getch();
	}
}
