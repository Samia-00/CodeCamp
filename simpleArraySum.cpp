#include<bits/stdc++.h>
#define max_size 1000
using namespace std;

int main()
{
     int n,i,arr[max_size],sum=0;
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
         sum+=arr[i];
     }
     cout<<sum<<endl;

}
