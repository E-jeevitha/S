#include <stdio.h>

int main()
{
    int i,n,p=1,j,k;
    scanf("%d",&n);
    while(0<n)
    {
    for(i=0;i<=p;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf(" ");

    }
    printf("\n");
    n--;
    }
    return 0;
}
