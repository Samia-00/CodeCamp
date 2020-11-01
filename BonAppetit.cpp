#include<bits/stdc++.h>
#define max_size 1000
using namespace std;

int main()
{
    int n,k,arr[max_size],b,i;
    cin>>n>>k;
    int sum=0,s=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];

    }
    cin>>b;
    //cout<<sum<<endl;
    //cout<<s<<endl;
     s=(sum-arr[k])/2;
    if(b==s)
    {
        cout<<"Bon Appetit"<<endl;
    }
    else
    {
        cout<<b-s<<endl;
    }
    return 0;
}
