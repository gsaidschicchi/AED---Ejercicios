/*
1. Dado un vector de códigos de productos y un vector paralelo de precios correspondiente a los
productos, se pide:
a) Informar código y precio de todos los productos ordenados de mayor a menor por precio.
b) Dado un código de producto informar su precio.

Hacer con un vector de Struct
*/

#include <iostream>

// Define the struct before using it in any function prototype
struct productos {
    int codigo;
    float precio;
};

// Correctly declare `tam` as a constant expression
constexpr int tam = 5;

// Function prototypes (after the struct definition)
void inicializarStruct(productos p[], int tam);
void ordenarStruct(productos p[], int tam);
void mostrarStruct(productos p[], int tam);
void buscarCodigo(productos p[], int tam, int codigo, int& posicion);

// Create an array of struct `productos`
productos prod[tam];

int main() {

    // PARTE A
    std::cout << "Resolución PARTE A: " << std::endl;
    
    // Initialize Struct array
    inicializarStruct(prod, tam);

    // Ordenar por precio de mayor a menor
    ordenarStruct(prod, tam);

    // Mostrar por pantalla precio de productos ordenados
    std::cout << "Productos ordenados por precio (de mayor a menor):" << std::endl;
    mostrarStruct(prod, tam);

    // PARTE B
    std::cout << "\nResolución PARTE B: " << std::endl;
    
    int cod;
    int posicion = -1;
    
    std::cout << "Ingrese un codigo de producto: ";
    std::cin >> cod;
    
    buscarCodigo(prod, tam, cod, posicion);
    
    if(posicion == -1){
        std::cout << "No se encontró el codigo" << std::endl;
    } else {
        std::cout << "El precio del producto " << cod << " es $" << prod[posicion].precio << std::endl; 
    }
    return 0;
}

// Auxiliary function to initialize the struct array
void inicializarStruct(productos p[], int tam) {
    for (int i = 0; i < tam; i++) {
        std::cout << "Ingrese el codigo del producto " << i + 1 << ": ";
        std::cin >> p[i].codigo;

        std::cout << "Ingrese el precio del producto " << i + 1 << ": $";
        std::cin >> p[i].precio;
    }
} 

// Function to sort the struct array by price from highest to lowest
void ordenarStruct(productos p[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {            
            if (p[j].precio < p[j + 1].precio) { // Cambiar el signo para ordenar de mayor a menor
                // Intercambio los structs
                productos temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

// Function to display the struct array
void mostrarStruct(productos p[], int tam) {
    for (int i = 0; i < tam; i++) {
        std::cout << "Producto: " << p[i].codigo << ", Precio: $" << p[i].precio << std::endl;    
    }
}

// Function to search 'codigo' in the struct array
void buscarCodigo(productos p[], int tam, int codigo, int& posicion) {
    for(int i = 0; i < tam; i++) {
        if(p[i].codigo == codigo) {
            posicion = i;
            break; // Salir del bucle si se encuentra el código
        }
    }    
}