#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

main(){
  int num1,num2,num3,mayor,menor,medio;
  system("cls");
  system("color F5");
  cout<<"DIGITE EL NUMERO 1: ";cin>>num1;
  cout<<"DIGITE EL NUMERO 2: ";cin>>num2;
  cout<<"DIGITE EL NUMERO 3: ";cin>>num3;
  cout<<" "<<endl;
  
  if(num1>num2) 
  {
    if(num1>num3)
    {
      if(num2>num3)
      {
        mayor=num1;
        medio=num2;
        menor=num3;
      }
      else
      {
        mayor=num1;
        medio=num3;
        menor=num2;
      }
    }
    else
    {
      mayor=num3;
      medio=num1;
      menor=num2;
    }
    
  }
  else
  {
    if(num2>num3)
    {
      if(num1>num3)
      {
       mayor=num2;
       medio=num1;
       menor=num3; 
      }
      else
      {
        mayor=num2;
        medio=num3;
        menor=num1;
      }
    }
    else
    {
      mayor=num3;
      medio=num2;
      menor=num1;
    }
  }
  cout<<"El mayor numero mayor entre "<<num1<<" - "<<num2<<" - "<<num3<<" es "<<mayor<<endl;
  cout<<"El mayor numero medio entre "<<num1<<" - "<<num2<<" - "<<num3<<" es "<<medio<<endl;
  cout<<"El mayor numero menor entre "<<num1<<" - "<<num2<<" - "<<num3<<" es "<<menor<<endl;
}
