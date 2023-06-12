#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

main(){
  int num1,num2,num3,medio,xtem;
  system("cls");
  system("color F5");
  cout<<"Numero 1: ";cin>>num1;
  cout<<"Numero 2: ";cin>>num2;
  cout<<"Numero 3: ";cin>>num3;
  
  if(num1>num2){
    medio=num1;
    xtem=num2;
  }else{
    medio=num2;
    xtem=num1;
  }
  if(medio>num3){
    medio=num3;
  }
  if(medio<xtem){
    medio=xtem;
  }
  
  cout<<"Numero medio: "<<medio<<endl;
}
