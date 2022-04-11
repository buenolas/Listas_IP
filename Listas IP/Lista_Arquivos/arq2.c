    #include <stdio.h>
    #include <stdlib.h>
     
    int main(){
        FILE * arq2 = NULL;
        char c = 1;
        int t = 1;
     
        arq2 = fopen("dados", "wt");
        if(arq2==NULL){
            printf("Erro ao abrir o arquivo\n");
            return 0;
        }
        while(t<=100){
            fprintf(arq2, "%d\n", t);
            t++;
        }
     
        fclose(arq2);
     
        return 0;
    }