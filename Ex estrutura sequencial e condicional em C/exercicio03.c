#include <stdlib.h>
#include <stdio.h>

int main(void){

    int a, b, c;

    printf("Digite o valor A: ");
    scanf("%d", &a);
    printf("Digite o valor B: ");
    scanf("%d", &b);

    if(a == b){
        c = a + b;
        printf("O resultado de a + b = %d", c);
    }else{
         c = a * b;
        printf("O resultado de a * b = %d", c);
    }

}