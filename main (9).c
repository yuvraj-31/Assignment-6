
#include <stdio.h>

int main()
{
    int n1,n2,i;
    printf("Enter the two numbers\n");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1*n2;i++)
    {
        if((i%n1)==0 && (i%n2)==0)
        {
            printf("%d is the LCM of the two numbers %d and %d",i,n1,n2);
            break;
        }
    }

    return 0;
}
