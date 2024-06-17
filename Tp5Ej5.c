#include <stdlib.h>
#include <stdio.h>

int ingresarTemperatura();
void congelacion(int temperatura);
void hierve(int temperatura);

int main(){
    int temperatura, opc;
    do{
        temperatura = ingresarTemperatura();
        congelacion(temperatura);
        hierve(temperatura);

        printf("Desea continuar?\n1-Si\n2-No\n-");
        scanf("%d", &opc);
    }while(opc == 1);
    return 0;
}

int ingresarTemperatura(){
    int temp;
    printf("Ingresar temperatura: ");
    scanf("%d", &temp);
    return temp;
}

void congelacion(int temperatura){
    if(temperatura <= 0){
        printf("El agua esta congelada\n");
    }
}

void hierve(int temperatura){
    if(temperatura >= 100){
        printf("El agua esta hirviendo\n");
    }
}