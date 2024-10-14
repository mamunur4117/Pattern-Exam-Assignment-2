#include<stdio.h>
int main()
{
    int n;
    int sum1=0;
    int sum2=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]=1;
            sum1+=a[i];
        }
        else if(a[i]==1)
        {
            a[i]=1;
            sum2+=a[i];
        }
    }
    printf("%d %d",sum1,sum2);
return 0;
}
