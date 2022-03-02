#include <stdio.h>;

float calculo_IMC(peso, altura){
    return (peso/altura*altura);
}

int main(void){

    float peso;
    float altura;
    float IMC;

    printf("Informe a altura em metros: ");
    scanf("%f", &altura);
    
    printf("Informe o peso em Kg: ");
    scanf("%f", &peso);

    IMC = calculo_IMC();

    if (IMC < 18.5)
    {
        printf("Situacao: Abaixo do peso");
    } else if (18.5 <= IMC < 24.9) {
        printf("Situacao: Peso ideal");
    } else {
        printf("Situacao: Sobrepeso");
    }
    

    return 0;
}

