    #include <stdio.h>
     
    int main(){
     
        int n_teste, n, n2, k, i, tag = 0;
        int V[1000];
        
        scanf("%d", &n);
     
        if(n<=0 || n>=1000){
            do {
                scanf("%d", &n_teste);
            }while (n_teste <= 0 || n_teste >= 1000);
            n = n_teste;
        }
        
        for(i=1;i<n+1;i++){
            scanf("%d", &V[i]);
            
        }
        
        scanf("%d", &k);
     
        for(i=1;i<n+1;i++){
            if(V[i]>=k) tag++;
            //printf("%d", tag);
        }
        printf("%d", tag);
        return 0;
    }