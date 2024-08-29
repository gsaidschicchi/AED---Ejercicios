/*
4. Desarrollar un programa que permita:
- Cargar un vector de 'n' valores enteros distintos.
- Mostrar por pantalla el contenido del vector.
- Obtener el mayor valor entero contenido en el vector y su posición en el mismo.
- Obtener el menor valor entero contenido en el vector y su posición en el mismo.
*/

#include <iostream>

// PROTOTIPOS
int ingresar_cantidad();
int ingresar_numero();
void inicializarVector(int vector[], int cantidad);
void mostrarVector(int vector[], int cantidad);
void obtenerMayor(int vector[], int cantidad, int &posicionMayor, int &mayor);
void obtenerMenor(int vector[], int cantidad, int &posicionMenor, int &menor);

int main() {

    // declaración de variables
    int cantidad = ingresar_cantidad();
    int posicionMayor = 0, posicionMenor = 0;
    int mayor, menor;

    // declaración de vector
    int vector[cantidad];

    // inicializo el vector
    inicializarVector(vector, cantidad);

    // mostrar el vector
    mostrarVector(vector, cantidad);

    // inicializar 'mayor' y 'menor' con el primer valor del vector
    mayor = vector[0];
    menor = vector[0];

    // recorro el vector y obtengo el número más alto y la posición
    obtenerMayor(vector, cantidad, posicionMayor, mayor);

    // recorro el vector y obtengo el número más bajo y la posición
    obtenerMenor(vector, cantidad, posicionMenor, menor);

    // muestro el mayor valor con su posición
    std::cout << "El mayor valor es " << mayor << " y se encuentra en la posición " << posicionMayor << std::endl;

    // muestro el menor valor con su posición
    std::cout << "El menor valor es " << menor << " y se encuentra en la posición " << posicionMenor << std::endl;

    return 0;
}

// AUXILIAR
int ingresar_cantidad() {
    int n;
    std::cout << "Ingrese la cantidad de elementos del vector: ";
    std::cin >> n;
    return n;
}

int ingresar_numero() {
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    return n;
}

void inicializarVector(int vector[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        vector[i] = ingresar_numero();
    }
}

void mostrarVector(int vector[], int cantidad) {
    std::cout << "El vector ingresado es: ";
    for (int i = 0; i < cantidad; i++) {
        std::cout << vector[i] << " ";  // Separar los valores por un espacio
    }
    std::cout << std::endl;
}

void obtenerMayor(int vector[], int cantidad, int &posicionMayor, int &mayor) {
    for (int i = 1; i < cantidad; i++) {  // Corregir el bucle for
        if (vector[i] > mayor) {
            mayor = vector[i];
            posicionMayor = i;
        }
    }
}

void obtenerMenor(int vector[], int cantidad, int &posicionMenor, int &menor) {
    for (int i = 1; i < cantidad; i++) {  // Corregir el bucle for
        if (vector[i] < menor) {
            menor = vector[i];
            posicionMenor = i;
        }
    }
}
