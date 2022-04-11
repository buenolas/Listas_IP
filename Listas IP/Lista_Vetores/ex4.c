    #include <stdio.h>
    #define n_max 10^100
     
    unsigned long int str_size( char * str ) {
        unsigned long int c = 0;
        while(*str!='\0') {
            str++;
            c++;
        } 
        return c;
    }
    int main(){
     
        char V[n_max];
        int n, r = 0, i, t = 0, count = 0;
            
        scanf("%d", &n);
        
        do{    
            scanf("%s", &V);
            //printf("%s\n", V);
            int k = str_size(V);
            //printf("%d\n", k);
            for(i=0;i<k; i++){
                if(V[i]== '1') count = count + 2;
                else if(V[i] == '2' || V[i]== '3' || V[i]== '5') count = count + 5;
                else if(V[i]== '4') count = count + 4;
                else if(V[i]== '6' || V[i]== '9' || V[i]== '0') count = count + 6;
                else if(V[i]== '7') count = count + 3;
                else if(V[i] == '8')count = count + 7;
                //printf("%d leds\n", count);
            }t++;
            printf("%d leds\n", count);
                count = r;
        }while(t<n);
     
        return 0;
    }