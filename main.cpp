#include <iostream>
using namespace std;

const int N = 8; // Tamaño del tablero (8x8)

int main() {
    int tablero[N][N]; // Se define la matriz 8x8

    // Vamos a llenar el tablero para generar el patron blanco-negro
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tablero[i][j] = (i + j) % 2; // Se utiliza el numero 1 para el blanco y el numero 0 para el negro
        }
    }

    // Mostrar el tablero
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Imprimir cada valor con espacio entre ellos
            cout << tablero[i][j] << " ";
        }
        cout << endl; // Nueva línea al final de cada fila
    }

    return 0;
}

