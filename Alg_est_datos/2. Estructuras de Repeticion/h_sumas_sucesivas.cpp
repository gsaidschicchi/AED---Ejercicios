/*
8. Dados n y m enteros positivos, informar su producto obtenido por sumas sucesivas.
*/

#include <iostream>

//PROTOTIPO
int ingresar_numero();
int suma_sucesiva(int, int);

int main(){

    int n,m;
    
    n = ingresar_numero();
    m = ingresar_numero();

    std::cout << "El producto obtenido por sumas sucesivas es " << suma_sucesiva(n,m) << std::endl;

    return 0;
}

//AUXILIAR

int ingresar_numero(){
    int n;
    std::cout << "Ingrese un numero entero positivo: " << std::endl;
    std::cin >> n;

    return n;
}

int suma_sucesiva(int a, int b){ //recibe dos parametros --> a * b = a 'veces' b = b + b + ... + b(a) --> sumas sucesivas
    int suma = 0;

    for(int i=0;i<a;i++){
    suma += b;
    }

    return suma;
}