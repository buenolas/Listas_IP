    #include <stdio.h>
     
    int main(){
        
        int N, K;
        int A[1000];
        int i;
        int count = 0;
        
        scanf("%d %d", &N, &K);
        
        for(i=1;i<=N;i++){
            scanf("%d", &A[i]);
        }
        for(i=1;i<=N;i++){
            if(A[i]<=0)count++;
        }
        if(count>=K){
            printf("NAO\n");
            for(i=N;i>0;i--){
                if(A[i]<=0){
                    printf("%d\n",i);
                }
            }
        }
        else printf("SIM\n");
        
        return 0;
    }