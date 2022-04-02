#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number you want to check ");
    scanf("%d",&n);
    if( n & 0x01)
    printf("Odd");
    else
    printf("Even");
    
    return 0;
    
}
