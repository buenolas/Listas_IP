#include <stdio.h>
 
int main(){
    int caminhos[6][6] = {0, 63, 210, 190, 10000, 190, 63, 0, 160, 150, 95, 10, 210, 160, 0, 10, 1, 10, 190, 150, 10, 0, 10, 20, 10, 95, 7, 21, 0, 80, 190, 2, 10000, 41, 80, 0};
    int tamanho, vetor[100], cont, a, b, total=0;
 
    scanf("%d", &tamanho);
    for(cont=0; cont<tamanho; cont++)
    {
        scanf("%d", &vetor[cont]);
    }

    for(cont=0; cont<tamanho; cont++)
    {
        if(cont < tamanho-1){
            a = vetor[cont];
            b = vetor[cont+1];
            if(caminhos[a][b] == 10000)
            {
                printf("rota invalida!\n");
                return 0;
            }
               total = total + caminhos[a][b];
        }
    } 
    printf("%d\n", total);
    return 0;
}