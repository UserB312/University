#include <windows.h> 
#include <iostream> 
#include <conio.h>  


using namespace std; 

int gotoxy(USHORT x,USHORT y){         
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

main()
  {
  long CEDULA ;
  float promedio, ValMatricula;
  char nombre[20], deportista;
  int  Descuentos, SerMedicos, ObliAcademicas, Derechos, DAcademicos, Carnet, Estampilla,TotalValMatricula, DesTotal;
  char OP = 'S' ;
  while (OP == 'S'){
	  	system("cls");
	  	system("Color F0");
	  	
	  	ValMatricula=1,000,000;
	  	SerMedicos= 8500; DAcademicos=17500; Carnet=1000;
	  	ObliAcademicas=SerMedicos+DAcademicos+Carnet;
	  	Estampilla=ValMatricula*10/100;
	  	
	  	gotoxy(30,5); cout<<"Calculadora de Descuentos";
	  	gotoxy(27,8); cout<<"Nombre del Estudiante: ";
	  	gotoxy(27,9); cout<<"Promedio del Estudiante: ";
	  	gotoxy(27,10); cout<<"Estudiante vinculado a actividades deportivas (S/N): ";
	  	
	  	gotoxy(52,8); cin>>nombre;
	  	gotoxy(52,9); cin>>promedio;
	  	gotoxy(80,10); deportista=getche();
	  
	  	do {
        	deportista = getch();
        	deportista = toupper(deportista);
        }  while ((OP != 'S') && (OP != 'N'));
	  	
	  	if (deportista=='S'){
	  		if (promedio>=3.5 && promedio<=4.0){
	  			Descuentos=ValMatricula*50/100;
			  }
			else{
				if(promedio>4.0){
				Descuentos=ValMatricula*100/100;
				}
			}  
		}
		else{
			if (promedio>=3.8 && promedio<=4.5){
	  			Descuentos=ValMatricula*30/100;
			  }
			else{
				if(promedio>4.5){
				Descuentos=ValMatricula*50/100;
					}
				}	
			}
		
	   	
	   	TotalValMatricula=ValMatricula+ObliAcademicas;
	   	DesTotal=TotalValMatricula-Descuentos-Estampilla;
	  	
	  	gotoxy(27,13); cout<<"Valor de la matricula: "<<ValMatricula;
	  	gotoxy(27,14); cout<<"Descuentos: "<<Descuentos;
	  	gotoxy(27,15); cout<<"obligaciones Academicas: "<<ObliAcademicas;
	  	gotoxy(27,16); cout<<"estampilla: "<<Estampilla;
	  	gotoxy(27,17); cout<<"Valor total de la matricula: "<<DesTotal;
	  			  

        do {
        	gotoxy(27,20); cout<< "DESEA CONTINUAR  S/N : " ;
        	OP = getch();
        	OP = toupper(OP);
        }  while ((OP != 'S') && (OP != 'N'));
	}
}
