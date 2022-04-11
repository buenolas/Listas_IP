#include <stdio.h>

int verifica_max(int *count){
    int i, max;

    max = count[0];
    for(i=1;i<16;i++){
        if(max<count[i]){
            max = count[i];
        }
    }
    return max;
}

int main(){
    int matriz[6][6];
    int i, j, z = 0;
    int count[16];
    int soma;
    int max;

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j]<-9||matriz[i][j]>9)return 0;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            soma = matriz[i][j] + matriz[i][j+1] + matriz[i][j+2] + matriz[i+1][j+1] + matriz[i+2][j] + matriz[i+2][j+1] + matriz[i+2][j+2];
            count[z] = soma;
            z++;
        }
    }
    max = verifica_max(count);

    printf("%d\n", max);

    return 0;
}