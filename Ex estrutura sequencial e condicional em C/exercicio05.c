#include <stdlib.h>
#include <stdio.h>

int main(void){

    int num;

    printf("Digite um valor: " );
    scanf("%d", &num);

    if(num > 0){
        printf("O dobro de %d eh %d.", num, num*2);
    }else{
        printf("O triplo de %d eh %d.", num, num*3);
    }

}