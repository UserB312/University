#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x, USHORT y) {
	COORD cp = {x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cp);
}

//FUNCIONES
void titles();
int menu();
void create(int array[10][10],int x,int y);
void show(int array[10][10],int x,int y);
void showR(int array[10][10],int x, int y);
void ordenar(int array[10][10],int x, int y);
void par_impar(int array[10][10],int x, int y);
void max_min(int array[10][10],int x, int y);
void principal(int array[10][10],int x, int y);



main(){
	char OP = 'S';
	int MATRIZ[10][10],nf = 0,nc = 0;
	int opcion;
	while ( OP == 'S'){
		titles();
		opcion = menu();
		switch (opcion){
			case 1:
				titles();
				do{
					gotoxy(19,7); cout <<"                                       ";
					gotoxy(19,7); cout <<"INGRESE EL NUMERO DE FILAS : ";
					gotoxy(48,7); cin >> nf;
					gotoxy(19,9); cout <<"ERROR...VALOR FUERA DE RANGO [1-10]";
				}while((nf < 0) || (nf > 10));
				gotoxy(19,9); cout <<"                                                       ";
				do{
					gotoxy(19,8); cout <<"                                       ";
					gotoxy(19,8); cout <<"INGRESE EL NUMERO DE COLUMNAS : ";
					gotoxy(51,8); cin >> nc;
					gotoxy(19,10); cout <<"ERROR...VALOR FUERA DE RANGO [1-10]";
				}while((nc < 0) || (nc > 10));
				gotoxy(19,10); cout <<"                                                   ";
				gotoxy(19,7); cout <<"                                             ";
				gotoxy(19,8); cout <<"                                             ";
				
				create(MATRIZ,nf,nc);
				break;
			case 2:
				if (nf == 0){
					titles();
					gotoxy(19,7); cout <<"NO SE HA CREADO NINGUNA MATRIZ";
					gotoxy(16,8); cout <<"(PULSE CUALQUIER TECLA PARA CONTINUAR)";
					getch();
				}else{
					titles();
					show(MATRIZ,nf,nc);
					gotoxy(17,15); cout << "PULSE CUALQUIER TECLA PARA CONTINUAR";
					getch();
				}
				break;
			case 3:
				if (nf == 0){
					titles();
					gotoxy(19,7); cout <<"NO SE HA CREADO NINGUNA MATRIZ";
					gotoxy(16,8); cout <<"(PULSE CUALQUIER TECLA PARA CONTINUAR)";
					getch();
				}else{
					titles();
					showR(MATRIZ,nf,nc);
					gotoxy(17,10); cout << "PULSE CUALQUIER TECLA PARA CONTINUAR";
					getch();
				}
				
				break;
			case 4:
				if (nf == 0){
					titles();
					gotoxy(19,7); cout << "NO SE HA CREADO NINGUNA MATRIZ";
					gotoxy(16,8); cout << "(PULSE CUALQUIER TECLA PARA CONTINUAR)";
					getch();
				}else{
					titles();
					ordenar(MATRIZ,nf,nc);
					gotoxy(17,15); cout << "(PULSE CUALQUIER TECLA PARA CONTINUAR)";
					getch();
				}
				break;
			case 5:
				if (nf == 0){
					titles();
					gotoxy(19,7); cout << "NO SE HA CREADO NINGUNA MATRIZ";
					gotoxy(16,8); cout << "(PULSE CUALQUIER TECLA PARA CONTINUAR)";
					getch();
				}else{
					titles();
					par_impar(MATRIZ,nf,nc);
					gotoxy(17,16); cout << "PULSE CUALQUIER TECLA PARA CONTINUAR";
					getch();
				}
				break;
			case 6:
				if (nf == 0){
					titles();
					gotoxy(19,7); cout << "NO SE HA CREADO NINGUNA MATRIZ";
					gotoxy(16,8); cout << "(PULSE CUALQUIER TECLA PARA CONTINUAR)";
					getch();
				}else{
					titles();
					max_min(MATRIZ,nf,nc);
					gotoxy(16,13); cout << "(PULSE CUALQUIER TECLA PARA CONTINUAR)";
					getch();
				}
				break;
			case 7:
			  if (nf == 0){
					titles();
					gotoxy(19,7); cout << "NO SE HA CREADO NINGUNA MATRIZ";
					gotoxy(16,8); cout << "(PULSE CUALQUIER TECLA PARA CONTINUAR)";
					getch();
				}else{
					titles();
					principal(MATRIZ,nf,nc);
					gotoxy(16,13); cout << "(PULSE CUALQUIER TECLA PARA CONTINUAR)";
					getch();
				}
			  break;
			case 8: OP = 'N';
				gotoxy(28,16); cout << "GRACIAS :D";
				break;
		}
	}
}

//CUERPO - FUNCIONES
void titles(){
	system("cls");
	system("color F5");
	gotoxy(19,3); cout <<"UNIVERSIDAD POPULAR DEL CESAR";
	gotoxy(23,4); cout <<"Copyright @Julior_117";
	gotoxy(26,5); cout <<"VECTOR - MATRIZ";
}

int menu(){
	int option;
	gotoxy(19,7); cout <<"1. CREAR MATRIZ";
	gotoxy(19,8); cout <<"2. MOSTRAR MATRIZ";
	gotoxy(19,9); cout <<"3. IMPRIMIR VECTOR RESULTANTE";
	gotoxy(19,10); cout <<"4. ORDENAR MATRIZ";
	gotoxy(19,11); cout <<"5. IMPRIMIR PARES E IMPARES";
	gotoxy(19,12); cout <<"6. NUMERO MAXIMO Y MINIMO";
	gotoxy(19,13); cout <<"7. DIAGONAL PRINCIPAL";
	gotoxy(19,14); cout <<"8. SALIR";	
	do{
		gotoxy(19,16); cout <<"                                       ";
		gotoxy(19,16); cout <<"DIGITE LA OPCION A REALIZAR : ";
		gotoxy(49,16); cin >> option;
	}while((option < 1) || (option > 8));
	return option;
}

void create(int array[10][10],int x,int y){
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			gotoxy(19,7); cout <<"                                                               ";
			gotoxy(19,7); cout <<"INGRESE UN VALOR PARA LA POSICION ["<<i<<"]["<<j<<"] : ";
			gotoxy(62,7); cin >> array[i][j];
		}
	}
}

void show(int array[10][10],int x,int y){
	int J = 7;
	gotoxy(14,J); cout << "MATRIZ : ";
	for(int i = 0; i < x; i++){
		gotoxy(24,J);
		for(int j = 0; j < y; j++){
			printf("%3d %3s",array[j][i], "  ");
		}
		J++;
	}
}

void showR(int array[10][10],int x,int y){

	gotoxy(8,7); cout << "VECTOR RESULTANTE : ";
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << array[i][j] << "  ";
		}
	}
}

void ordenar(int array[10][10],int x, int y){
	int aux;
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			for (int k = 0; k < x; k++){
				for (int m = 0; m < y; m++){
					if(array[i][j] > array[k][m]){
						array[k][m] = array[k][m];
					}else{
						aux = array[k][m];
						array[k][m] = array[i][j];
						array[i][j] = aux;
					}
				}
			}
		}
	}
	/*
	for (int i = 0; i < x - 1; i++){
	  for (int j = i + 1; j < x; j++){
	    if(vector[j] > vector[i]){
	      aux = vector[j];
	      vector[j] = vector[i];
	      vector[i] = aux;
      }
    }
  }
	*/  
	int J = 7;
	gotoxy(6,J); cout << "MATRIZ ORDENADA : ";
	for(int i = 0; i < x; i++){
		gotoxy(24,J);
		for(int j = 0; j < y; j++){
			printf("%3d %3s",array[i][j], "  ");
		}
		J++;
	}
	
}

void par_impar(int array[10][10],int x, int y){
  int vec_par[100], vec_impar[100], a = 0,b = 0;
	gotoxy(24,7); cout << "MATRIZ - PAR E IMPAR";
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			if(array[i][j] % 2 == 0){
			  vec_par[a] = array[i][j];
			  a++;
				//cout << array[i][j] << "  ";
			}else{
			  vec_impar[b] = array[i][j];
			  b++;
      }
		}
	}
	
  gotoxy(13,10); cout << "NUMEROS PARES : ";
  for (int i = 0; i < a; i++){
    cout << vec_par[i] << "  ";
  }
  
  gotoxy(13,12); cout << "NUMEROS IMPARES : ";
  for (int j = 0; j < b; j++){
    cout << vec_impar[j] << "  ";
  }
  
}
void max_min(int array[10][10],int x, int y){
	int valor = 0,max = 0,min = 999;
	gotoxy(24,7); cout << "NUMERO MAXIMO Y MINIMO";
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			valor = array[i][j];
			if (valor > max){
				max = valor;
			}
			if (valor < min){
				min = valor;
			}
		}
	}
	gotoxy(19,9); cout << "NUMERO MAYOR : " << max;
	gotoxy(19,10); cout << "NUMERO MINIMO : " << min;
	
}

void principal(int array[10][10],int x, int y){
  
  show(array,x,y);
  
  gotoxy(19,11); cout << "DIAGONAL PRINCIPAL : ";
  for (int i = 0; i < x; i++){
    for (int j = 0; j < y; j++){
      if( i == j){
         cout << array[i][j] << "  ";
      }
    }
  }
}
