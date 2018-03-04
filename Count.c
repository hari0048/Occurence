#include <stdio.h>
int main()
{
    int n,a[100],i,j,b[100],k=0,count,l=0,c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            b[k++]=a[i];
        }
    }
    for(i=0;i<k;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                count+=1;
                c[l]=count;
            }
        }
        l++;
        printf("%d -> %d\n",b[i],c[i]);
    }
}
