#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the value: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) 
    {
    printf("Outer loop value: %d\n", i);
    for (j = 1; j <= n; j++) 
    {
    printf("Inner loop value: %d\n", j);
    }
}
return 0;
}