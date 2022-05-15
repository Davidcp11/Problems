#include <stdio.h>

int main()
{
    int N, i, j, k, x,
        Ma[200][200],
        soma[200*200+10];

    scanf(" %d ", &N);

    i=0;
    j=0;
    k=0;

    for ( i=0; i<N; i++ )
     for ( j=0; j<N; j++ )
     {
      scanf ("%d", &Ma[ i ][ j ]);
     }

    for ( i=0; i<N; i++)
     {for ( j=0; j<N; j++)
      {
        soma[k]+=Ma[i][j];
      }
      k+=1;}
    for ( j=0; j<N; j++)
     {for ( i=0; i<N; i++)
       {soma[k]+=Ma[i][j];}
    k+=1;}
    j=0;
    for ( i=0; i<N; i++)
      { soma[k]+=Ma[i][j];
        j+=1;
    }
    k=k+1;
    i=0;
    j=(N-1);
    for ( i=0 ; i<N; i++)
    {
        soma[k]+=Ma[i][j];
        j-=1;
    }
    x=1;
    while(x<=k)
    {
        if(soma[x-1]!=soma[x])
        {
            printf("-1");
            break;
        }
        else
        {
            x+=1;
        }

    }
    if(x==k+1)
    {
        printf(" %d ", soma[k]);
    }
    return 0;
}
