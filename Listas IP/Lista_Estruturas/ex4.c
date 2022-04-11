    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
     
    struct vetores{
        double u, x, y, z;
        double norma;
    };
     
    typedef struct vetores vet;
     
    void trade(vet *pontos, vet *ponto)
    {
        vet temp;
     
        temp = *pontos;
        *pontos = *ponto;
        *ponto = temp;
    }
     
    void ordem(struct vetores *pontos, int n)
    {
        int i, j;
     
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(pontos[j].norma > pontos[j+1].norma)
                {
                    trade(&pontos[j], &pontos[j+1]);
                }
            }
        }
    }
     
    int main(){
     
        int n, i;
        vet *pontos;
        double getpow;
     
        scanf("%d", &n);
        
        pontos = malloc((n*4)*sizeof(vet));
     
        for(i=0;i<n;i++){
            scanf("%lf%lf%lf%lf", &pontos[i].u,
                                  &pontos[i].x,
                                  &pontos[i].y,
                                  &pontos[i].z);
        }
     
        for(i=0;i<n;i++){
            getpow = pow(pontos[i].u, 2) + pow(pontos[i].x, 2)
                   + pow(pontos[i].y, 2) + pow(pontos[i].z, 2);
            pontos[i].norma = sqrt(getpow);
            getpow = 0;
        }
     
        ordem(pontos, n);
     
        for(i=0;i<n;i++){
            printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n",pontos[i].u,
                                                              pontos[i].x,
                                                              pontos[i].y,
                                                              pontos[i].z,
                                                              pontos[i].norma);
       
        
        }
         free(pontos);
        return 0;
    }