#include<stdio.h>
#include<limits.h>

int main()
{
    int m, n, sum = 0;
    printf(Åg/nEnter the order of the matrix : Åg);
    scanf(Åg%d %dÅh,&m,&n);
    int i, j;
    int mat[m][n];
    printf(Åg/nInput the matrix elements/nÅh);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            scanf(Åg%dÅh,&mat[i][j]);
    }

    printf(Åg/nBoundary Matrix/nÅh);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n ? 1 || j == n ? 1)
            {
                printf(Åg%d Åg, mat[i][j]);
                sum = sum + mat[i][j];
            }
            else
                printf(Åh Åg);
        }
        printf(Åg/nÅh);
    }
    printf(Åg/nSum of boundary is %dÅh, sum);
}



#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,r,c,i,j;
    scanf(Åg%dÅh,&r);
    scanf(Åg%dÅh,&c);

    a=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
        *(a+i)=(int*)malloc(c*sizeof(int));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf(Åg%dÅh,*(a+i)+j);
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

    printf(ÅgSum of boundary is %dÅh,sum1+sum2+sum3+sum4);
    return 0;
}