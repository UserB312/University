#include <iostream>
using namespace std;

struct Arbol {
    int dato;
    Arbol* sub_izq;
    Arbol* sub_der;
};

void recorrerIzquierda(Arbol* P, int& peso) {
    if (P->sub_izq != nullptr) {
        recorrerIzquierda(P->sub_izq, peso);
        peso++;
    }
}

void recorrerDerecha(Arbol* P, int& peso) {
    if (P->sub_der != nullptr) {
        recorrerDerecha(P->sub_der, peso);
        peso++;
    }
}

void equivalentes(int peso1, int peso2, int peso3, int peso4) {
    if (peso1 == peso3 && peso2 == peso4) {
        cout << "SON EQUIVALENTES" << endl;
    } else {
        cout << "NO SON EQUIVALENTES" << endl;
    }
}

void crearArbol(Arbol*& R) {
    char OP = 'S';
    while (OP == 'S') {
        Arbol* P = new Arbol;
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
                Arbol* aux = R;
                Arbol* padre = nullptr;
                while (aux != nullptr) {
                    padre = aux;
                    if (P->dato <= aux->dato) {
                        aux = aux->sub_izq;
                    } else {
                        aux = aux->sub_der;
                    }
                }
                if (P->dato <= padre->dato) {
                    padre->sub_izq = P;
                } else {
                    padre->sub_der = P;
                }
            }
        }
        cout << "DESEA INGRESAR OTRO NODO? (S/N): ";
        OP = toupper(OP);
        cin >> OP;
    }
}

int main() {
    Arbol* R = nullptr;
    Arbol* R2 = nullptr;
    crearArbol(R);
    crearArbol(R2);

    int peso1 = 0;
    int peso2 = 0;
    int peso3 = 0;
    int peso4 = 0;

    recorrerIzquierda(R, peso1);
    recorrerIzquierda(R2, peso3);
    recorrerDerecha(R, peso2);
    recorrerDerecha(R2, peso4);

    equivalentes(peso1, peso2, peso3, peso4);

    return 0;
}


