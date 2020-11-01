#include<bits/stdc++.h>
#define max_size 1000
using namespace std;

int main()
{
    int n,i,j,k,arr[max_size],count=0,sum;
    cin>>n>>k;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=arr[i]+arr[j];
            if(i<j && sum%k==0)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}
