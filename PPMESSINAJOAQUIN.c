// 1) Realizar una función que  reciba como parámetro el importe de un producto y un porcentaje de descuento. La función retornará el  importe con el descuento aplicado. Probar en el main.


#include <stdio.h>
#include <string.h>

float descuento(float importe, float porcentaje);

int main(){
    float importe, porcentaje, descuento;
    descuento = descuento(importe, porcentaje);

    printf("Ingrese el importe: ");
    scanf("%f", &importe);
    printf("Ingrese el porcentaje de descuento: ");
    scanf("%f", &porcentaje);

    printf("El importe con el descuento aplicado es: %.2f", descuento);

    return 0;
}

float descuento(float importe, float porcentaje){
    float descuento;

    descuento = importe - (importe * (porcentaje / 100));

    return descuento;
}

///////////////////////////////////////////////

// 2) Crear una función que permita invertir el orden de una cadena de caracteres, La función recibirá dos cadenas, una con el texto a invertir, y otra para el texto invertido. Probar desde el main.

#include <stdio.h>
#include <string.h>

int invertir(char cadena[], char cadena2[]);

int main(){
    char cadena[100], cadena2[100];

    prinft("Ingrese Una palabra: ");
    scanf("%s", cadena);
    
    
    
}

int invertir(char cadena[], char cadena2[]){
    int retornar, tamaño;
    char aux;

    tamaño = strlen(cadena);

    for(int i = 0; i < tamaño; i++){
        aux = cadena[i];
    }
}

////////////////////////////////////////////////
//  ¿Qué relaciones existen entre los conceptos de función, pasaje por valor, pasaje por referencia y tipos de variables?. Desarrolle.