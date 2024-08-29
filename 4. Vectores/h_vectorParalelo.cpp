/*
8. Dado un vector de notas y un vector de números de documentos paralelo al vector de notas: 
a. informar la nota mas alta.
b. guardar el DNI de los alumnos con mayor nota y mostrarlos.
*/

#include <iostream>
#include <string>

// PROTOTYPES
void notaMayor(int vec[], int tamanio, int& mayor);
void buscarPosNotaMay(int vec_1[], int tam, int mayor, int vec_2[], int& count);

int main() {
    int tam = 6;
    
    int notas[tam] = {5, 8, 9, 9, 2, 1}; // Declaration and initialization of the vector of notes
    std::string documentos[tam] = {"33.214.845", "34.833.957", "32.670.103", "31.825.653", "29.014.356", "28.789.321"};

    int notaMasAlta = notas[0];

    // Part A: Find the highest grade
    notaMayor(notas, tam, notaMasAlta);
    std::cout << "Parte A." << std::endl; 
    std::cout << "La nota más alta es " << notaMasAlta << std::endl;

    // Part B: Find and display DNIs of students with the highest grade
    int posMayNota[tam]; // In the worst case, all students have the same highest grade
    int count = 0; // To keep track of how many times the highest note appears

    buscarPosNotaMay(notas, tam, notaMasAlta, posMayNota, count);

    std::cout << "Parte B." << std::endl; 
    std::cout << "DNI de los alumnos con la nota más alta:" << std::endl;
    for (int i = 0; i < count; i++) {
        std::cout << documentos[posMayNota[i]] << std::endl;
    }

    return 0;
}

// Definition of the function
void notaMayor(int vec[], int tamanio, int& mayor) {
    for (int i = 0; i < tamanio; i++) {
        if (vec[i] > mayor) {
            mayor = vec[i];
        }
    }
}

void buscarPosNotaMay(int vec_1[], int tam, int mayor, int vec_2[], int& count) {
    count = 0; // Initialize count to zero
    for (int i = 0; i < tam; i++) {
        if (vec_1[i] == mayor) {
            vec_2[count] = i; // Store index of the highest grade
            count++;
        }
    }
}
