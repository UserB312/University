#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>

using namespace std;

void gotoxy(USHORT x,USHORT y){                                 
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}

//ESTRUCTURA
struct registro{
	char name[30];
	int edad;
	char sex;
	char civil;
}info;

//NOMBRE INTERNO DEL ARCHIVO
fstream file;

//FUNCIONES

int menu();
void registrod();
void mostrard();
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
				mostrard();
				break;
			case 3: OP = 'N';
		}
	}
}

//CUERPO DE LAS FUNCIONES

int menu(){
	int opcion;
	system("cls");
	system("color f4");
	gotoxy(36,6); cout << "< M E N U >";
	gotoxy(25,8); cout << "1. REGISTRAR DATOS";
	gotoxy(25,9); cout << "2. CONSULTAR DATOS TIPO LISTADO";
	gotoxy(25,10); cout << "3. SALIR";
	do{
		gotoxy(55,12); cout << "     ";
		gotoxy(25,12); cout << "DIGITE LA OPCION A REALIZAR : ";
		gotoxy(55,12); cin >> opcion;
		gotoxy(26,14); cout << "! ERROR...OPCION NO VALIDA !";
	}while((opcion < 1) || (opcion > 3));
	gotoxy(25,14); cout << "                                ";
	
	return opcion;
}

void registrod(){
	char OP = 'S';
	file.open("C:\\INFO\\EXAMEN.DAT", ios :: app);
	while(OP == 'S'){
		system("cls");
		gotoxy(36,6); cout << "< REGISTRO DE DATOS >";
		gotoxy(25,8); cout << "NOMBRE       : ";
		gotoxy(25,9); cout << "EDAD         : ";
		gotoxy(25,10); cout << "SEXO         : ";
		gotoxy(25,11); cout << "ESTADO CIVIL : ";
		cin.sync();
		gotoxy(40,8); gets(info.name);
		gotoxy(40,8); cout << strupr(info.name);
		do{
			gotoxy(40,9); cout << "       ";
			gotoxy(40,9); cin >> info.edad;
			gotoxy(25,13); cout << "--ERROR...VALOR FUERA DE RANGO--";
		}while((info.edad < 5) || (info.edad > 95));
		gotoxy(25,13); cout << "                                    ";
		do{
			gotoxy(40,10); cout << "      ";
			gotoxy(25,13); cout << "DIGITE M -> MASCULINO || F -> FEMENINO";
			gotoxy(40,10); info.sex = getche();
			info.sex = toupper(info.sex); 
			gotoxy(40,10); cout << info.sex;
		}while((info.sex != 'M')&&(info.sex != 'F'));
		gotoxy(25,13); cout << "                                          ";
		do{
			gotoxy(40,11); cout << "      ";
			gotoxy(20,13); cout << "DIGITE C -> CASADO || S -> SOLTERO || U -> UNION LIBRE";
			gotoxy(40,11); info.civil = getche();
			info.civil = toupper(info.civil); 
			gotoxy(40,11); cout << info.civil;
		}while((info.civil != 'C') && (info.civil != 'S') && (info.civil != 'U'));
		gotoxy(20,13); cout << "                                                          ";
		
		if((info.sex == 'M') || (info.sex == 'F')){
			if((info.sex == 'M') && (info.civil == 'C') && (info.edad > 40)){
				file.write((char *)&info, sizeof(registro));
			}
			if((info.sex == 'F') && (info.civil == 'S') && (info.edad < 50)){
				file.write((char *)&info, sizeof(registro));
			}
		}
		
		do{
			gotoxy(25,13); cout << "DESEA CONTINUAR S -> SI || N -> NO";
			OP = getch();
			OP = toupper(OP);
		}while((OP != 'S') && (OP != 'N'));
	}
	file.close();
}
void mostrard(){
	int x = 10;
	system("cls");
	ifstream file("C:\\INFO\\EXAMEN.DAT");
	if(file.fail()){
		gotoxy(26,6); cout << " < C O N S U L T A - D A T O S >";
		gotoxy(32,8); cout << "--NO EXISTE ARCHIVO--";
		gotoxy(23,9); cout << "(PULSE CUALQUIER TECLA PARA CONTINUAR)";
		getch();
	}else{
		formato();
		while(! file.eof()){
			file.read((char *)&info, sizeof(registro));
			if(file.eof()){
				break;
			}else{
				gotoxy(22,x); cout << info.name;
				gotoxy(56,x); cout << info.edad;
				gotoxy(64,x); cout << info.sex;
				gotoxy(72,x); cout << info.civil;
			}
			if(x <= 15){
				x++;
			}else{
				gotoxy(26,x+=3); cout << "--PULSE CUALQUIER TECLA PARA AVANZAR--";
				getch();
				x = 10;
				formato();
			}
		}
		gotoxy(26,x+=3); cout << "--PULSE CUALQUIER TECLA PARA CONTINUAR--";
		getch();
		file.close();
	}
}
void formato(){
	system("cls");
	gotoxy(37,6); cout << "< C O N S U L T A >";
	gotoxy(22,8); cout << "NOMBRE                            EDAD    SEXO    ESTADO CIVIL";
}
