#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a>=0)
    {
    if(a%2==0)
    {
       printf("even");
       }
       else
       {
           printf("odd");
    }
    }
    else
    printf("invalid");
    return 0;
}
