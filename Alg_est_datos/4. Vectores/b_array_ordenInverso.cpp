/*
2. Hacer un algoritmo que lea 'n' números y los muestre en orden inverso.
*/

#include <iostream>

// PROTOTIPOS
int cantidad_numero();
int ingresar_numero();
void mostrar_vector(int numero[], int cantidad);
void mostrar_vectorInvertido(int numero[], int cantidad);

int main() {
    // Declaración de variables
    int cantidad = cantidad_numero();

    // Declaración del vector numero
    int numero[cantidad];

    // Inicializar el vector numero
    for (int i = 0; i < cantidad; i++) {
        numero[i] = ingresar_numero();
    }

    // Mostrar el vector original
    mostrar_vector(numero, cantidad);

    // Mostrar el vector en orden inverso
    mostrar_vectorInvertido(numero, cantidad);

    return 0;
}

// AUXILIAR

// Función para ingresar la cantidad de números
int cantidad_numero() {
    int n;
    std::cout << "Ingrese la cantidad de elementos del vector: ";
    std::cin >> n;
    return n;
}

// Función para ingresar un número
int ingresar_numero() {
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    return n;
}

// Mostrar vector
void mostrar_vector(int numero[], int cantidad){
    std::cout << "El vector original es: ";
    for(int i = 0; i < cantidad; i++){
        std::cout << numero[i] << " ";
    }
    std::cout << std::endl;  // Corregido para que funcione correctamente
}

// Mostrar vector invertido
void mostrar_vectorInvertido(int numero[], int cantidad){
    std::cout << "El vector invertido es: ";
    for(int i = cantidad - 1; i >= 0; i--){
        std::cout << numero[i] << " ";
    }
    std::cout << std::endl;  // Corregido para que funcione correctamente
}
