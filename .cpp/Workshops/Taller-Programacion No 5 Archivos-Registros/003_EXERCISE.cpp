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
	char sex;
	int edad;
}info;

fstream file;

//FUNCIONES
int menu();
void registrod();
void imprimir();
void formato();

main(){
	char OP = 'S';
	int option;
	while(OP == 'S'){
		option = menu();
		switch(option){
			case 1:
				registrod();
				break;
			case 2:
				imprimir();
				break;
			case 3: OP = 'N';
				break;
		}
	}
}

int menu(){
	int opcion;
	system("cls");
	system("color F4");
	gotoxy(34,6); cout << " < M E N U >";
	gotoxy(25,8); cout << "1. REGISTRAR DATOS";
	gotoxy(25,9); cout << "2. IMPRIMIR DATOS TIPO LISTADO";
	gotoxy(25,11); cout << "3. SALIR";
	do{
		gotoxy(55,13); printf("    ");
		gotoxy(25,13); cout << "DIGITE LA OPCION A REALIZAR : ";
		gotoxy(55,13); cin >> opcion;
		gotoxy(23,15); cout << "--ERROR...VALOR FUERA DE RANGO--";
	}while((opcion < 1) || (opcion > 3));
	gotoxy(23,15); cout << "                                     ";
	
	return opcion;
}

void registrod(){
	char OP = 'S';
	file.open("C:\\INFO\\info2.DAT", ios :: app);
	while(OP == 'S'){
		system("cls");
		gotoxy(36,6); cout << "< REGISTRO DATOS >";
		gotoxy(25,8); cout << "NOMBRE : ";
		gotoxy(25,9); cout << "SEXO   : ";
		gotoxy(25,10); cout << "EDAD   : ";
		cin.sync();
		gotoxy(34,8); gets(info.name);
		gotoxy(34,8); cout << strupr(info.name);
		do{
			gotoxy(34,9); cout << "   ";
			gotoxy(25,12); cout << "DIGITE M -> MASCULINO || F -> FEMENINO";
			gotoxy(34,9); info.sex = getche();
			info.sex = toupper(info.sex);
		}while((info.sex != 'M') && (info.sex != 'F'));
		gotoxy(25,12); cout << "                                           ";
		do{
			gotoxy(34,10); cout << "      ";
			gotoxy(34,10); cin >> info.edad;
			gotoxy(25,12); cout << "--ERROR--";
		}while(info.edad < 0);
		gotoxy(25,12); cout << "              ";
		
		if(((info.edad >= 16) && (info.edad <= 22)) && (info.sex == 'F')){
			file.write((char *)&info, sizeof(registro));
		}
		if(((info.edad >= 18) && (info.edad <= 25)) && (info.sex == 'M')){
			file.write((char *)&info, sizeof(registro));
		}
		do{
			gotoxy(25,12); cout << "-- DESEA CONTINUAR S/N --";
			OP = getch();
			OP = toupper(OP);
		}while((OP != 'S') && (OP != 'N'));
	}
	file.close();
}

void imprimir(){
	int fila;
	ifstream file("C:\\INFO\\info2.DAT");
	system("cls");
	if (file.fail()){
		gotoxy(29,6); cout << "< C O N S U L T A >";
		gotoxy(27,9); cout << "--NO EXISTE ARCHIVO--";
		gotoxy(20,10); cout << "(PULSE CUALQUIER TECLA PARA CONTINUAR)";
		getch();
	}else{
		fila = 10;
		formato();
		while( ! file.eof() ){
			file.read((char *)&info, sizeof(registro));
			if ( file.eof()){
				break;
			}else{
				gotoxy(22,fila); cout << info.name;
				gotoxy(51,fila); cout << info.sex;
				gotoxy(58,fila); cout << info.edad;
			}
			if(fila <= 15){
				fila++;
			}else{
				gotoxy(25,fila+=3); cout << "--PULSE CUALQUIER TECLA PARA AVANZAR--";
				getch();
				fila = 10;
				formato();
			}
		}
		gotoxy(25,fila+=3); cout << "--PULSE CUALQUIER TECLA PARA CONTINUAR--";
		getch();
		file.close();
	}
}

void formato(){
	system("cls");
	gotoxy(36,6); cout << "< C O N S U L T A >";
	gotoxy(22,8); cout << "NOMBRE                       SEXO   EDAD"; 
}
