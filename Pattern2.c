#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the value: ");
    scanf("%d",&n);
    for(i=1;i <= n; i++)
    {
        printf("\n",i);
        
        for(j=0;j <= 5; j++)
        {
            printf("*",j);
        }
    }
    return 0;
}