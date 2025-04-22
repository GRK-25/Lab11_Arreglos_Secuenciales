#include <iostream>
using namespace std;

// Prototipos de funciones
void ingresarNumeros(int arreglo[], int tamaño);
int calcularSuma(int arreglo[], int tamaño);
double calcularPromedio(int suma, int tamaño);
int encontrarMaximo(int arreglo[], int tamaño);
int encontrarMinimo(int arreglo[], int tamaño);
void contarParesImpares(int arreglo[], int tamaño, int& pares, int& impares);

int main() {
    const int TAM = 10;
    int numeros[TAM];

    // Ingreso de datos
    ingresarNumeros(numeros, TAM);

    // Cálculos
    int suma = calcularSuma(numeros, TAM);
    double promedio = calcularPromedio(suma, TAM);
    int maximo = encontrarMaximo(numeros, TAM);
    int minimo = encontrarMinimo(numeros, TAM);
    int pares, impares;
    contarParesImpares(numeros, TAM, pares, impares);

    // Resultados
    cout << "\nResultados:" << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Valor máximo: " << maximo << endl;
    cout << "Valor mínimo: " << minimo << endl;
    cout << "Cantidad de pares: " << pares << endl;
    cout << "Cantidad de impares: " << impares << endl;

    return 0;
}

// Definiciones de funciones

void ingresarNumeros(int arreglo[], int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> arreglo[i];
    }
}

int calcularSuma(int arreglo[], int tamaño) {
    int suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += arreglo[i];
    }
    return suma;
}

double calcularPromedio(int suma, int tamaño) {
    return static_cast<double>(suma) / tamaño;
}

int encontrarMaximo(int arreglo[], int tamaño) {
    int maximo = arreglo[0];
    for (int i = 1; i < tamaño; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }
    return maximo;
}

int encontrarMinimo(int arreglo[], int tamaño) {
    int minimo = arreglo[0];
    for (int i = 1; i < tamaño; i++) {
        if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
    }
    return minimo;
}

void contarParesImpares(int arreglo[], int tamaño, int& pares, int& impares) {
    pares = 0;
    impares = 0;
    for (int i = 0; i < tamaño; i++) {
        if (arreglo[i] % 2 == 0)
            pares++;
        else
            impares++;
    }
}
