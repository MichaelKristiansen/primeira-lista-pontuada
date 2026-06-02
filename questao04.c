#include <stdio.h>
// Questão 04. Implemente um programa que desenhe o losango abaixo na tela. O
// usuário deve informar a largura central do losango.
//         X
//        XXX
//       XXXXX
//      XXXXXXX
//     XXXXXXXXX
//      XXXXXXX
//       XXXXX
//        XXX
//         X

int main(){
    int largura_losango = 0;
    do{
        printf("informe a largura do losango: ");
        scanf("%d", &largura_losango);
        
        if (largura_losango % 2 == 0 || largura_losango < 1){
            printf("escolha um numero positivo impar\n");
        }
    }while(largura_losango % 2 == 0 || largura_losango < 1);
    

    for (int i = 1; i <= largura_losango; i+=2){
        for (int j = 1; j <= (largura_losango - i)/2; j++){
            printf(".");
        }
        for (int j = 1; j <= i; j++){
            printf("X");
        }
        printf("\n");
    }
    for (int i = largura_losango - 2; i >= 1; i-=2){
        for (int j = 1; j <= (largura_losango - i)/2; j++){
            printf(".");
        }
        for (int j = 1; j <= i; j++){
            printf("X");
        }
        printf("\n");
    }
    return 0;
}