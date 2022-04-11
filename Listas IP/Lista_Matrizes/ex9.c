#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
    int n, n2, i, j, maior=0, menor=1000;
    int ** m;
    double res1=0, res2=0, total=0, maior_acm=0, menor_acm=0;
 
    scanf("%d %d", &n, &n2);
 
    m=(int **)calloc(n, sizeof(int*));
    for(i=0;i<n;i++){
        m[i]=(int*)calloc(n2, sizeof(int));
    }
 
    for(i=0;i<n;i++){
        for(j=0;j<n2;j++){
            scanf("%d", &m[i][j]);
            if(m[i][j]>maior){
                maior=m[i][j];
            }
            if(m[i][j]<menor){
                menor=m[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n2;j++){
            if(m[i][j]==menor){
                menor_acm++;
            }
            if(m[i][j]==maior){
                maior_acm++;
            }
        }
    }
 
    total=n*n2;
    res1=(menor_acm/total)*100;
    res2=(maior_acm/total)*100;
    
    printf("%d %.2lf%%\n", menor, res1);
    printf("%d %.2lf%%\n", maior, res2);
 
    return 0;
}