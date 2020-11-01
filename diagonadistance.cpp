#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100][100];
    int i,j,sum1=0,sum2=0,n,diff=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
    if(i==j)
    {
        sum1+=arr[i][j];
    }
    if(i+j==(n-1))
    {
        sum2+=arr[i][j];
    }
        }
    }
    diff=abs(sum1-sum2);
    cout<<diff;
    return 0;
}
