
#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
         n=n/10;
        
    }
    printf("The number of digits in the number are %d",i-1);

    return 0;
}
