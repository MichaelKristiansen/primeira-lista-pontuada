#include <stdio.h>
// Questão 07. Escreva um programa em C que apresente uma espiral quadrada de
// números na tela. O usuário deve informar o valor de N, que define uma matriz N
// por N, sendo N obrigatoriamente maior ou igual a 3. A matriz deve ser preenchida
// com os números de 1 até N ao quadrado, dispostos em forma de espiral partindo do
// canto superior esquerdo e movendo-se no sentido horário em direção ao centro. Os
// números devem ser alinhados em colunas com largura suficiente para acomodar o
// maior valor. Em caso de valor inválido, o programa deverá apresentar uma
// mensagem de erro e solicitar novamente.
// O exemplo abaixo mostra a espiral para N = 4.

//  1  2  3  4
// 12 13 14  5
// 11 16 15  6
// 10  9  8  7

// E para N = 6.

//  1  2  3  4  5  6
// 20 21 22 23 24  7
// 19 32 33 34 25  8
// 18 31 36 35 26  9
// 17 30 29 28 27 10
// 16 15 14 13 12 11
int main(){
    int tamanho_matriz = 0, n = 1, cima = 0, direita = 0, esquerda = 0, baixo = 0;
    do{
        printf("informe o tamanho da matriz: ");
        scanf("%d", &tamanho_matriz);

        if(tamanho_matriz < 2){
            printf("insira um numero maior ou igual a 2\n");
        }
    }while(tamanho_matriz < 2);

    direita = tamanho_matriz - 1;
    esquerda = 0;
    cima = 0;
    baixo = tamanho_matriz - 1;

    int matriz[tamanho_matriz][tamanho_matriz];

    while(n <= tamanho_matriz * tamanho_matriz){

        for (int j = esquerda; j <= direita; j++){
            matriz[cima][j] = n;
            n++;
        }
        cima++;
        
        for (int i = cima; i <= baixo; i++){
            matriz[i][direita] = n;
            n++;
        }
        direita--;

        for (int j = direita; j >= esquerda; j--){
            matriz[baixo][j] = n;
            n++;
        }
        baixo--;
        
        for (int i = baixo; i >= cima; i--){
            matriz[i][esquerda] = n;
            n++;
        }
        esquerda ++;
    }

    for (int i = 0; i < tamanho_matriz; i++)
        {
            for (int j = 0; j < tamanho_matriz; j++){
                printf(" ");
                if(matriz[i][j] < 10){
                    printf(" ");
                }
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
}