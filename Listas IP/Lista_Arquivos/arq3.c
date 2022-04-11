    #include <stdio.h>
    #include <stdlib.h>
     
    int main(){
        FILE * arq3 = NULL;
        char c = 1;
        int t = 1;
     
        arq3 = fopen("dados.bin", "wb");
        if(arq3==NULL){
            printf("Erro ao abrir o arquivo\n");
            return 0;
        }
        while(t<=100){
            fwrite(&t, sizeof(int), 1, arq3);
            t++;
        }
     
        fclose(arq3);
     
        return 0;
    }