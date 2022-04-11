    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
     
    int main()
    {
     
      int V[12221];
      int C, B, E;
      int i, j, k, l = 0, m = 0, n;
      int aux, reverse;
      scanf("%d", &C);
      for (n = 0; n < C; n++)
      {
        scanf("%d %d", &B, &E);
        if (1 <= B <= E <= 12221)
        {
          for (j = B; j <= E; j++)
          {
            printf("%d", j);
          }
          for (i = E; i >= B; i--)
          {
            V[l] = i;
            l++;
          }
          for (k = 0; k < l; k++)
          {
            aux = V[m];
            while (aux > 0)
            {
              reverse = aux % 10;
              printf("%d", reverse);
              aux /= 10;
            }
            m++;
          }
          if (B == 0)
          {
            printf("%d", 0);
          }
          printf("\n");
          l = 0;
          m = 0;
        }
      }
      return 0;
    }