#include <stdlib.h>
#include <stdio.h>

int main(){
    int cat, antiguedad, contCat[3] = {0, 0, 0}, acumSueldo = 0, sueldo, acumSueldos[3] = {0, 0, 0}, sueldoMaximo, emplSueldoMaximo;
    float promedioSueldoGeneral;

    for(int i = 0; i < 6; i++){
        printf("Ingrese categoria(1, 2, 3) del empleado %d:", i + 1);
        scanf("%d", &cat);
        printf("Ingrese antiguedad en la empresa (anios): ");
        scanf("%d", &antiguedad);
        switch (cat){
            case 1: 
            contCat[0]++;
            sueldo = 1500 + (100 * antiguedad);
            acumSueldos[0] += sueldo;
            break;
            case 2: 
            contCat[1]++;
            sueldo = 2000 + (100 * antiguedad);
            acumSueldos[1] += sueldo;
            break;
            case 3:
            contCat[2]++;
            sueldo = 2500 + (100 * antiguedad);
            acumSueldos[2] += sueldo;
            break;
            default:
            printf("Categoria no valida");
        }

        acumSueldo += sueldo;
        if(i == 0 || sueldo > sueldoMaximo){
            sueldoMaximo = sueldo;
            emplSueldoMaximo = i + 1;
        }
    }
    promedioSueldoGeneral = (float)acumSueldo / 6;

    for(int i = 0; i < 3; i++){
        printf("Empleados de la categoria %d: %d\n", (i+1), contCat[i]);

        printf("Total de sueldos pagados por categoria %d: %d\n", (i + 1), acumSueldos[i]);
    }
    
    printf("Promedio de sueldos general: %.2f\n", promedioSueldoGeneral);
    printf("El empleado con mayor sueldo es el empleado %d, con un sueldo de: %d\n", emplSueldoMaximo, sueldoMaximo);
    return 0;
}