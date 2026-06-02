#include<stdio.h>

// Questão 01. Faça um programa em C que apresente um quadrado como o do
// exemplo abaixo. O usuário deve informar qual a altura ele deseja para o triângulo e
// se ele gostaria que o triângulo fosse apresentado vazado ou preenchido.

int main(){
    int base = 0, altura = 0, opcao;

    printf("qual a base e a altura do seu quadrado: ");
    scanf("%d", &altura);

    base = altura;
    
    printf("voce quer que seu retangulo seja preenchido ou vazio? (1 - prenchido, 2 - vazio)\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        for (int i = 0; i < altura; i++){
        for (int j = 0; j < base; j++){
         printf("*");   
        }        
        printf("\n");
    }    
        break;
    case 2:
        for (int i = 0; i < altura; i++){
        for (int j = 0; j < base; j++){
            if(j == 0 || j == base - 1 || i == 0 || i == altura - 1){
                printf("*");
            }else{
                printf(" ");
            }
        }        
        printf("\n");
    }        
        break;
    default:
    printf("opção invalida!");
        break;
    }

    return 0;
}