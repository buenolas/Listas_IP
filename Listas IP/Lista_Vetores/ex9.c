        #include <stdio.h>
        int main(){
         
            int n, i=0, maior, pos;
            int size, count=0;
            int V[10000];
         
            scanf("%d", &n);
         
            for(i=0;i<n;i++){
                scanf("%d", &V[i]);
                
            }  maior = V[0];  
            for(i=0;i<n;i++){
                if(V[i]>maior){
                    maior=V[i];
                    pos = i;
                }
            }   
                for(i=0;i<n;i++){
                    if(V[n-1]== V[i])count++;
                }
            printf("Nota %d, %d vezes\n", V[n-1], count);
            printf("Nota %d, indice %d\n", maior, pos);
         
            return 0;
        }