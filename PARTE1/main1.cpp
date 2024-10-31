
#include "main1.h"
#include <iostream>
#include "Estudiante.h"
#include "Persona.h"


int g = 20;

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    Persona persona;
    persona.setNombre("Jennie");
    persona.setEdad(28);
    persona.setGenero("Femenino");
    std::cout << "Nombre:" << persona.getNombre() << std::endl;
    std::cout << "Edad:" << persona.getEdad() << std::endl;
    std::cout << "Género:" << persona.getGenero() << std::endl;

    Estudiante estudiante;
    estudiante.setNombre("Jisoo");
    estudiante.setEdad(29);
    estudiante.setGenero("Femenino");
    estudiante.setGrado("Segundo Año");
    estudiante.mostrarDetalles();




    return 0;
}
