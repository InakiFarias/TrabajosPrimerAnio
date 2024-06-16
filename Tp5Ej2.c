#include <stdio.h>
#include <stdlib.h>

void calculadora(int opc, float a, float b);
float sumar(float a, float b);
float restar(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

int main(){
    float a, b;
    int opc;

    printf("1-Sumar:\n2-Restar:\n3-Dividir:\n4-Multiplicar: \n");
    scanf("%d", &opc);

    printf("Introduzca el primer valor: ");
    scanf("%f", &a);
    printf("Introduzca el segundo valor: ");
    scanf("%f", &b);
    
    calculadora(opc, a, b);

    return 0;
}

float sumar(float a, float b){
    return (a + b);
}

float restar(float a, float b){
    return (a - b);
}

float dividir(float a, float b){
    return (a / b);
}

float multiplicar(float a, float b){
    return (a * b);
}

void calculadora(int opc, float a, float b){
    float suma, resta, div, mult;
    switch (opc){
        case 1:
        suma = sumar(a, b);
        printf("Suma: %.2f", suma);
        break;
        case 2:
        resta = restar(a, b);
        printf("Resta: %.2f", resta);
        break;
        case 3:
        div = dividir(a, b);
        if(b == 0){
            printf("No se puede dividir por 0");
        }
        else{
            printf("Division: %.2f", div);
        }
        break;
        case 4:
        mult = multiplicar(a, b);
        printf("Producto: %.2f", mult);
        break;
        default:
        printf("OPERACION NO VALIDA");
        break;
    }
}