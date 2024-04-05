#include <stdio.h>

int main() {
    int size; //Tamaño del array
    int i, ii; //Variables auxiliares para los for
    printf("Ingrese la cantidad de datos a ordenar: "); //Solicitamos el dato apra definir el tamaño del array
    scanf("%d", &size);
    int arreglo[size]; //Generar el arreglo vacio

    printf("Ingrese los numeros en desorden:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arreglo[i]); // Leemos cada elemento del array desde la entrada del usuario
    }

    for (i = 0; i < size-1; i++) {
        // Acomodar los ultimos i elementos a su lugar correcto
        for (ii = 0; ii < size-i-1; ii++) {
            if (arreglo[ii] > arreglo[ii+1]) { //Comparar un elemento con su elemento siguiente
                //intercambiar ambos elementos
                int temp = arreglo[ii];
                arreglo[ii] = arreglo[ii+1];
                arreglo[ii+1] = temp;
            }
        }
    }

    printf("Numeros ordenados: \n");
    for ( i = 0; i < size; i++)
        printf("%d ", arreglo[i]);
    printf("\n");

    getchar();
    return 0;
}
