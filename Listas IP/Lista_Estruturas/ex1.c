    #include <stdio.h>
    #include <stdlib.h>

    struct fracao{
        double numerador;
        double denominador;
        double quociente;
    };
    
    int main(){
     
        int n, t, m, i = 1;
        double a, b;
        int f = 0, count = 0;
        struct fracao *fracoes;

        scanf("%d", &n);
        
        do{
            scanf("%d", &m);
     
            fracoes = malloc((m*3)*sizeof(double));

            for(t=0;t<m;t++){
                scanf("%lf/%lf", &fracoes[t].numerador, &fracoes[t].denominador);
            }
     
            printf("Caso de teste %d\n", i);
     
            for(t=0;t<m;t++){
                a = fracoes[t].numerador;
                b = fracoes[t].denominador;
                fracoes[t].quociente = a / b;
                }
     
            while(f<m){
                for(t=f;t<m;t++){
                    if(fracoes[f].quociente == fracoes[t].quociente){
                        if(f!=t){
                            count++;
                            printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", fracoes[f].numerador,
                             fracoes[f].denominador, fracoes[t].numerador, fracoes[t].denominador);
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
     
        free(fracoes);
     
        return 0;
    }