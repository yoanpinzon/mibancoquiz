#include <iostream>
#include <string>
#define MAX 100
using namespace std;

struct Cliente {
    string nom;
    int saldo;
};

typedef struct Cliente Cliente;

int main() {
    int opc, n = 0;
    Cliente banco[MAX];
    do {
        cout << "Menu Mi Banco" << endl;
        cout << "1. agregar cliente" << endl;
        cout << "2. consignar" << endl;
        cout << "0. salir" << endl;
        cout << "opcion: ";
        cin >> opc;
        switch (opc) {
        case 1:
            cout << "Nombre: ";
            cin >> banco[n].nom;
            cout << "Saldo Inicial: ";
            cin >> banco[n++].saldo;
            break;

        case 2: break;
        }
    }
    while (opc != 0);

    return 0;
}
