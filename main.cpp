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
        for ( int i = 0; i < n; i++ ) {
            cout << "(" << banco[i].nom << "," << banco[i ].saldo << ")";
        }
        cout << "\nMenu Mi Banco" << endl;
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

        case 2:
            string nom;
            int valor;
            cout << "Nombre a consignar: ";
            cin >> nom;
            for ( int i = 0; i < n; i++ ) {
                if ( banco[i].nom == nom ) {
                    cout << "Monto a consignar: ";
                    cin >> valor;
                    banco[ i ].saldo += valor;
                    break;
                }
            }
            break;
        }
    }
    while (opc != 0);

    return 0;
}
