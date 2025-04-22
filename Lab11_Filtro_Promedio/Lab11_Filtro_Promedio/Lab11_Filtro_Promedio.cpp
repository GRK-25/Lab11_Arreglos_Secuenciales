#include <iostream>
using namespace std;


double calcularPromedio(int arr[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arr[i];
    }
    return static_cast<double>(suma) / tam;
}


void imprimirArreglo(int arr[], int tam, string nombre) {
    cout << nombre << ": ";
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ordenarDescendente(int arr[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Intercambio de valores
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int TAM = 15;
    int arreglo[TAM];


    cout << "Ingrese 15 números enteros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    double promedio = calcularPromedio(arreglo, TAM);
    cout << "\nPromedio: " << promedio << endl;


    int mayores[TAM]; 
    int contador = 0;
    for (int i = 0; i < TAM; i++) {
        if (arreglo[i] > promedio) {
            mayores[contador++] = arreglo[i];
        }
    }


    imprimirArreglo(arreglo, TAM, "Arreglo original");
    imprimirArreglo(mayores, contador, "Valores mayores al promedio");

    ordenarDescendente(mayores, contador);
    cout << "\nValores mayores al promedio (ordenados de mayor a menor):" << endl;
    imprimirArreglo(mayores, contador, "Arreglo ordenado");

    return 0;
}
