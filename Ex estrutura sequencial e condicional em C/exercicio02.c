#include <stdlib.h>
#include <stdio.h>

int main(void){

    int num;

    printf("Insira um valor para verificar se eh par ou impar: ");
    scanf("%d", &num);

    if(num == 0){
        printf("O numero %d nao eh par nem impar", num);
    }else if(num % 2 == 0){
        printf("O numero %d eh par", num);
    }else{
        printf("O numero %d eh impar", num);
    }


}