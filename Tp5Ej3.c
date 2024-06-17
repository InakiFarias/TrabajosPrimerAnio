#include <stdlib.h>
#include <stdio.h>

int ingresarNumero();
void calcular(int num, int *pares, int *impares, int *positivos, int *negativos);
void mostrarInfo(int pares, int impares, int positivos, int negativos);

int main(){
    int n, i, num, pares = 0, impares = 0, positivos = 0, negativos = 0;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        num = ingresarNumero();
        calcular(num, &pares, &impares, &positivos, &negativos);
    }
    
    mostrarInfo(pares, impares, positivos, negativos);

    return 0;
}

int ingresarNumero(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    return num;
}

void calcular(int num, int *pares, int *impares, int *positivos, int *negativos){
    if(num > 0){
        (*positivos)++;
    }
    else{
        if(num < 0){
        (*negativos)++;
        }
    }
    if(num % 2 == 0){
        (*pares)++;
    }
    else{
        (*impares)++;
    }
}

void mostrarInfo(int pares, int impares, int positivos, int negativos){
    printf("Pares: %d\n", pares);
    printf("impares: %d\n", impares);
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
}