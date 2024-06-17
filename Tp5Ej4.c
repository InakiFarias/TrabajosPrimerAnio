#include <stdlib.h>
#include <stdio.h>

void infoVentas(int *numProduct, int *precio, int *cantVentas);
int calcularGanancia(int precio, int cantVentas);
void calcularMenosVendido(int cantVentas, int *menorCantidad, int numProduct, int *numProductMenosVendido);

int main(){
    int n, i, numProduct, precio, cantVentas, ganancia = 0, ventasTotales = 0, menorCantidad, numProductMenosVendido; 

    printf("Ingrese cantidad de ventas: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        infoVentas(&numProduct, &precio, &cantVentas);
        ganancia += calcularGanancia(precio, cantVentas);
        ventasTotales += cantVentas;
        if(i == 0){
            menorCantidad = cantVentas;
            numProductMenosVendido = numProduct;
        }
        calcularMenosVendido(cantVentas, &menorCantidad, numProduct, &numProductMenosVendido);
    }

    printf("Ganancia total: %d\n", ganancia);
    printf("Ventas totales: %d\n", ventasTotales);
    printf("Producto menos vendido: %d\n", numProductMenosVendido);
    return 0;
}

void infoVentas(int *numProduct, int *precio, int *cantVentas){
    printf("Ingrese numero de producto: ");
    scanf("%d", numProduct);
    printf("Ingrese precio: ");
    scanf("%d", precio);
    printf("Ingrese cantidad de ventas: ");
    scanf("%d", cantVentas);
}

int calcularGanancia(int precio, int cantVentas){
    return precio * cantVentas;
}

void calcularMenosVendido(int cantVentas, int *menorCantidad, int numProduct, int *numProductMenosVendido){
    if(cantVentas < *menorCantidad){
        *menorCantidad = cantVentas;
        *numProductMenosVendido = numProduct;
    }
}