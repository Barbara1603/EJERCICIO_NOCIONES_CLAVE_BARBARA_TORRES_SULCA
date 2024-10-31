//
// Created by barba on 31/10/2024.
//
#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))
#include "main2.h"
#include <iostream>
#include "funciones.h"
#include "matematicas.h"

int main()
{
    int a = 10;
    int b = 5;
    int c = 3;
    std::cout << "La suma de " << a << " mas " << b << " mas " << c << " es: " << suma(a, b, c) << std::endl;
    std::cout << "La resta de " << a << " menos " << b << " menos " << c << " es: " << resta(a, b, c) << std::endl;
    std::cout << "La multiplicacion de " << a << " por " << b << " por " << c << " es: " << multiplicacion(a, b, c) << std::endl;
    std::cout << "La división de " << a << " entre " << b << " es: " << division(a, b) << std::endl;
    double radio;
    std::cout << "Introduce el radio del circulo: ";
    std::cin >> radio;
    double area = AREA_CIRCULO(radio);
    std::cout << "El area del circulo con radio " << radio << " es " << area << std::endl;

    // Ejercicio 6: El compilador ya viene por defecto (GCC) y el programa funcionaba correctamente. El programa ha empezado a dar fallos con Visual Studio.
    // Ejercicio 7: el programa utiliza las bibliotecas standar de C++ como <iostream>


    return 0;

}