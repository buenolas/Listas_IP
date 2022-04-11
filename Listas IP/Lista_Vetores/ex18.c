#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char * converte_string(char *string, int size){
int i;
int count = 0;

    for(i=0;i<size;i++){
        if((string[i]>='A' && string[i]<='Z') || (string[i]>='a' && string[i]<='z')){
            count++;
            if((count+2)%2!=0){
                string[i] = toupper((unsigned char) string[i]);
            }
            else string[i] = tolower((unsigned char) string[i]);
        }
    }
    return string;
}

int main(){
    char string[49];
    int i, size;
    int count = 0;
    char recebe_str[49];

    while(scanf("%[^\n]%*c", string)!=EOF){
        size = strlen(string);        
        strcpy(recebe_str, converte_string(string, size));
        printf("%s\n", recebe_str);
    }

    return 0;
}