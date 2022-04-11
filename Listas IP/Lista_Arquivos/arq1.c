    #include <stdio.h>
    #include <stdlib.h>
     
    int main(int argc, char **argv){
     
        if(argc != 3) {
            printf(
            "Usage: \n"
            "  ./seq A B <ENTER>\n"
            );
            return 0;
        }
        int A = atoi(argv[1]);
        int B = atoi(argv[2]);
     
        FILE * arq1 = NULL;
        int i, j;
     
        arq1 = fopen("seq.txt", "wt");
        if(arq1==NULL)return 0;
     
        if(A<B){
            for(A;A<=B;A++){
                if(A==B)fprintf(arq1, "%d\n", A);
                else fprintf(arq1, "%d, ", A);
            }
        }
        else if(A>B){
            for(A;A>=B;A--){
                if(A==B)fprintf(arq1, "%d\n", A);
                else fprintf(arq1, "%d, ", A);
            }
        }
     
        fclose(arq1);
     
     
        return 0;
    }