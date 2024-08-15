/*
3. Se ingresan dos valores por teclado si el primero es mayor al segundo, informar la resta de los
valores, en caso contrario la suma.
*/

#include <iostream>

// Prototipos
int ingresar_datos();
int comparar_datos(int, int);

int main() {
    int numero_1, numero_2;

    // Llamada a la función para ingresar datos
    numero_1 = ingresar_datos();
    numero_2 = ingresar_datos();

    std::cout << "El primer numero es " << numero_1 << std::endl;
    std::cout << "El segundo numero es " << numero_2 << std::endl;

    // Mostrar el resultado de la comparación
    std::cout << "El resultado es " << comparar_datos(numero_1, numero_2) << std::endl;

    return 0; // Indicar que el programa terminó correctamente
}

// Función para ingresar datos
int ingresar_datos() {
    int numero;
    std::cout << "Ingrese un numero: ";
    std::cin >> numero; // Capturar el valor ingresado por el usuario
    return numero;      // Devolver el valor ingresado
}

// Función para comparar datos
int comparar_datos(int a, int b) {
    int resultado;

    // Verificar si el primer número es mayor que el segundo
    if (a > b) {
        resultado = a - b; // Restar si el primero es mayor
    } else {
        resultado = a + b; // Sumar en caso contrario
    }

    return resultado; // Devolver el resultado de la operación
}
