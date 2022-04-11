#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
    int i, j, n, m, k=0, l=0;
    int ** mat;
 
    scanf("%d %d", &n, &m);
 
    if((n<0 || n>10) || (m<0 || m>10)){
        printf("Dimensao invalida");
        return 0;
    }
 
    mat = (int **) calloc(n, sizeof(int*));
    for(i=0;i<n;i++){
        mat[i]=(int*)calloc(m, sizeof(int));
    }
 
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    while(k<n && l<m){
        for(i=l;i<m;i++){
            printf("%d ", mat[k][i]);
        }
        k++;
        for(i=k;i<n;i++){
            printf("%d ", mat[i][m-1]);
        }
        m--;
        if(k<n){
            for(i=m-1;i>=l;i--){
                printf("%d ", mat[n-1][i]);
            }
            n--;
        }
        if(l<m){
            for(i=n-1;i>=k;i--){
                printf("%d ", mat[i][l]);
            }
            l++;
        }
    }
 
    return 0;
}