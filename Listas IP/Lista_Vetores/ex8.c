    #include <stdio.h>
    #include <ctype.h>
    #include <string.h>
     
    int main(){
     
        int n, t=0, i=0, size=0, x;
        char str[1000];
        char str2[1000];
     
        scanf("%d", &n);
     
        do{
            scanf("%*c%[^\n]", str);
            size = strlen(str);
            //printf("(size: %d)\n", size);
            //printf("(str: %s)\n", str);
            while(1){
                while(str[i]!='\0'){
                    if(isalpha(str[i])){
                        str[i]+=3;
                        }i++;
                }//printf("(teste1: %s)\n", str);
                for(i=0;i<=size;i++){
                    str2[i] = str[size-i-1];
                    }//printf("(teste2: %s)\n", str2);
                int j = 0;
                j = size/2;
                for(i=j;i<size&&i!='\0';i++){
                    str2[i]-=1;
                //printf("(teste3: (%d) %c\n", i, str2[i]);
                }
            break;
            }printf("%s\n", str2);
            i=0;
            t++;
        }while(t<n);
     
        return 0;
    }