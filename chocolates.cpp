#include<bits/stdc++.h>
#define max_size 100
using namespace std;

int main()
{
    int n,arr[max_size];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d,m;
    if(1<=d<=31 && 1<=m<=12){
    cin>>d>>m;
    }
    int count=0;
    for(int i=0;i<d;i++)
    {
        for(int j=i+1;j<d;j++)
        {
            int sum=arr[i]+arr[j];
            if(sum==d)
            {
                count++;
            }
        }
    }
cout<<count<<endl;

}
