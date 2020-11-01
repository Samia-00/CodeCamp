#include<bits/stdc++.h>
#define max_size 10000
using namespace std;

int main()
{
    int n,k,b,i;
    cin>>n;
    cin>>k;
    int sum=0,s=0;
    int arr[n];
    for(i=0;i<n;i++)    //program ta amar etowkkhon error ashtesilo just because of only ami max size nniyechi anad its segmentation error.
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        sum+=arr[j];
    }
    cin>>b;
    s=(sum-arr[k])/2;
    if(b>s)
    {
        cout<<b-s<<endl;
    }
    else
    {
        cout<<"Bon Appetit"<<endl;
    }
    return 0;
}

