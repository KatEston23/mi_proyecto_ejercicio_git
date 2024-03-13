#include <stdio.h>

int main()
{

    int numero = 3, numero2 = 4, suma = numero + numero2;

    printf("La suma de los numeros %d y %d es: %d", numero, numero2, suma);

    if (suma % 2 == 0)
    {
        printf("\nEl resultado es par");
    }
    else
    {
        printf("\nEl resultado es impar");
    }

    return 0;
}
