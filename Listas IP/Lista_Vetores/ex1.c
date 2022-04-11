    #include <stdio.h>
    #define n_max 10000
     
    int main(){
     
        int V[n_max];
        int t, nb, i, n, j;
     
        scanf("%d", &t);
        for(i=0;i<t;i++){
            scanf("%d", &V[i]);
        }
        scanf("%d", &nb);
        for(i=0;i<nb;i++){
            scanf("%d", &n);
            for(j=0;j<t;j++){
                if(n==V[j]) break;
            }
        if(j<t) printf("ACHEI\n");
        else printf("NAO ACHEI\n");
        }
        return 0;
    }