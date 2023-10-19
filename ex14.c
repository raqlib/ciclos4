#include <stdio.h>

float x=1.5;

int main() {
   
    
    while (x>=1.5 && x<=2.51) { 
    printf("%.2f elevado a 2 tem o valor de %.2f\n", x, x*x); //Potência x*x, depois atualizamos o valor do x segundo o que é pedido na sucessão, em q cada um anda de 0.2 em 0.2
    x=x+0.2;

    } 
   
    return 0;
}