#include <stdio.h>

// Questão 03. Faça um programa em C que apresente um triângulo como o do
// exemplo abaixo. O usuário deve informar qual a altura ele deseja para o triângulo e
// se ele gostaria que o triângulo fosse apresentado vazado ou preenchido.
//      *           *
//      **          **
//      ***         * *
//      ****        *  *
//      *****       *****
int main(){
    int tamanho_triangulo = 0, tipo_triangulo = 0;

    do{
        printf("escolha o tamanho do seu triangulo(>= 2): ");
        scanf("%d", &tamanho_triangulo);
    }while(tamanho_triangulo < 2);

    do{
        printf("o triango é preenchido ou vazado? (1-prenenchido | 2-vazado) ");
        scanf("%d", &tipo_triangulo);
    }while(tipo_triangulo != 1 && tipo_triangulo != 2 );

    for (int i = 1; i <= tamanho_triangulo; i++){
        for (int j = 1; j <= i; j++){
            if( tipo_triangulo == 2 && j > 1 && j < i && i != tamanho_triangulo){
                printf(" ");
            }else{
                printf("*");
            }
            
        }
        printf("\n");
    }
    return 0;
}