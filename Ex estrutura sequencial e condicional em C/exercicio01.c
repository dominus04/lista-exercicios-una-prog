#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a, b, c, somaAB;

    printf("Digite o valor A: ");
    scanf("%d", &a);
    printf("Digite o valor B: ");
    scanf("%d", &b);
    printf("Digite o valor C: ");
    scanf("%d", &c);
    somaAB = a + b;

    if(somaAB < c){
        printf("A + B = %d \nC = %d \nSim, A + B eh menor que C", somaAB, c);
    }else{
        printf("A + B = %d \nC = %d \nNao, A + B nao eh menor que C",somaAB , c);
    }
    

}