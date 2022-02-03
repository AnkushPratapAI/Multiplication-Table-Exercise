//Exercise of multiplication table 
//using loops
#include <stdio.h>
int main()
{
    int a;
    int i;
    int x;
    printf("Enter the no of which you want multiplication table: ");
    scanf("%d", &a);

    printf("The multiplication table of %d is as follows:\n",a);
    for ( i = 1; i < 11;i ++)
    {
        x = i*a;
        printf("%d x %d = %d\n", a,i,x);
        
        
    }
    
    return 0;
}