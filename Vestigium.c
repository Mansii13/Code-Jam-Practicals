#include<stdio.h>
void main()
{
    int n,a[10][10],i,j,other,k=0,ch,c=1,r=0,col=0,temp,flag=0;

    scanf("%d",&ch);
    do
    {
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                temp = a[i][j];

				if(i==j)
					k=k+temp;
                for(other=j+1;other<n;other++)
                {
                    if(temp==a[i][other])
                    {
                        r++;
                        break;
                    }
                }
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                temp = a[j][i];

                for(other=j+1;other<n;other++)
                {
                    if(temp==a[other][i])
                    {
                        col++;
                        break;
                    }
                }
            }
        }
        printf("\nCase #%d: %d %d %d",c,k,r,col);

        c++;
        ch--;
        r=0;
        k=0;
        col=0;
    }while(ch!=0);
}
