#include <stdlib.h>
#include <stdio.h>

void inicialiarVector(int vec[], int n);

int main(){
    int vec[15], acum = 0, prod = 1, cantElem = 15;

    inicialiarVector(vec[cantElem], cantElem);
    for(int i = 0; i < cantElem; i++){
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

void inicialiarVector(int vec[], int n){
    for(int i = 0; i < n; i++){
    printf("Ingrese un valor: ");
    scanf("%d", &vec[i]);
    }
}