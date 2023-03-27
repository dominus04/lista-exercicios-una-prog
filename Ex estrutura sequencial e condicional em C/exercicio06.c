#include <stdlib.h>
#include <stdio.h>

int main(void){

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    if(media >= 0 & media < 3){
        printf("REPROVADO");
    }else if(media >= 3 & media < 7){
        printf("EXAME");
    }else if(media >= 7 & media < 10){
        printf("APROVADO");
    }

}