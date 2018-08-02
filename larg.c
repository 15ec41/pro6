#include <stdio.h>
int main()
{
    double n1, n2, n3;
    printf("three umbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if( n1>=n2 && n1>=n3 )
        printf("largest number.", n1);
    if( n2>=n1 && n2>=n3 )
        printf("largest number.", n2);
    if( n3>=n1 && n3>=n2 )
        printf("%argest number.", n3);
    return 0;
}
