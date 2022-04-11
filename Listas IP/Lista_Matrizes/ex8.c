#include <stdio.h>
 
 
int ehpermutacao(int matrix[500][500], int n, int *soma){
    int i;
    int j;
    int permut;
    int cont, cont2, cont3=0, cont4=0;


    for(i=0;i<n;i++){
        cont = 0;
        cont2 = 0;
        for(j=0;j<n;j++){
            if(matrix[i][j]==1){
                cont++;
            }
            if(matrix[i][j]==0){
                cont2++;
            }
            // printf("M[%d][%d]conta 1: %d\tconta 0: %d\n",i, j, cont, cont2);
        }
        if (cont == 1 && cont2 == n-1) cont3++;
        // printf("cont3: %d\n", cont3);
    }
    for(i=0;i<n;i++){
        cont = 0;
        cont2 = 0;
        for(j=0;j<n;j++){
            if(matrix[j][i]==1){
                cont++;
            }
            if(matrix[j][i]==0){
                cont2++;
            }
        }
        if (cont == 1 && cont2 == n-1) cont4++;
    }
    if(cont3==n && cont4 ==n){
        return 1;
    }
    else return 0;
 
}
int main() {
 
    int matrix[500][500];
    int n, i, j;
    int soma=0;
    int soma2=0;
 
        scanf("%d", &n);
 
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d", &matrix[i][j]);
                soma2 += matrix[i][j];
            }
        }
 
        printf("%d\n", n);
 
        if (ehpermutacao(matrix, n, &soma) == 1) {
            printf("PERMUTACAO\n");
        }
        else {
            printf("NAO EH PERMUTACAO\n");
        }
 
        printf("%d\n", soma2);
 
    return 0;
}