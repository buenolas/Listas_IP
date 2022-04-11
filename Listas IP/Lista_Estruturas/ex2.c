    #include <stdio.h>
    #include <ctype.h>
    #include <string.h>
     
    struct mercado{
        char nome[50];
        float valor;
    };
     
    int main(){
     
        int n, m, p;
        int i, t = 0, z;
        char comparar[50];
        float soma = 0;
        int quantidade;
        
        scanf("%d", &n);
     
        do{
            scanf("%d", &m);
            struct mercado lista[m];
     
            for(i=0;i<m;i++){
                scanf("%s", lista[i].nome);
                scanf("%f", &lista[i].valor);
            }
            scanf("%d", &p);
            for(i=0;i<p;i++){
                scanf("%s", comparar);
                scanf("%d", &quantidade);
                for(z=0;z<m;z++){
                    if(strcmp(comparar, lista[z].nome)==0){
                        soma = soma + (lista[z].valor * quantidade);
                    }
                }
            }
            printf("R$ %.2f\n", soma);
            soma = 0;
            t++;
        }while(t<n);
     
     
     
        return 0;
    }