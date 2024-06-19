#include <stdlib.h>
#include <stdio.h>

int main(){
    int vec[50], acum = 0, prod = 1;

    for(int i = 0; i < 15; i++){
        printf("Ingrese un valor: ");
        scanf("%d", &vec[i]);

        acum += vec[i];
        prod *= vec[i];
    }

    printf("Suma de los valores del vector: %d\n", acum);
    printf("Producto de los valores del vector: %d\n", prod);

    for(int i = 14; i >= 0; i--){
        printf("Valor de la posicion %d: %d\n", i + 1, vec[i]);
    }
    return 0;
}