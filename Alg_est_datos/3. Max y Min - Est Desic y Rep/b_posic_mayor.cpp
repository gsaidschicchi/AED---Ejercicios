/*
2. Dados 'n' valores distintos que se ingresan por teclado, mostrar en qué posición se ingresó el
mayor.
*/

#include <iostream>

// PROTOTIPO
int ingresar_numero();
int calcular_mayor_valor(int &mayor, int &posicion, int iteracion);

int main() {

    // Declaracion variables
    int cantidad_iteraciones;
    int mayor;
    int posicion = 0;

    // Indico la cantidad de veces que voy a realizar las iteraciones
    std::cout << "Ingresar la cantidad de numeros a analizar: ";
    cantidad_iteraciones = ingresar_numero();

    if (cantidad_iteraciones <= 0) {
        std::cout << "El numero de iteraciones debe ser mayor a cero." << std::endl;
        return 0;
    }

    // Inicializo la variable mayor con el primer numero ingresado
    mayor = ingresar_numero();
    posicion = 0;  

    // Proceso los numeros restantes
    for (int i = 1; i < cantidad_iteraciones; i++) { // Start from the second position
        calcular_mayor_valor(mayor, posicion, i);
    }

    // Muestro el mayor numero y su posición por pantalla
    std::cout << "El mayor valor es " << mayor << " y fue ingresado en la posicion " << posicion + 1 << "." << std::endl; //user-friendly indexing

    return 0;
}

// AUXILIAR

int ingresar_numero() {
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;

    return n;
}

int calcular_mayor_valor(int &mayor, int &posicion, int iteracion) {
    int numero;

    // Solicitar el número al usuario
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    // Comprobar si el número ingresado es mayor al actual 'mayor'
    if (numero > mayor) {
        mayor = numero;
        posicion = iteracion; // Actualiza la posición al índice actual
    }

    return mayor;
}