#include <stdio.h>
#include <stdlib.h>

int main(){
    int sueldos[10], edades[10], acumSueldos = 0, acumEdades = 0, acumSueldosEntre = 0, cantEntre = 0;
    float promedioSueldos, promedioEdades, promedioSueldosEntre;

    for(int i = 0; i < 10; i++){
        printf("Ingrese sueldo: ");
        scanf("%d", &sueldos[i]);
        printf("Ingrese edad: ");
        scanf("%d", &edades[i]);

        acumSueldos += sueldos[i];
        acumEdades += edades[i];

        if(edades[i] >= 23 && edades[i] <= 40){
            acumSueldosEntre += sueldos[i];
            cantEntre++;
        }
    }

    promedioSueldos = (float)acumSueldos / 10;
    promedioEdades = (float)acumEdades / 10;
    promedioSueldosEntre = (float)acumSueldosEntre /cantEntre;

    printf("Sueldo promedio: %.2f\n", promedioSueldos);
    printf("Edad promedio: %.2f\n", promedioEdades);
    printf("Sueldo promedio de edades entre 23 y 40 anios: %.2f\n", promedioSueldosEntre);

    return 0;
}

