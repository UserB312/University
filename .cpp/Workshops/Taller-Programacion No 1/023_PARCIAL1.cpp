#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}
/*
PROMTG =PROMEDIO TOTAL GENERAL
NUMST = NUMERO TOTAL DE ESTUDIANTES 
ACUMAGE= ACUMULADOR EDAD
ACUAGEME acumulador edad de menores
ACUAGEMA acumulador edad mayores
AGETOTAL = ACUMULADOR TOTAL DE EDADES
*/

main(){
	char OP='S',NAME[50];
	long id;
	int AGE;
	float Amenor=0,Amayor=0,ACUAGEME=0,ACUAGEMA=0,AGETOTAL=0;
	float NUMST=0,PROM_ME=0,PROM_MA=0,PROMTG=0;
	
	while (OP=='S'){
		system("cls");
		system("color F5");
		gotoxy(46,3); cout<<"UNIVERSIDAD POPULAR DEL CESAR";
		gotoxy(49,4); cout<<"PROGRAMA DE SISTEMAS :D";
		gotoxy(46,6); cout<<"DIGITE SU CEDULA : ";
		gotoxy(46,7); cout<<"DIGITE SU NOMBRE : ";
		gotoxy(46,8); cout<<"DIGITE SU EDAD   : ";
		do{
			cout<<"                ";
			gotoxy(64,6); cout<<"                      ";
			gotoxy(65,6); cin>>id;
			gotoxy(47,14); cout<<"Error...Valor fuera de rango";	
			}while(id<=0);
			gotoxy(47,14); cout<<"                                   ";
		 cin.sync();
		 gotoxy(65,7); gets(NAME);
		 do{
		 	gotoxy(64,8);cout<<"                   ";
		 	gotoxy(65,8);cin>>AGE;
		 	gotoxy(47,14); cout<<"Error...Valor fuera de rango";
		 }while((AGE<14) || (AGE>75));
		 gotoxy(47,14); cout<<"                                     ";
		
		AGETOTAL+=AGE;
		NUMST++;
		
		 if (AGE<18){
		 	Amenor++;
		 	PROM_ME+=AGE;
		 }else{
		 	Amayor++;
		 	PROM_MA+=AGE;
		 }
	
		do {
    	gotoxy(50,18); cout << "DESEA CONTINUAR S/N : ";
    	OP = getch(); //getch no muestra tecla en pantalla
    	OP = toupper(OP);
    	} while ((OP != 'S') && (OP != 'N'));	
	}
		system("cls");
		PROMTG=AGETOTAL/NUMST;
		ACUAGEMA=PROM_MA/Amayor;
		ACUAGEME=PROM_ME/Amenor;
		gotoxy(55,4); cout<<"</ RESULTADOS />";
		gotoxy(45,6); cout<<"NUMERO TOTAL DE ESTUDIANTES : "<<NUMST;
		gotoxy(41,7); cout<<"NUMERO TOTAL DE MAYORES DE EDAD : "<<Amayor;
		gotoxy(41,8); cout<<"NUMERO TOTAL DE MENORES DE EDAD : "<<Amenor;
		gotoxy(33,9); cout<<"PROMEDIO DE EDAD DE LOS MAYORES DE EDAD : "<<ACUAGEMA;
		gotoxy(33,10); cout<<"PROMEDIO DE EDAD DE LOS MENORES DE EDAD : "<<ACUAGEME;
		gotoxy(38,11); cout<<"PROMEDIO DE EDAD GENERAL DEL GRUPO : "<<PROMTG;
		gotoxy(44,16); cout<<"PRESIONE UNA TECLA PARA TERMINAR";
		getch();
}
