#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int gotoxy(USHORT x, USHORT y) {
	COORD cp = {x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cp);
}

//FUNCIONES
void titulos();
int menu();
void CREAR(int array[10][10], int x, int y);
void show(int array[10][10], int x, int y);

main(){
    int matriz[10][10],row=0,colum=0,opcion;
    char OP = 'S';
    
    while(OP == 'S'){
        titulos();
        opcion = menu();
        switch (opcion){
            case 1:
                titulos();
                do{
                    gotoxy(19,8); cout << "DIGITE EL NUMERO DE FILAS : ";
                    gotoxy(47,8); cin >> row;
                    gotoxy(23,10); cout << "ERROR...VALOR MAX 10";
                }while((row < 0) || (row > 10));
                gotoxy(23,10); cout << "                                      ";
                do{
                    gotoxy(19,9); cout << "DIGITE EL NUMERO DE COLUMNAS : ";
                    gotoxy(50,9); cin >> colum;
                    gotoxy(23,11); cout << "ERROR...VALOR MAX 10";
                }while((colum < 0) || (colum > 10));
                gotoxy(23,11); cout << "                                                ";
                gotoxy(19,8); cout << "                                                 ";
                gotoxy(19,9); cout << "                                                 ";
                CREAR(matriz,row,colum);
                break;
            case 2:
                if (row == 0){
                    titulos();
                    gotoxy(19,9); cout << "NO SE HA CREADO NINGUNA MATRIZ";
                    gotoxy(14,12); cout << "</PULSE CUALQUIER TECLA PARA CONTINUAR/>";
                    getch();
                }else{
                    titulos();
                    show(matriz,row,colum);
                    gotoxy(14,19); cout << "</PULSE CUALQUIER TECLA PARA CONTINUAR/>";
                    getch();

                }
                break;
            case 3: OP = 'N';
                gotoxy(27,16); cout << "GRACIAS :D";
                getch();
                break;
        }
    }
}

//CUERPO DE LA FUNCION

void titulos(){
    system("cls");
    system("color F5");
    gotoxy(18,4); cout << "UNIVERSIDAD POPULAR DEL CESAR";
    gotoxy(22,5); cout << "Copyright @Julio Rios";
    gotoxy(24,6); cout << "VECTOR - MATRIZ";
}

int menu(){
    int option;
    gotoxy(19,8); cout << "1. CREAR MATRIZ";
    gotoxy(19,9); cout << "2. MOSTRAR MATRIZ";
    gotoxy(19,10); cout << "3. SALIR";
    do{
        gotoxy(19,12); cout << "                                              ";
        gotoxy(19,12); cout << "DIGITE LA OPCION DESEADA : ";
        gotoxy(46,12); cin >> option;
        gotoxy(18,14); cout << "ERROR...VALOR FUERA DE RANGO";
    }while((option < 1) || (option > 3));
    //gotoxy(18,14); cout << "                                           ";
    
    return option;
}

void CREAR(int array[10][10], int x, int y){
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            gotoxy(14,10); cout << "                                                                     ";
            gotoxy(14,10); cout << "DIGITE UN VALOR PARA LA POSICION ["<<i<<"]["<<j<<"] : ";
            gotoxy(56,10); cin >> array[i][j];
        }
    }

}
//IMPRIME LA MATRIZ Y LOS VALORES PARES E IMPARES DE ESTA MISMA
void show(int array[10][10], int x, int y){
    int J = 8, a = 0, b = 0;
    int vectorpar[100],vectorimpar[100];
    gotoxy(14,J); cout << "MATRIZ : ";
    for (int i = 0; i < x; i++){
        gotoxy(24,J);
        for (int j = 0; j < y; j++){
            printf("%3d %3s", array[i][j], "  ");
            if(array[i][j] % 2 == 0){
              vectorpar[a] = array[i][j];
              a++;
            }else{
              vectorimpar[b] = array[i][j];
              b++;
            }
        }
        J++;
    }
    
    gotoxy(14,J+3); cout << "NUMEROS PARES : ";
    for (int i = 0; i < a; i++){
      cout << vectorpar[i] << "  ";
    }
    
    gotoxy(14,J+5); cout << "NUMEROS IMPARES : ";
    for (int j = 0; j < b; j++){
      cout << vectorimpar[j] << "  ";
    }
    /*
    gotoxy(14,J+3); cout << "NUMEROS PARES : ";
    
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            if (array[i][j] % 2 == 0){
                cout << array[i][j] << "  ";
            }
        }
    }

    gotoxy(14,J+5); cout << "NUMEROS IMPARES : ";
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            if (array[i][j] % 2 != 0){
                cout << array[i][j] << "  ";
            }
        }
    }
    */
}
