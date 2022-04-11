#include <stdio.h>

int main(){

    int n, t, m, i = 1;
    double a, b;
    int f = 0, count = 0;
    double X[49];
    double Y[49];
    double res[49];

    scanf("%d", &n);
    
    do{
        scanf("%d", &m);

        for(t=0;t<m;t++){
            scanf("%lf/%lf", &X[t], &Y[t]);
        }

        printf("Caso de teste %d\n", i);

        for(t=0;t<m;t++){
            a = X[t];
            b = Y[t];
            res[t] = a / b;
            }

        while(f<m){
            for(t=f;t<m;t++){
                if(res[f] == res[t]){
                    if(f!=t){
                        count++;
                        printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", X[f], Y[f], X[t], Y[t]);
                    }
                }
            }
            f++;
        }
        if(count==0)printf("Nao ha fracoes equivalentes na sequencia\n");

    count = 0;
    f = 0;
    i++;
    }while(i<=n);


    return 0;
}