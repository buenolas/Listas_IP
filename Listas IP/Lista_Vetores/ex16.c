    #include <stdio.h>
    #define n_max 5000
     
    int verifica_repeticao(int * v, int t, int n)
    {
        int i, r = 0;
        for(i=0;i<t;i++){
            if(n==v[i]) r++;
        }
        return r;
     
     
    }
     
    int main(){
     
        int V[n_max - 1];
        int t, i, r, c = 0;
     
        scanf("%d", &t);
     
        for(i=0;i<t;i++){
            scanf("%d", &V[i]);
        }
     
        for(i=0;i<t;i++){
            r = verifica_repeticao(V, t, V[i]);
            if(r==1) c++;
        }
        printf("%d\n", c);
     
        return 0;
    }