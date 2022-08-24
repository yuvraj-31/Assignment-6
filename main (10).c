
#include <stdio.h>

int main()
{
    int n,i,rev=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
       rev=(rev*10)+(n%10);
       n=n/10;
    }
    printf("reverse of the number is %d",rev);

    return 0;
}
