
#include <stdio.h>

int main()
{
    int n,sum=0,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         sum=sum+(i*i);
        
    }
    printf("The sum of squares of first %d natural numbers are %d",n,sum);

    return 0;
}
