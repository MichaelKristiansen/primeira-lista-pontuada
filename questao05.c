#include <stdio.h>

int main(){
    int tamanho_triangulo = 0;
    do{
        printf("informe a quantidade de linhas do triangulo de Pascal: ");
        scanf("%d", &tamanho_triangulo);
        if(tamanho_triangulo < 1){
            printf("insira um valor maior do que 0!\n");
        }
    }while(tamanho_triangulo < 1);

    int triangulo[tamanho_triangulo][tamanho_triangulo];

    for (int i = 0; i < tamanho_triangulo; i++){
        for (int j = 0; j < tamanho_triangulo; j++){
            if( j > i){
                triangulo[i][j] = 0;
            }
            else if( i == j || j == 0){
                triangulo[i][j] = 1;
            }
            else{
                triangulo[i][j] = triangulo[i-1][j] + triangulo[i-1][j-1];
            }
        }   
    }

    for (int i = 0; i < tamanho_triangulo; i++){
        for (int j = 0; j < tamanho_triangulo - i - 1; j++){
            printf ("  ");
        }
        
        for (int j = 0; j < tamanho_triangulo; j++){
            if( j > 0 && j <= i){
                printf(" ");
            }
            if( j <= i){
                printf(" %d ", triangulo[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}