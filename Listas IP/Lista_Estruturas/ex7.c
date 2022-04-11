    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
     
    typedef struct pontos{
        float u[998];
        float x[998];
        float y[998];
        float z[998];
    }Pontos;
     
    int main(){
        int n, i;
        Pontos *pts;
        float *dist; // saídas
     
     
        scanf("%d", &n);
        if(n<2||n>1000)return 0;
     
        dist = malloc((n * 6) * sizeof(float));
        pts = malloc((n*4) * sizeof(float));
     
        for(i=0;i<n;i++){
            scanf("%f%f%f%f", &pts->u[i], &pts->x[i], &pts->y[i], &pts->z[i] );
        }
        
        for(i=0;i<n;i++){
            dist[i] = sqrt( pow((pts->u[i] - pts->u[i+1]), 2) + pow((pts->x[i] - pts->x[i+1]), 2) + pow((pts->y[i] - pts->y[i+1]), 2) + pow((pts->z[i] - pts->z[i+1]), 2) );
        }
        for(i=0;i<n-1;i++){
            printf("%.2lf\n", dist[i]);
        }
     
        return 0;
    }