    #include <stdio.h>
     
    int main(){
     
        int M[4];
        double res;
        int i;
     
        scanf("%d %d", &M[0], &M[1]);
        scanf("%d %d", &M[2], &M[3]);
     
        //for(i=0;i<4;i++){
        //    printf("%d\n", M[i]);
        //}
        res = (M[0] * M[3]) - (M[1] * M[2]);
     
        printf("%.2lf", res);
     
        return 0;
    }