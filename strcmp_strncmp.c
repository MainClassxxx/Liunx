#include <stdio.h>

int main()
{
    // int a[10]={1,2,3,4,5,6,7,8,9,10};
    // int *b=a;
    // printf("%d\n",*b);
    // printf("%d\n",*(++b));
    int aq[5][5]={0};
    int j,i,k=0;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<5;j++){
            aq[i][j]=k++;
        }
    }
    int *bq[5];

    for ( i = 0; i < 5; i++)
    {
        bq[i]=aq[i];
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*bq[i]);
    }
    
    
    return 0;
}