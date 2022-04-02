#include <stdio.h>
int main()
{
    static int a,b,c;
    printf("Enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    float avg= (a+b+c)/3;
    printf("The avg = %f",avg);
    return 0;
    
}
