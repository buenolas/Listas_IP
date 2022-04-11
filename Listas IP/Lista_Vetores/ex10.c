    #include <stdio.h>
     
    int main (){
     
        int n, i, j, maior=0, menor=0;
        int V[1000];
        int V2[1000];
     
        scanf("%d", &n);
     
        for(i=0;i<n;i++){
            scanf("%d", &V[i]);
            menor = V[0];
            maior = V[0];
        }
        for(i=0;i<n;i++){
            if(V[i]>=maior)maior=V[i];
            if(V[i]<=menor)menor=V[i];
            //printf("%d ; %d\n", maior, menor);
        }
        for(i=0;i<n;i++){
            printf("%d ", V[i]);
        }printf("\n");
        for(i=n-1;i>=0;i--){
            printf("%d ", V[i]);
        }
        printf("\n%d\n%d\n", maior, menor);
        return 0;
    }