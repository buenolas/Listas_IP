    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
     
    struct lista{
        int code;
        float credit;
        char name[100];
    };
    typedef struct lista tabela;
    struct matricula{
        char name[500];
        int code;
        int credit;
    };
    typedef struct matricula Matricula;
     
    int main(){
        tabela *cursos;
        Matricula *alunos;
        int *codigo;
        int n, t;
        int m, i, z;
        int *creditos;
        char *nome;
     
        nome = malloc(500*sizeof(char));
        codigo = malloc(sizeof(int));
        creditos = malloc(sizeof(float));
        
        scanf("%d", &n);
        cursos = malloc(n*sizeof(tabela));
        
        
        for(t=0;t<n;t++){
            scanf("%d", &cursos[t].code); 
            scanf("%f%*c", &cursos[t].credit);
            scanf("%[^\n]", cursos[t].name);
        }
        scanf("%d%*c", &m);
        alunos = malloc(m*sizeof(Matricula));
     
        if(m>=1 && m<=1000){
            for(t=0;t<m;t++){
                scanf("%[^\n]", alunos[t].name);
                scanf("%d", &alunos[t].code);
                scanf("%d%*c", &alunos[t].credit);
            }
     
            float mens;
     
            for(z=0;z<m;z++){
                for(i=0;i<m;i++){
                    if(alunos[z].code == cursos[i].code){
                        mens = alunos[z].credit * cursos[i].credit;
                        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", alunos[z].name, cursos[i].name, alunos[z].credit, cursos[i].credit, mens);
                    }
                }
            }
        }
        free(cursos);
        free(alunos);
        free(creditos);
        free(codigo);
        free(nome);
        return 0;
    }