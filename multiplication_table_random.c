#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("number.txt","r");

    int num,n,j,i;
    for(i=0;i<1 && fscanf(fp,"%d",&num)==1;i++)
    {
        fp=fopen("product.txt","w");
        fprintf(fp,"Multiplication of table is :\n");
        for(j=1;j<=10;j++)
        {
            n=num*j;
            fprintf(fp,"%d\n",n);
        }
    }
    fclose(fp);
    return 0;
}
