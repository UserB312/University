#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){         
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}
int main(){
	int num,x;
	char J='S';
	while (J=='S')
	{	
		system("cls");
		system("color F5");
		gotoxy(42,4); printf("UNIVERSIDAD POPULAR DEL CESAR");
		gotoxy(46,5); puts("INGENIERIA DE SISTEMAS");
		gotoxy(80,24); cout<<"@Charon_IV";
  		gotoxy (48,7);cout<<"DIGITE UN NUMERO:";
		cin>>num;
		x=num%2;
		if (x==0){
			gotoxy(49,11); cout<<num<<" ES NUMERO PAR";
		}else{
			gotoxy(49,11); cout<<num<<" ES NUMERO IMPAR";	
			}
		do{
			gotoxy(47,16); cout<< "DESEA CONTINUAR  S/N : " ;
        	J = getche();
        	J = toupper(J);
        }  while ((J != 'S') && (J != 'N'));
	}
}
