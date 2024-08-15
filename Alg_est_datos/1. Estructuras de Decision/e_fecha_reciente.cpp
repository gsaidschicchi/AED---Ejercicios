// 5. Escribir un algoritmo que lea dos fechas distintas (día, mes y año) e informe cual es la más reciente.

#include <iostream>

//PROTOTIPO
int ingresar_fecha();

int main(){

    fecha_1 = ingresar_fecha();
    fecha_2 = ingresar_fecha();

    std::cout << "La fecha mas reciente es " << comparar_fechas(fecha_1,fecha_2) 

    return 0;
}

//AUXILIARES
// Función para ingresar datos
int ingresar_fecha() {
    int fecha;
    std::cout << "Ingrese una fecha (formato ddmmaaaa): ";
    std::cin >> fecha; // Capturar el valor ingresado por el usuario
    return fecha;      // Devolver el valor ingresado
}

comparar_fechas(int a, int b){

    int reciente;
    
    //valido año mas reciente
    if(a%10000 > b%10000){
        reciente = a;
    }else if(a%10000 < b%10000){
        reciente = b;
    }else{ // caso de que los años sean iguales
        if(((a/10000)%100) >)
    }

}