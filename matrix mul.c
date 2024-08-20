/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
void main()
{
int a[5][5],b[5][5],c[5][5],i,j,k;
printf("enter the 1st matrix\n");
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the 2nd matrix\n");
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        c[i][j]=0;
        for(k=0;k<5;k++)
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }
}
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        printf("%d\t",c[i][j]);
    }
printf("\n");
}
}