
#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
          if((n%i)==0)
          {
              printf("given number is non prime");
              break;
          }
        
    }
    if(i==n)
    {
    printf("given number is a prime number");
    }

    return 0;
}
