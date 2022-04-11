    #include <stdio.h>
     
    int main(){
     
        int n, m;
        int l, c;
        int i;
        int A[10][10];
     
        scanf("%d", &n);
     
        while(n>10 || n<1){
            scanf("%d", &n);
        }
        scanf("%d", &m);
        while(m>10 || m<1){
            scanf("%d", &m);
        }
     
     
        for(l=1;l<=n;l++){
            for(c=1;c<=m;c++){
                scanf("%d", &A[l][c]);
            }
        }
        for(l=1;l<=n;l++){
            printf("linha %d: ", l);
            for(c=1;c<=m;c++){
                printf("%d", A[l][c]);
                if(c+1<=m) printf(",");
            }
            printf("\n");
        }
     
     
     
        return 0;
    }