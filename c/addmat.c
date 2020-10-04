// program to add two matrix
// by deafalut the max size of matrix is 10x10 but u can change it as per your wish.


#include <stdio.h>
int a[10][10],b[10][10],c[10][10];
void input(int,int,int,int);
void display(int,int);
void add(int,int);
int main()
{
    int i,j,x,y;
    printf("Enter the no. of row of 1st array\n");
    scanf("%d",&i);
    printf("Enter the no. of column of 1st array\n");
    scanf("%d",&j);
    printf("Enter the no. of row of 2nd array\n");
    scanf("%d",&x);
    printf("Enter the no. of column of 2nd array\n");
    scanf("%d",&y);
    if(i==x&&j==y)
    {
        input(i,j,x,y);
        add(x,y);
        display(x,y);
    }
    else
    {
        printf("the array is not similar");
    }
    
}
// the function to take input
void input(int i,int j,int x,int y)
{
    
    printf("enter the element of 1st array\n");
    for(int k=0;k<i;k++)
    {
        for(int l=0;l<j;l++)
        {
            printf("arr1[%d][%d]\n",k,l);
            scanf("%d",&a[k][l]);
        }
    }
    printf("enter the element of 2nd array\n");
    for(int k=0;k<x;k++)
    {
        for(int l=0;l<y;l++)
        {
            printf("arr2[%d][%d]\n",k,l);
            scanf("%d",&b[k][l]);
        }
    }
}
// main part of program it adds the two matrix.(thats all u want btw)
void add(int j,int i)
{
    for(int q=0;q<i;q++)
    {
    
        for(int w=0;w<j;w++)
        {
            c[q][w]=a[q][w]+b[q][w];
        }
    }

}
// to display the resultant matrix
void display(int i, int j)
{
    printf("the sum is \n");
    for(int k=0;k<i;k++)
    {
        for(int l=0;l<j;l++)
        {
            printf("%3d",c[k][l]);
        }
        printf("\n");
    }
}
