#include <stdio.h>

// Questão 02. Escreva um programa em C que apresente uma pirâmide de números
// como a que se segue. Para isso deverá pedir ao utilizador o valor de N que deverá
// ser obrigatoriamente maior ou igual 2. A pirâmide apresentada é o exemplo para N
// = 5.
//              1
//            1 2 1
//          1 2 3 2 1
//        1 2 3 4 3 2 1
//      1 2 3 4 5 4 3 2 1

int main(){
    int numero_linhas = 5, n = 1;

    do{
        printf("escolha um numero maior ou igual a 2 para montar a piramide: ");
        scanf("%d", &numero_linhas);
    }while(numero_linhas < 2 );

    for (int i = 1; i <= numero_linhas; i++){
        for(int a = 0; a <= numero_linhas - i; a++){
                printf("   ");
            }
        for (int j = 1; j <= (i * 2) - 1; j++){
            printf(" %d ", n);
            if(j < i){
                n++;
            }else{
                n--;
            }
    }
    printf("\n");
    n = 1;
    }
    return 0;
}