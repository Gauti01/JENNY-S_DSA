#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number you want to check ");
    scanf("%d",&n);
   // if( n & 0x01)
    if(((n/2)*2) ==n)
    printf("Even");
    else
    printf("Odd");
    
    return 0;
    
}

