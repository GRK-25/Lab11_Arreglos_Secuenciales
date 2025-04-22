#include <iostream>
using namespace std;


void imprimirInverso(int* arr, int tam) {
    for (int i = tam - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    const int TAM = 8;
    int arreglo[TAM];


    for (int i = 0; i < TAM; i++) {
        cout << "Ingrese el numero No."<<i+1<<" : ";
        cin >> arreglo[i];
    }

    cout << "\nArreglo en orden inverso: ";
    imprimirInverso(arreglo, TAM);

    return 0;
}
