/*
1. Hacer un algoritmo que lea 'n' notas las cargue un vector y luego muestre la nota máxima.
*/

#include <iostream>

// PROTOTIPO
int cantidad_nota();
int ingresar_nota();
void busqueda_notaMayor(int notas[], int cantidad);

int main() {

    // Declaración de variables
    int cantidad = cantidad_nota();  // Obtener la cantidad de notas

    // Declaración del vector de notas
    int notas[cantidad];

    // Inicializar el vector de notas
    for (int i = 0; i < cantidad; i++) {
        notas[i] = ingresar_nota();
    }

    // Buscar y mostrar la nota más alta
    busqueda_notaMayor(notas, cantidad);

    return 0;
}

// AUXILIAR

// Función para ingresar la cantidad de notas
int cantidad_nota() {
    int n;
    do {
        std::cout << "Ingrese cuántas notas se cargarán: ";
        std::cin >> n;
        if (n <= 0) {
            std::cout << "Debe ingresar un número mayor a 0." << std::endl;
        }
    } while (n <= 0);

    return n;
}

// Función para ingresar una nota
int ingresar_nota() {
    int n;
    do {
        std::cout << "Ingrese una nota (1-10): ";
        std::cin >> n;
        if (n < 1 || n > 10) {
            std::cout << "Nota inválida. Por favor, ingrese un valor entre 1 y 10." << std::endl;
        }
    } while (n < 1 || n > 10);

    return n;
}

// Función para buscar y mostrar la nota más alta
void busqueda_notaMayor(int notas[], int cantidad) {
    int mayor = notas[0];

    for (int i = 1; i < cantidad; i++) {
        if (notas[i] > mayor) {
            mayor = notas[i];
        }
    }

    std::cout << "La nota más alta es " << mayor << std::endl;
}
