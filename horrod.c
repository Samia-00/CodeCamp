#include<stdio.h>
int main()
{

    long int max,n,a,i,j,a1;
    scanf("%ld",&a);
    for(i=1; i<=a; i++)
    {
        max=0;
        scanf("%ld",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%ld",&a1);
            if(a1>max)
                max=a1;
        }

        printf("Case %ld: %ld\n",i,max);
    }
    return 0;
}
