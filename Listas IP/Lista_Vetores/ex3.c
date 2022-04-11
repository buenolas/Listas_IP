    #include <stdio.h>
     
     
    int main(){
     
        int V[4999];
        int n, i;
     
        scanf("%d", &n);
     
        for(i=1;i<=n;i++){
            scanf("%d", &V[i]);
        }
     
        for(i=n; i>0; i--){
            printf("%d ", V[i]);
        }
     
        return 0;
    }