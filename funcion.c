#include <stdio.h>

int main(){
    int n, i;

    printf("¿Cuantos valores de la sucesión a partir del 1 quieres calcular?");
    scanf("%d", &i);
    int resultados[i];
    for (n=1; n<=i; n++){
        resultados[n] = (n*(n + 1)*(2*n + 1))/6;
        printf("%d", resultados[n]);
        printf("\n");
    }

    return 0;
}