
#include <stdio.h>

int main()
{
    int n,fact=1,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
         fact=fact*i;
        
    }
    printf("The factorial of the %d is %d",n,fact);

    return 0;
}
