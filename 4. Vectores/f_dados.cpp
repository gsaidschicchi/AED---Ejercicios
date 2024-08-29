/*
Escriba un programa que permita ingresar la tirada de un par de dados 50 veces y muestre una lista
donde se vea cuántas veces se dio cada uno de los resultados posibles. Por cada tirada se deberán
ingresar 2 valores, cada uno representa el valor de un dado. El formato de la salida debe ser el
siguiente:
2 salió ... veces
3 salió ... veces
.
.
12 salió ... veces
*/

#include <iostream>
#include <cstdlib> // Para la función rand() y srand()
#include <ctime>   // Para la función time()

// PROTOTIPO
int vecesTiradaDados();
int tiraDado();
void contarSumaDados(int vec[], int tam, int resultados[]);
void mostrarResultados(int resultados[]);

int main() {
    // Inicializar la semilla para rand() (solo una vez)
    srand(static_cast<unsigned int>(time(0)));

    // Declaración de variables
    int cantidad;
    int valorDado1;
    int valorDado2;
    int suma;

    // Pedir al usuario cuántas veces tirará los dados
    std::cout << "Indique cuántas veces tirará el par de dados: ";
    cantidad = vecesTiradaDados();

    // Declaración de vectores
    int valorSumaDados[cantidad];  // Almacena la suma de los dos dados
    int cantidadSumaDados[11] = {0}; // Para contar las veces que aparece cada suma (2 a 12)

    // Inicializar el vector con los valores de la suma de los dados
    for (int i = 0; i < cantidad; i++) {
        valorDado1 = tiraDado();
        valorDado2 = tiraDado();
        suma = valorDado1 + valorDado2;
        valorSumaDados[i] = suma;
    }

    // Contar cuántas veces aparece cada suma
    contarSumaDados(valorSumaDados, cantidad, cantidadSumaDados);

    // Mostrar los resultados
    mostrarResultados(cantidadSumaDados);

    return 0;
}

// AUXILIAR

int vecesTiradaDados() {
    int numero;
    std::cin >> numero;
    return numero;
}

int tiraDado() {
    return rand() % 6 + 1; // Generar un número aleatorio entre 1 y 6
}

void contarSumaDados(int vec[], int tam, int resultados[]) {
    for (int i = 0; i < tam; i++) {
        int suma = vec[i];
        if (suma >= 2 && suma <= 12) {
            resultados[suma - 2]++; // Incrementa el contador para la suma correspondiente
        }
    }
}

void mostrarResultados(int resultados[]) {
    for (int i = 0; i < 11; i++) {
        std::cout << (i + 2) << " salió " << resultados[i] << " veces" << std::endl;
    }
}