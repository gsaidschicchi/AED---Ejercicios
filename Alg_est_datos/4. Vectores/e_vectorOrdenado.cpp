/*
5. Dado un conjunto desordenado de valores enteros comprendidos entre 1 y 500, sin repetición, que
finaliza con cero, desarrollar un algoritmo que:
. Imprima un listado ordenado de aquellos valores enteros que se encuentran en el conjunto
*/

#include <iostream>

// PROTOTIPO
int ingresar_numero();
void imprimirListaVector(int vec[], int tam);
void ordenarVector(int vec[], int tam);

int main() {
    // Declaración de variables
    int numero; 
    int contador = 0;

    // Declaración de vectores
    int vectorLista[500]; // Números entre 1 y 500 sin repetición. Tamaño máximo del vector es 500

    // Inicializar el vector
    do {
        numero = ingresar_numero();
        if (numero >= 1 && numero <= 500) {
            vectorLista[contador] = numero;
            contador++;
        }
    } while (numero != 0);

    // Ordenar el vector de menor a mayor
    ordenarVector(vectorLista, contador);

    // Imprimir el listado
    imprimirListaVector(vectorLista, contador);

    return 0;
}

// AUXILIAR

int ingresar_numero() {
    int n;
    std::cout << "Ingrese un número entre 1 y 500: ";
    std::cin >> n;
    return n;
}

void imprimirListaVector(int vec[], int tam) {
    std::cout << "Valores ordenados: ";
    for (int i = 0; i < tam; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void ordenarVector(int vec[], int tam) {
    for (int i = 0; i < tam - 1; ++i) {
        for (int j = 0; j < tam - i - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                // Intercambiar vec[j] y vec[j + 1]
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}
