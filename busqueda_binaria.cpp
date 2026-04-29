#include <iostream>
#include <algorithm> // Para usar sort
using namespace std;

int main() {
    int arreglo[] = {1, 5, 8, 2, 3, 9, 4};
    int clave;
    bool encontrado = false;
    int indice = -1;

    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
    sort(arreglo, arreglo + tamano);

    cout << "Array ordenado: ";
    for (int n : arreglo) cout << n << " ";
    cout << endl;

    cout << "Ingresa un numero a buscar: ";
    cin >> clave;

    int izquierda = 0;
    int derecha = tamano - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2; // Evitar desbordamiento

        if (arreglo[medio] == clave) {
            encontrado = true;
            indice = medio;
            break;
        }
        else if (arreglo[medio] < clave) {
            izquierda = medio + 1; // Buscar en la mitad derecha
        }
        else {
            derecha = medio - 1; // Buscar en la mitad izquierda
        }
    }

    if (encontrado) {
        cout << "Numero encontrado en la posicion: " << indice << endl;
    } else {
        cout << "Numero no encontrado" << endl;
    }

    return 0;
}