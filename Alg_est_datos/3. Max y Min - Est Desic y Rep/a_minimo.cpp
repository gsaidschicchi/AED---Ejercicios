/*
1. Dados "n" valores distintos que se ingresan por teclado, mostrar el menor.
*/

#include <iostream>

// Function prototypes
int ingresar_numero();
int calcular_menor_valor(int menor);

int main() {

    // Declaración de variables
    int iteracion;
    int menor;

    // Leer el número de iteraciones
    std::cout << "Ingrese la cantidad de numeros que quiere ingresar: ";
    iteracion = ingresar_numero();

    if (iteracion <= 0) {
        std::cout << "El número de iteraciones debe ser mayor que cero." << std::endl;
        return 0;
    }

    // Inicializar 'menor' con el primer número ingresado
    std::cout << "Ingrese un numero: ";
    menor = ingresar_numero();

    // Procesar los números restantes
    for (int i = 1; i < iteracion; i++) {
        menor = calcular_menor_valor(menor);
    }

    // Mostrar el menor valor
    std::cout << "El menor valor es " << menor << std::endl;

    return 0;
}

// AUXILIAR

int ingresar_numero() {
    int n;
    std::cin >> n;
    return n;
}

int calcular_menor_valor(int menor) {
    int numero;
    
    // Leer un nuevo número
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    // Comparar y actualizar el menor si es necesario
    if (numero < menor) {
        menor = numero;
    }

    return menor;
}
