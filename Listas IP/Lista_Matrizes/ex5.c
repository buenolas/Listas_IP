    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
     
    struct paises{
        char nome[50];
        char traducao[50];
    };
    int main(){
     
        struct paises *lista;
        int i, z;
        int testador = 0;
        char *str;
        int t = 0;
     
        str = (char *) malloc(128 * sizeof(char));
        lista = malloc(2400 * sizeof(char));
     
        strcpy(lista[0].nome, "brasil");
        strcpy(lista[0].traducao, "Feliz Natal!");
        strcpy(lista[1].nome,"alemanha");
        strcpy(lista[1].traducao,"Frohliche Weihnachten!");
        strcpy(lista[2].nome,"austria");
        strcpy(lista[2].traducao,"Frohe Weihnacht!");
        strcpy(lista[3].nome, "coreia"); 
        strcpy(lista[3].traducao, "Chuk Sung Tan!");
        strcpy(lista[4].nome, "espanha");
        strcpy(lista[4].traducao, "Feliz Navidad!");
        strcpy(lista[5].nome, "grecia");
        strcpy(lista[5].traducao,"Kala Christougena!");
        strcpy(lista[6].nome, "estados-unidos");
        strcpy(lista[6].traducao,"Merry Christmas!");
        strcpy(lista[7].nome, "inglaterra"); 
        strcpy(lista[7].traducao,"Merry Christmas!");
        strcpy(lista[8].nome, "australia"); 
        strcpy(lista[8].traducao,"Merry Christmas!");
        strcpy(lista[9].nome, "portugal"); 
        strcpy(lista[9].traducao,"Feliz Natal!");
        strcpy(lista[10].nome, "suecia"); 
        strcpy(lista[10].traducao,"God Jul!");
        strcpy(lista[11].nome,"turquia"); 
        strcpy(lista[11].traducao,"Mutlu Noeller");
        strcpy(lista[12].nome, "argentina"); 
        strcpy(lista[12].traducao,"Feliz Navidad!");
        strcpy(lista[13].nome, "chile"); 
        strcpy(lista[13].traducao, "Feliz Navidad!");
        strcpy(lista[14].nome, "mexico");
        strcpy(lista[14].traducao, "Feliz Navidad!");
        strcpy(lista[15].nome, "antardida"); 
        strcpy(lista[15].traducao, "Merry Christmas!");
        strcpy(lista[16].nome, "canada"); 
        strcpy(lista[16].traducao, "Merry Christmas!");
        strcpy(lista[17].nome, "irlanda"); 
        strcpy(lista[17].traducao,"Nollaig Shona Dhuit!");
        strcpy(lista[18].nome, "belgica"); 
        strcpy(lista[18].traducao, "Zalig Kerstfeest!");
        strcpy(lista[19].nome, "italia"); 
        strcpy(lista[19].traducao,"Buon Natale!");
        strcpy(lista[20].nome, "libia"); 
        strcpy(lista[20].traducao, "Buon Natale!");
        strcpy(lista[21].nome, "siria");
        strcpy(lista[21].traducao,"Milad Mubarak!");
        strcpy(lista[22].nome, "marrocos"); 
        strcpy(lista[22].traducao, "Milad Mubarak!");
        strcpy(lista[23].nome, "japao");
        strcpy(lista[23].traducao,"Merii Kurisumasu!");
     
        while(scanf("%[^\n]%*c", str)!=EOF){
     
            //scanf("%[^\n]%*c", str);
     
                for(z=0;z<24;z++){
                    if(strcmp(str, lista[z].nome) == 0){
                        printf("%s\n", lista[z].traducao);
                        testador++;
                        break;
                        
                    }
                }
                if(testador == 0) printf("-- NOT FOUND --\n");
                testador = 0;
        }
        
     
     
        return 0;
    }