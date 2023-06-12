#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){         
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

main()
 {
  char nombre[30];
  int sb, venta, prima, comision, salarioneto;
  char OP = 'S' ;
  
  while (OP == 'S')
 {
	  system("cls");
	  system("color F5");
	  gotoxy(46,2); cout<<"SALARIO NETO DE LOS EMPLEADOS";
	  gotoxy(20,5); cout<<"Nombre       : " ;
	  gotoxy(20,6); cout<<"Venta        : ";
	  gotoxy(20,7); cout<<"Salario base : ";
	  
	  gotoxy(35,5);gets(nombre);
	  do{
	  gotoxy(35,6);cout<<"            ";
	  gotoxy(35,6);cin>>venta;
	  gotoxy(35,18);cout<<"Error";
	  }while(venta<0);
	  gotoxy(35,18);cout<<"               ";
	  		
	  gotoxy(35,7);cin>>sb;

	  
		if (venta>7000000){
			comision=venta*3/100;
			}
		else
		    if (venta>=12000000 && venta<=20000000 ){
		    	comision=venta*5/100;
			}
			else{
				if (venta>20000000){
				comision=venta*7/100;
				}
			}
		if (venta>10000000){
			prima=venta*4/100;
		}
		
	 salarioneto=sb+comision+prima;
	 
	 gotoxy(20,9); cout<<"Su comision es de: "<<comision;
	 gotoxy(20,10); cout<<"Su prima es de: "<<prima;
	 gotoxy(20,11); cout<<"Su salario neto es: "<<salarioneto;
	 
	 do{
	 gotoxy(27,20); cout<< "DESEA CONTINUAR  S/N : " ;
	 OP = getch() ;
	 OP =toupper(OP);
	 }while ((OP != 'S') && (OP != 'N'));
	 getch();
}
}
