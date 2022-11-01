#include <stdio.h> //Global
#include <conio.h> //Global
#include <stdlib.h> //
#include <ctype.h>  //tolower
#include <time.h>   //rand
#include <string.h> //strcpy

int main()
{
    int n1, i, palabrasRestantes;
    char ch, letra, palabraElegida[10], animales[10][10] = {"tigre", "lobo", "oveja", "panda", "perro", "gato", "hormiga", "pajaro", "mono", "tiburon"};

    // evita que siempre inicie con el mismo numero
    srand(time(0));

    // da un numero aleatorio entre el 1 y 10
    n1 = (rand() % 10);

    // del numero aleatorio que se eligio imprimira la palabra que lleva esa posicion
    for (i = 0; i < 1; i++)
    {
        //printf("\nPalabra elegida de animales: %s", animales[n1]);
        //printf("\nPosicion de la lista:%i\n", n1);
        // copia la cadena de animales a palabra elegida
        strcpy(palabraElegida, animales[n1]);
    }

    // imprime palabra elegida
    //printf("La palabra que se eligio fue:\n%s\n", palabraElegida);

    // imprime la longitud de la palabra elegida
    //printf("Contiene: \n%i caracteres", strlen(palabraElegida));

    palabrasRestantes = 0;
    do
    {
        // convierte la letra a minuscula
        printf("\nIngresa una letra: ");
        scanf("%c", &letra);
        //printf("Letra ingresada: \n%c\n", tolower(letra));

        /*// la primer condicion del for se terminara cuando i sea mayor que la longitud de la palabra elegida
        for (i = 0; i < strlen(palabraElegida); i++)
        {
            // evalua si el caracter de la letra que ingreso el usuario es igual que la de la posicion que tiene i dentro de la matriz "palabra elegida"
            if (tolower(letra) == palabraElegida[i])
                printf("\nAqui va\n");
            else
                printf("\nAqui no va\n");
        }*/

        for (i = 0; i < strlen(palabraElegida); i++)
        {
            // reemplaza la letra ingresada en la poscion que pertenece
            if (tolower(letra) == palabraElegida[i])
            {
                printf("%c", palabraElegida[i]);
                palabrasRestantes++;
            }

            // imprimira un espacio los caracteres restantes
            else
                printf(" _ ");
        }
        printf("\nPalabras que llevas: %i", palabrasRestantes);
    } while (palabrasRestantes <= strlen(palabraElegida));

    return 0;
}