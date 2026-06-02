#include <stdio.h>
int main(){
    int base_arvore = 0, largura_tronco = 0, altura_tronco = 0;
    // B = base_arvore, L = largura_tronco, A = altura_tronco
    
    do{
        printf("informe a base do topo da arvore de natal: ");
        scanf("%d", &base_arvore);

        if(base_arvore < 3){
            printf("a base da arvore precisa ser maior ou igual a 3!\n");
        }
        if(base_arvore % 2 == 0){
            printf("a base da arvore precisa ser um valor impar!\n");
        }
    }while(base_arvore < 3 || base_arvore % 2 == 0);

    do{
        printf("informe a largura do tronco da arvore de natal: ");
        scanf("%d", &largura_tronco);

        if(largura_tronco < 1){
            printf("a largura troco precisa ter pelo menos 1 de largura!\n");
        }
        if(largura_tronco % 2 == 0){
            printf("a largura do tronco precisa ser um valor impar!\n");
        }
        if(largura_tronco > base_arvore/2){
            printf("a largura do tronco nao pode ser um valor maior que a metade da base da arvore!\n");
        }
    }while(largura_tronco < 1 || largura_tronco % 2 == 0 || largura_tronco > base_arvore/2);
    
    do{
       printf("informe a altura do tronco da arvore de natal: ");
        scanf("%d", &altura_tronco);
        
        if(altura_tronco < 2){
            printf("a altura troco precisa ser maior ou igual a 2!\n");
        }
        if(altura_tronco > base_arvore/2){
            printf("a altura do tronco nao pode ser um valor maior que a metade da base da arvore!\n");
        }
    } while (altura_tronco < 2 || altura_tronco > base_arvore/2);
    
    for (int i = 1; i <= base_arvore; i+=2)
    {
        for (int j = 1; j <= (base_arvore - i)/2; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < altura_tronco; i++)
    {
        for (int j = 1; j <= (base_arvore-largura_tronco)/2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < largura_tronco; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}