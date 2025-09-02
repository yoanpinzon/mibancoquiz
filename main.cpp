#include <iostream>
#include <string>

using namespace std;

struct Cliente {
    string nom;
    int saldo;
};

int main() {
    int opc;

    do {
        cout << "Menu Mi Banco" << endl;
        cout << "1. agregar cliente" << endl;
        cout << "2. consignar" << endl;
        cout << "opcion: ";
        cin >> opc;
        switch (opc) {
            case 1: break;
            case 2: break;
        }
    }
    while (opc != 0);

    return 0;
}
