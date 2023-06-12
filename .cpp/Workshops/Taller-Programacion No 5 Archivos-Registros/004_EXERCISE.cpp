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
}info;

fstream file;

//FUNCIONES
int menu();
void capturad();
void consultad();
void formato();

main(){
	char OP = 'S';
	int option;
	while(OP == 'S'){
		option = menu();
		switch(option){
			case 1:
				capturad();
				break;
			case 2:
				consultad();
				break;
			case 3: OP = 'N';
		}
	}
}

//PROTOTIPO DE FUNCIONES

int menu(){
	int opcion;
	system("cls");
	system("color f4");
	gotoxy(37,6); cout << "< M E N U >";
	gotoxy(25,8); cout << "1. REGISTRO DE DATOS";
	gotoxy(25,9); cout << "2. CONSULTA DE DATOS";
	gotoxy(25,10); cout << "3. SALIR";
	do{
		gotoxy(25,12); cout << "DIGITE LA OPCION A REALIZAR : ";
		gotoxy(55,12); cin >> opcion;
		gotoxy(30,14); cout << "--ERROR--";
	}while((opcion < 1) ||(opcion > 3));
	gotoxy(30,14); cout << "             ";
	
	return opcion;
}
void capturad(){
	char OP = 'S';
	file.open("C:\\INFO\\info3.DAT", ios :: app);
	while(OP == 'S'){
		system("cls");
		gotoxy(37,6); cout << "< REGISTRO DE DATOS >";
		gotoxy(25,8); cout << "NOMBRE : ";
		gotoxy(25,9); cout << "EDAD   : ";
		cin.sync();
		gotoxy(34,8); gets(info.name);
		gotoxy(34,8); cout << strupr(info.name);
		do{
			gotoxy(34,9); cout << "      ";
			gotoxy(34,9); cin >> info.edad;
			gotoxy(30,11); cout << "--ERROR--";
		}while(info.edad < 0);
		gotoxy(30,11); cout << "              ";

		if((info.edad >=27) && (info.edad <= 59)){
			file.write((char *)&info, sizeof(registro));
		}
		
		do{
			gotoxy(25,11); cout << "--DESEA CONTINUAR S/N --";
			OP = getch();
			OP = toupper(OP);
		}while((OP != 'S') && (OP != 'N'));
	}
	file.close();
}

void formato(){
	system("cls");
	gotoxy(37,6); cout << "< C O N S U L T A >";
	gotoxy(22,8); cout << "NOMBRE                       EDAD"; 
}

void consultad(){
	int fila;
	ifstream file("C:\\INFO\\info3.DAT");
	if(file.fail()){
		gotoxy(37,6); cout << "< C O N S U L T A >";
		gotoxy(25,8); cout << "NO EXISTE ARCHIVO";
		gotoxy(25,9); cout << "(PULSE CUALQUIER TECLA PARA CONTINUAR)";
		getch();
	}else{
		fila = 10;
		formato();
		while(! file.eof()){
			file.read((char *)&info, sizeof(registro));
			if(file.eof()){
				break;				
			}else{
				gotoxy(22,fila); cout << info.name;
				gotoxy(51,fila); cout << info.edad;
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
