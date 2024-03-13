/*#include<stdio.h>
void read(int a[100],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i] = rand() % 100 + 10;
        printf("%d\n", a[i]);
    }
}
void display(int a[100],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void rev(int a[100],int n)
{   int i=0,x,b=n;
    while(i<n)
    {   --n;
        x=a[i];
        a[i]=a[n];
        a[n]=x;
        i++;
    }
    printf("\n");
    for(int i=0;i<b;i++)
    {
        printf("%d ",a[i]);
    }
}
main()
{
    int a[100],n;
    printf("Enter a array size\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    rev(a,n);
}*/
#include <stdio.h>
#include <stdlib.h>

void read(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100 + 10;
        printf("%d\n", a[i]);
    }
}

void display(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void rev(int a[100], int n)
{
    int i = 0, x, b = n;
    while (i < n)
    {
        --n;
        x = a[i];
        a[i] = a[n];
        a[n] = x;
        i++;
    }
    printf("\nReversed Array:\n");
    for (int i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[100], n;
    printf("Enter the array size:\n");
    scanf("%d", &n);
    read(a, n);

    printf("\nOriginal Array:\n");
    display(a, n);

    rev(a, n);

    return 0;
}

