#include <stdio.h>
#include <ctype.h>
#include <string.h>

void upper_case(char * s) {
	int i = 0;
	while(1) {
		if(s[i] == '\0') break;
		if(s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 32;
			// s[i] = s[i] + ('A'-'a');
		}
		i++;
	}
}
unsigned long int str_size( char * str ) {
	unsigned long int c = 0;
	while(*str!='\0') {
		if(*str>='A' && *str<='Z')c++;
        str++;
	} 
	return c;
}
int main(){

    int n, i, t=0, cl = 0, cv, cc, k = 0;
    char str[10000];

    scanf("%d", &n);

    do{
        scanf("%*c%[^\n]", str);
        upper_case(str);
        cl = str_size(str);
        
        while(str[i]!='\0'){
            if(isalpha(str[i])){
                if(str[i]=='A' || str[i]=='E' || str[i]=='I' ||str[i]=='O' ||str[i]=='U')cv++;
                else cc++;
            }
        i++;
        }   
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", cl, cv, cc);
        t++;
        cc=0;
        i=0;
        cv=0;
    }while(t<n);
    
    return 0;
}