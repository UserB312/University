#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

struct PERSONA{
  char name[20];
  int age;
  long id;
}persona[2];

main(){
  system("cls");
  system("color B0");
  
  
  for(int i = 0; i < 2; i++){
    system("cls");
    cin.sync();
    cout << "DIGITE SU NOMBRE : "; gets(persona[i].name);
    cout << "DIITE SU EDAD    : "; cin >> persona[i].age;
    cout << "DIGITE SU ID     : "; cin >> persona[i].id;
  }
  
  for (int j = 0; j < 2; j++){
    cout << "DATOS." << endl;
    cout << "NOMBRE : " << persona[j].name << endl;
    cout << "EDAD   : " << persona[j].age << endl;
    cout << "ID     : " << persona[j].id << endl;  
  }
  getch();
}
