#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x,USHORT y){                                
COORD cp={x,y};                                               
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp); 
}

//FUNCIONES
void FIBONACCY(int num);

main(){
  int num;
  char OP = 'S';
  while (OP == 'S'){
    system("cls");
    system("color F5");
    gotoxy(22,3); cout<<"UNIVERSIDAD POPULAR DEL CESAR";
    gotoxy(28,4); cout<<"</SERIE FIBONACII/>";
    gotoxy(25,6); cout<<"DIGITE UN NUMERO : ";
    gotoxy(44,6); cin>>num;
    FIBONACCY(num);
    do{
      gotoxy(25,12); cout<<"DESEA CONTINUAR S/N ";
      OP = getch();
      OP = toupper(OP);
    }while((OP != 'S') && (OP != 'N'));
  }
}

void FIBONACCY(int num){
  int a = 1, b = 1, c;
    gotoxy(25,9); for ( int i = 1; i <= num; i++){
    cout<< a <<"  ";
    c = a + b; 
    a = b; 
    b = c;  
  }
}
