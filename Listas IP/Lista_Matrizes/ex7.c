#include <stdio.h>
void preenchematriz(char mtz[1000][1000], int n) {
    int c1, c2;
    for(c1=0; c1<n; c1++){
        for(c2=0; c2<(2*n)-1; c2++){
            mtz[c1][c2]=' ';
        }
        mtz[c1][c2]='\0';
    }
}
int main(void) {
    char mtz[1000][1000];
    char a, b;
    int n, c1, c2=0, c;

    scanf("%d%s%*c%c", &n, &a, &b);
    if(n%2!=0 && n>0) {    
        preenchematriz(mtz, n);
        for(c1=0; c1<=n/2; c1++) {
            mtz[c1][n-c2-1]=a;
            mtz[n-c1-1][n-c2-1]=a;
            mtz[c1][n+c2-1]=a;
            mtz[n-c1-1][n+c2-1]=a;
            c2+=2;
        }
        c2=0;
        c1=1;
        for(c=1; c1<=(n/2); c++) {
            

            mtz[c][n-c2-1]=b;
            mtz[n-c-1][n-c2-1]=b;
            mtz[c][n+c2-1]=b;
            mtz[n-c-1][n+c2-1]=b;
            c2+=2;
            if(c>=n/2) {
                c1++;
                c2=0;
                c=c1-1;
            }
        }

        for(c1=0; c1<n; c1++) {
            printf("%s\n", mtz[c1]);
        }
    }
    else printf("Dimensao invalida!");
    return 0;
}