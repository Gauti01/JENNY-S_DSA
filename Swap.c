#include <stdio.h>
void swap(int *a,int *b)
{
    //int *a =;
   // int *b =NULL;
    *a=*a + *b;
    *b=*a - *b;
    *a=*a-*b;
    
}
int main()
{
    int a=10;
    int b=20;
   // int temp;
    printf("Before swap the numbers are :%d %d\n",a,b);
   // temp =a;
   
   // a=a+b;
    //b=a-b;
    //a=a-b;
    
    //a=a^b;
    //b=a^b;
    //a=a^b;
    
    //a=a*b;
    //b=a/b;;
    //a=a/b;
    swap(&a,&b);
     printf("After swap the numbers are : %d %d",a,b);
     return 0;
    
}
