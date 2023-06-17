#include <iostream>

using namespace std;

struct ARBOL {
    int dato;
    ARBOL *sub_izq;
    ARBOL *sub_der;
}*R = nullptr,*P = nullptr,*aux1 = nullptr,*aux2 = nullptr;

int bRojas = 0;
int bDoradas = 0;

void PREORDEN(ARBOL *P) {
    if (P != nullptr) {
        if ((P->sub_izq == nullptr) && (P->sub_der == nullptr)) {
            bRojas++;
        }else{
            bDoradas++;
        }
        PREORDEN(P->sub_izq);
        PREORDEN(P->sub_der);
    }
}

void crearArbol() {
    char OP;
    do {
        P = new ARBOL;
        if (P == nullptr) {
            cout << "NO HAY MEMORIA DISPONIBLE." << endl;
        } else {
            cout << "INTRODUZCA UN VALOR : ";
            cin >> P->dato;
            P->sub_izq = nullptr;
            P->sub_der = nullptr;
            if (R == nullptr) {
                R = P;
            } else {
                aux1 = R;
                while (aux1 != nullptr) {
                    aux2 = aux1;
                    if (P->dato <= aux2->dato) {
                        aux1 = aux1->sub_izq;
                    } else {
                        aux1 = aux1->sub_der;
                    }
                }
                if (P->dato <= aux2->dato) {
                    aux2->sub_izq = P;
                } else {
                    aux2->sub_der = P;
                }
            }
        }
        do {
            cout << "DESEA AGREGAR OTRO NODO? [S/N]: ";
            cin >> OP;
            OP = toupper(OP);
        } while ((OP != 'S') && (OP != 'N'));
    } while (OP == 'S');
}

main() {
    crearArbol();
    PREORDEN(R);
    cout << "EL NUMERO TOTAL DE BOLAS ROJAS ES : " << bRojas << endl;
    cout << "EL NUMERO TOTAL DE BOLAS DORADAS ES : " << bDoradas << endl;
}
