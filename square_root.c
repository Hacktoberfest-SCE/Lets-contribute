// C program to find square root of a number

#include <stdio.h>
#include <math.h>

int main()
{
    //Variable
    int n, root;
    
    //Input a number from user
    printf("Enter any integer:");
    scanf("%d",&n);
    
    //Calculate square root of n
    root= sqrt(n);
    
    //Print the resultant value
    printf("%d \n", root);
    
    return 0;
}
