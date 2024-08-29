/*
7. Dado un vector de códigos de productos y un vector paralelo de precios correspondiente a los
productos, se pide:
a) Informar código y precio de todos los productos ordenados de mayor a menor por precio.
b) Dado un código de producto informar su precio.
*/

#include <iostream>

// PROTOTIPO
int ingresar_numero();
int ingresar_codigo();
float ingresar_precio();
void inicializarProductos(int vec[], int tam);
void inicializarPrecios(float vec[], int tam);
void ordenarVectorParalelo(int vec_1[], float vec_2[], int tam);
void mostrarVectorParalelo(int vec_1[], float vec_2[], int tam);
int solicitarCodigo(int cod, int vec[], int tam);
void mostrarPrecio(int pos, float vec_1[], int cod);

int main() {

    // Declaración de variables
    int tam = ingresar_numero();
    int codigo; 
    int posicionProductoBuscado;

    // Declaración de vectores
    int vector_productos[tam];
    float vector_precios[tam];
    
    // Inicializo el vector de productos
    inicializarProductos(vector_productos, tam);

    // Inicializo el vector de precios
    inicializarPrecios(vector_precios, tam);

    // Ordenar por precio de mayor a menor
    ordenarVectorParalelo(vector_productos, vector_precios, tam);

    // Muestro 'codigoProducto': 'precio'
    std::cout << "a. Informar código y precio de todos los productos ordenados de mayor a menor por precio" << std::endl;
    mostrarVectorParalelo(vector_productos, vector_precios, tam);   
    
    // Solicito código de producto a buscar
    std::cout << "Ingrese un codigo de producto a buscar" << std::endl;
    std::cin >> codigo;
    
    posicionProductoBuscado = solicitarCodigo(codigo, vector_productos, tam);
    
    // Verifico si el producto fue encontrado y muestro el precio
    if (posicionProductoBuscado != -1) {
        mostrarPrecio(posicionProductoBuscado, vector_precios, codigo);
    }

    return 0;
}

// AUXILIAR

int ingresar_numero() {
    int n;
    std::cout << "Ingrese el tamaño del vector: " << std::endl;
    std::cin >> n;
    return n;
}

int ingresar_codigo() {
    int n;
    std::cout << "Ingrese el código del producto: " << std::endl;
    std::cin >> n;
    return n;
}

float ingresar_precio() {
    float n;
    std::cout << "Ingrese el precio del producto: " << std::endl;
    std::cin >> n;
    return n;
}

void inicializarProductos(int vec[], int tam) {
    for(int i = 0; i < tam; i++) {
        vec[i] = ingresar_codigo();
    }
}

void inicializarPrecios(float vec[], int tam) {
    for(int i = 0; i < tam; i++) {
        vec[i] = ingresar_precio();
    }
}

void ordenarVectorParalelo(int vec_1[], float vec_2[], int tam) {
    for (int i = 0; i < tam - 1; ++i) {
        for (int j = 0; j < tam - i - 1; ++j) {
            if (vec_2[j] < vec_2[j + 1]) {  // Ordenar de mayor a menor
                // Intercambiar en vec_2 (precios)
                float tempPrecio = vec_2[j];
                vec_2[j] = vec_2[j + 1];
                vec_2[j + 1] = tempPrecio;

                // Intercambiar en vec_1 (códigos de productos) para mantener la correspondencia
                int tempCodigo = vec_1[j];
                vec_1[j] = vec_1[j + 1];
                vec_1[j + 1] = tempCodigo;
            }
        }
    }
}

void mostrarVectorParalelo(int vec_1[], float vec_2[], int tam) {
    for(int i = 0; i < tam; i++) {
        std::cout << "Codigo " << vec_1[i] << ": $" << vec_2[i] << std::endl;
    }
}

int solicitarCodigo(int cod, int vec[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (cod == vec[i]) {
            return i;
        }
    }
    std::cout << "El codigo ingresado no se encuentra en la lista" << std::endl;
    return -1;  // Retornar -1 para indicar que el código no fue encontrado.
}

void mostrarPrecio(int pos, float vec_1[], int cod) {
    std::cout << "El precio del producto de codigo " << cod << " es $" << vec_1[pos] << std::endl; 
}
