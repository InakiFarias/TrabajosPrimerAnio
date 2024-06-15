#include <stdio.h>
#include <stdlib.h>

int ingresarSueldo(); 
int calcularMenor(int sueldo, int sueldoMenor);
int calcularMayor(int sueldo, int sueldoMayor);
void mostrarInfo(int acumulado, float promedio, int sueldoMenor, int sueldoMayor, int cantidadSueldos);

int main(){
    int n, sueldo, i, sueldoMenor, sueldoMayor, acumulado = 0;
    float promedio;

    printf("Ingresar cantidad de sueldos: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        sueldo = ingresarSueldo();
        if (i == 0){
            sueldoMayor = sueldo;
            sueldoMenor = sueldo;
        }
        acumulado += sueldo;
        sueldoMenor = calcularMenor(sueldo, sueldoMenor);
        sueldoMayor = calcularMayor(sueldo, sueldoMayor);        
    }
    promedio = (float)acumulado / n;
    mostrarInfo(acumulado, promedio, sueldoMenor, sueldoMayor, n);
}

int ingresarSueldo(){
    int sueldo;
    printf("Ingresar sueldo: ");
    scanf("%d", &sueldo);
    return sueldo;
}

int calcularMenor(int sueldo, int sueldoMenor){
    if(sueldo < sueldoMenor){
        sueldoMenor = sueldo;
    }
    return sueldoMenor;
}

int calcularMayor(int sueldo, int sueldoMayor){
    if(sueldo > sueldoMayor){
        sueldoMayor = sueldo;
    }
    return sueldoMayor;
}

void mostrarInfo(int acumulado, float promedio, int sueldoMenor, int sueldoMayor, int cantidadSueldos){
    printf("La suma de los sueldos es: %d\n", acumulado);
    printf("Promedio de sueldos: %.2f\n", promedio);
    printf("Sueldo menor: %d\n", sueldoMenor);
    printf("Sueldo mayor: %d\n", sueldoMayor);
    printf("Cantidad de sueldos: %d\n", cantidadSueldos);
}