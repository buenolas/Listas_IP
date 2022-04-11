    #include <stdio.h>
    #include <ctype.h>
    #include <string.h>
    /*unsigned long int str_size( char * str ) {
        unsigned long int c = 0;
        while(*str!='\0') {
            if(*str>='A' && *str<='Z')c++;
            str++;
        } 
        return c;
    }*/
    int main(){
     
        char str[1000];
        int n, i=0, t=0, count1 = 0, count2 = 0, count3 = 0;
        int v,size;
     
        scanf("%d", &n);
     
        do{
            scanf("%*c%[^\n]", str);
            //printf("%s", str);
            //size = str_size(str);
            size = strlen(str);
            
            if(str[0]=='o'&&str[1]=='n')v=1;
            if(str[0]=='o'&&str[2]=='e')v=1;
            if(str[1]=='n'&&str[2]=='e')v=1;
             
            if(str[0]=='t'&&str[1]=='w')v=2;
            if(str[0]=='t'&&str[2]=='o')v=2;
            if(str[1]=='w'&&str[2]=='o')v=2;
            
            if(size==5)v=3;
            printf("%d\n", v);
            t++;
        }while(t<n);
     
        return 0;
    }