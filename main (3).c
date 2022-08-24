
#include <stdio.h>

int main()
{
    int n,sum=0,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
    {
        if((i%2)!=0)
        {
            sum=sum+i;
        }
    }
    printf("The sum of first %d odd natural numbers are %d",n,sum);

    return 0;
}
