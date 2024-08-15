/*
7. Hacer un algoritmo que ingresando por teclado el mes (1 a 12) y el año (4 dígitos), informe la
cantidad de días que tiene el mes.
*/

//Nota: cada 4 años, el mes de febrero tiene 29 dias en lugar de 28.

/*
7. Hacer un algoritmo que ingresando por teclado el mes (1 a 12) y el año (4 dígitos), informe la
cantidad de días que tiene el mes.
*/

//Nota: cada 4 años, el mes de febrero tiene 29 dias en lugar de 28.

#include <iostream>

// PROTOTYPE
int ingreso_mes();
int ingreso_anio();
int calcular_dias(int, int);
bool es_bisiesto(int);

int main() {

    int mes = ingreso_mes();
    int anio = ingreso_anio();

    if (es_bisiesto(anio)) {
        std::cout << "El año " << anio << " es bisiesto." << std::endl;
    } else {
        std::cout << "El año " << anio << " NO es bisiesto." << std::endl;
    }

    std::cout << "El mes " << mes << " tiene " << calcular_dias(mes, anio) << " dias." << std::endl;

    return 0;
}

// AUXILIARY FUNCTIONS

int ingreso_mes() {
    int mes;
    do {
        std::cout << "Ingrese un mes en formato mm (1-12): ";
        std::cin >> mes;
    } while (mes < 1 || mes > 12); // Validate month input
    return mes;
}

int ingreso_anio() {
    int anio;
    do {
        std::cout << "Ingrese un año en formato aaaa: ";
        std::cin >> anio;
    } while (anio <= 0); // Validate year input
    return anio;
}

// A year is a leap year if (the year is divisible by 4 and the year is NOT divisible by 100) or the year is divisible by 400 
bool es_bisiesto(int a) {
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
        return true;
    }
    return false;
}

int calcular_dias(int mes, int anio) {
    int dias;

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        dias = 31;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias = 30;
    } else if (mes == 2) {
        if (es_bisiesto(anio)) {
            dias = 29;
        } else {
            dias = 28;
        }
    }

    return dias;
}
