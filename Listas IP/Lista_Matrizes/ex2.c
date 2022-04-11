    #include <stdio.h>
     
    int main(){
     
        int n;
        int i;
     
        scanf("%d", &n);
     
        int l = n, c = n;
        int M[l][c];
     
        for(l=1;l<=n;l++){
            for(c=1;c<=n;c++){
                scanf("%d", &M[l][c]);
            }
        }
        int t = n;
        while(t>0){
            for(l=1;l<=n;l++){
                for(c=t;c>=t;c--){
                    printf("%d\n", M[l][c]);
                }t--;
            }
        }
        return 0;
    }