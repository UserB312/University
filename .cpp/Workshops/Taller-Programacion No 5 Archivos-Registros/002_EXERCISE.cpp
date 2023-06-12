#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}

struct registro{
	char name[30];
	int edad;
	char sex,civil;
}vector;

fstream info;

//FUNCIONES
int menu();
void capturaD();
void mostrar();
void plantilla();
void imprimir();

main(){
	char OP = 'S';
	int option;
	while(OP == 'S'){
		option = menu();
		switch(option){
			case 1:
				capturaD();
				break;
			case 2:
				mostrar();
				break;
			case 3: OP = 'N';
		}		
	}
}

int menu(){
	int opcion;
	system("cls");
	system("color F4");
	gotoxy(34,6); cout << "< M E N U >";
	gotoxy(25,8); cout << "1. CAPTURA DE DATOS";
	gotoxy(25,9); cout << "2. CONSULTA TIPO LISTADO";
	gotoxy(25,10); cout << "3. SALIR";
	do{
		gotoxy(55,12); cout << "      ";
		gotoxy(25,12); cout << "DIGITE LA OPCION A REALIZAR : ";
		gotoxy(55,12); cin >> opcion;
		gotoxy(24,14); cout << "--ERROR...VALOR FUERA DE RANGO--";
	}while((opcion < 1) || (opcion > 3));
	gotoxy(24,14); cout << "                                     ";
	
	return opcion;
}

void capturaD(){
	char OP = 'S';
	info.open("C:\\INFO\\info.DAT", ios :: app);
	while(OP == 'S'){
		system("cls");
		gotoxy(36,6); cout << "< CAPTURA DE DATOS >";
		gotoxy(25,8); cout << "   NOMBRE    : ";
		gotoxy(25,9); cout << "    EDAD     : ";
		gotoxy(25,10); cout << "    SEXO     : ";
		gotoxy(25,11); cout << "ESTADO CIVIL : ";
		cin.sync();
		gotoxy(40,8); gets(vector.name);
		gotoxy(40,8); cout << strupr(vector.name);
		do{
			gotoxy(40,9); cout << "     ";
			gotoxy(40,9); cin >> vector.edad;
			gotoxy(25,13); cout << "--ERROR...VALOR FUERA DE RANGO--";
		}while(vector.edad < 1);
		gotoxy(25,13); cout << "                                    ";
		do{
			gotoxy(40,10); cout << "    ";
			gotoxy(25,13); cout << "DIGITE M -> MASCULINO || F -> FEMENINO";
			gotoxy(40,10); vector.sex = getche();
			vector.sex = toupper(vector.sex);
		}while((vector.sex != 'M') && (vector.sex != 'F'));
		gotoxy(25,13); cout << "                                           ";
		do{
			gotoxy(40,11); cout << "    ";
			gotoxy(25,13); cout << "DIGITE C -> CASADO || S -> SOLTERO";
			gotoxy(40,11); vector.civil = getche();
			vector.civil = toupper(vector.civil);
		}while((vector.civil != 'C') && (vector.civil != 'S'));
		gotoxy(25,13); cout << "                                           ";
		
		if((vector.sex == 'M') || (vector.sex == 'F')){
			if((vector.sex == 'M') &&(vector.edad > 40)){
				info.write((char *)&vector, sizeof(registro));
			}
			if((vector.sex == 'F') && (vector.edad < 50)){
				info.write((char *)&vector, sizeof(registro));
			}
		}
		
		do{
			gotoxy(25,13); cout << "--DESEA CONTINUAR S/N--";
			OP = getch();
			OP = toupper(OP);
		}while((OP != 'S') && (OP != 'N'));
	}
	info.close();
}

void plantilla(){
	system("cls");
	gotoxy(36,6); cout << "< C O N S U L T A >";
	gotoxy(22,8); cout << "NOMBRE                     EDAD    SEXO    ESTADO CIVIL";
}

void mostrar(){
	int fila;	
    ifstream info("C:\\INFO\\info.DAT");
    //info.open("C:\\INFO\\info.dat", ios :: in);
    if ( info.fail() ){
    	gotoxy(25,10) ; cout << " NO EXISTE ARCHIVO " ;
		getch();
		}else{
		fila = 10;
		plantilla();
		while ( ! info.eof() ){
			info.read((char *)&vector,sizeof(registro));
			if ( info.eof() ){
				break;
			}else{
				gotoxy(22,fila); cout << vector.name;
				gotoxy(49,fila); cout << vector.edad;
				gotoxy(57,fila); cout << vector.sex;
				gotoxy(70,fila); cout << vector.civil;
			}
			if ( fila <= 15 ){
				fila++ ;				
			}else{
			gotoxy(26,fila+=3); cout << "--PULSE CUALQUIER TECLA PARA AVANZAR--";		    
			getch();
		    fila = 10 ;
		    plantilla();
		    }
        } 
		gotoxy(26,fila+=3); cout << "--PULSE CUALQUIER TECLA PARA CONTINUAR--";
		getch();
	    info.close();
    }
}
