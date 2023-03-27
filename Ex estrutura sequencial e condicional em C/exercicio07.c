#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    float peso, altura, imc;

    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso/(altura * altura);

    if (imc < 20)
    {
        printf("Abaixo do peso");
    }
    else if (imc >= 20 & imc < 25)
    {
        printf("Peso normal");
    }
    else if (imc >= 25 & imc < 30)
    {
        printf("Sobre peso");
    }
    else if (imc >= 30 & imc < 40)
    {
        printf("Obeso");
    }
    else if (imc >= 40)
    {
        printf("Obeso mórbido");
    }
}