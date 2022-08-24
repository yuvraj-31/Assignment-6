#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the value of N\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers are %d\n",n,sum);

    return 0;
}