/*
2. Ingresar la cantidad de alumnos de un curso. Ingresar por cada alumno el nombre y dos notas. Por
cada alumno informar su nombre y el promedio de sus notas.
*/#include <iostream>
#include <string> // Incluye la librería para manejar cadenas de texto

// Prototipos de funciones
int cantidad_alumnos();
std::string nombre_alumno();
float solicitar_nota();

int main() {
    int alumnos = cantidad_alumnos(); // Obtiene la cantidad de alumnos

    for (int i = 0; i < alumnos; i++) {
        std::string nombre = nombre_alumno(); // Solicita el nombre del alumno
        float nota_1 = solicitar_nota();      // Solicita la primera nota
        float nota_2 = solicitar_nota();      // Solicita la segunda nota

        float promedio = (nota_1 + nota_2) / 2; // Calcula el promedio de las notas

        // Muestra el nombre del alumno y las notas
        std::cout << "El alumno " << nombre << " obtuvo las notas " 
                  << nota_1 << " y " << nota_2 << std::endl;

        // Muestra el promedio calculado
        std::cout << "El promedio es " << promedio << std::endl;
    }

    return 0;
}

// Función para obtener la cantidad de alumnos
int cantidad_alumnos() {
    int n;
    std::cout << "Ingrese la cantidad de alumnos: ";
    std::cin >> n;
    return n; // Devuelve la cantidad de alumnos ingresada
}

// Función para obtener el nombre de un alumno
std::string nombre_alumno() {
    std::string nombre;
    std::cout << "Ingrese el nombre del alumno: ";
    std::cin >> nombre;
    return nombre; // Devuelve el nombre ingresado
}

// Función para solicitar una nota
float solicitar_nota() {
    float n;
    std::cout << "Ingrese la nota: ";
    std::cin >> n;
    return n; // Devuelve la nota ingresada
}
