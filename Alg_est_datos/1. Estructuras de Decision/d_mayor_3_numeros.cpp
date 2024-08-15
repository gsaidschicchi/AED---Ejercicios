// 4. Dados tres valores que se ingresan por teclado, mostrar por pantalla el valor mayor.

#include <iostream>

//prototipo de funciones
int ingresar_datos();
int comparar_tres_numeros(int,int,int);

//principal
int main(){
    int numero_1, numero_2, numero_3;

    numero_1 = ingresar_datos();
    numero_2 = ingresar_datos();
    numero_3 = ingresar_datos();

    std::cout << "El numero mas grande es " << comparar_tres_numeros(numero_1,numero_2,numero_3) <<std::endl;
    return 0;
}

// AUXILIARES
// Función para ingresar datos
int ingresar_datos() {
    int numero;
    std::cout << "Ingrese un numero: ";
    std::cin >> numero; // Capturar el valor ingresado por el usuario
    return numero;      // Devolver el valor ingresado
}

// Función para comparar tres numeros y obtener el mayor
int comparar_tres_numeros(int a,int b,int c){
    int mayor;
    if((a>=b)&&(a>=c)){
        mayor = a;
    }else if((b>=a)&&(b>=c)){
        mayor = b;
    }else{
        mayor = c;
    }
return mayor;
}
