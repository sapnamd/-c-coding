#include<stdio.h>
#include<limits.h>

int main()
{
    int m, n, sum = 0;
    printf(�g/nEnter the order of the matrix : �g);
    scanf(�g%d %d�h,&m,&n);
    int i, j;
    int mat[m][n];
    printf(�g/nInput the matrix elements/n�h);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            scanf(�g%d�h,&mat[i][j]);
    }

    printf(�g/nBoundary Matrix/n�h);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n ? 1 || j == n ? 1)
            {
                printf(�g%d �g, mat[i][j]);
                sum = sum + mat[i][j];
            }
            else
                printf(�h �g);
        }
        printf(�g/n�h);
    }
    printf(�g/nSum of boundary is %d�h, sum);
}



#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,r,c,i,j;
    scanf(�g%d�h,&r);
    scanf(�g%d�h,&c);

    a=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
        *(a+i)=(int*)malloc(c*sizeof(int));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf(�g%d�h,*(a+i)+j);
        }
    }

    i=0;int sum1=0;
    for(j=0;j<c;j++)
        sum1=sum1+*(*(a+i)+j);

    i=r-1;int sum2=0;
    if(i!=0)
    {
        for(j=0;j<c;j++)
            sum2=sum2+*(*(a+i)+j);
    }

    j=0; int sum3=0;
    for(i=1;i<r-1;i++)
        sum3=sum3+*(*(a+i)+j);

    j=c-1; int sum4=0;
    for(i=1;i<r-1;i++)
        sum4=sum4+*(*(a+i)+j);

    printf(�gSum of boundary is %d�h,sum1+sum2+sum3+sum4);
    return 0;
}