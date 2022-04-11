#include <stdio.h>
#include <ctype.h>
#include <string.h>

char * le_str(int n, char *str){
    int i;
    char str2[499];
    int size = strlen(str);
    
    if(n>size){
    printf("%s\n", str);
    return 0;
    }
    else if(n==0){
        printf("\n");
        return 0;
    }
    else for(i=0;i<n;i++){
        str2[i] = str[i];
        printf("%c", str2[i]);
    }printf("\n");
    return 0;
}

int main (){

    int n_testes, n;
    char str[499];
    int i;
    char str2[499];

    scanf("%d", &n_testes);

    for(i=0;i<n_testes;i++){
        scanf("%d %[^\n]%*c", &n, str);
        
        le_str(n, str);
        //printf("%s\n", str);    
    }
    //le_str(n, str);

    //for(i=0;i<n;i++){
       // printf("%s\n", str);
    //}
    return 0;
}