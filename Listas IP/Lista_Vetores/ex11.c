    #include <stdio.h>
     
    void trade(double* x, double* y)
    {
        int temp;
     
        temp = *x;
        *x = *y;
        *y = temp;
    }
     
    void ordem(double vet[], int n)
    {
        int i, j;
     
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(vet[j] > vet[j+1])
                {
                    trade(&vet[j], &vet[j+1]);
                }
            }
        }
    }
     
    int main (){
     
        int n,i;
        double V[2^64], mediana, soma;
     
        scanf("%d", &n);
     
        for(i=0;i<n;i++){
            scanf("%lf", &V[i]);         
        }   
       
        ordem(V, n);
     
        for(i=0;i<n;i++){
            if(n%2==0){
                soma = V[(n/2) - 1] + V[n/2];
                mediana = soma / 2; 
            }
            else mediana = V[(n/2)];
        }   
        printf("%.2lf\n", mediana);
     
        return 0;
    }