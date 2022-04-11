#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* Converte a string str para o valor inteiro correspondente.
* @param str string contendo um número inteiro
* @return o número inteiro correspondente
*/
long int string2int( const char * str ){
    long int num;
    int i;
    num = atoi(str);
    return num;
}

int main(){

    long int n;
    char string[128];

    while(scanf("%s", string)!= EOF){
        n = string2int(string);
        printf("%ld %ld\n", n, n*2);
    }

    return 0;
}