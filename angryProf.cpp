#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n],count=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++){
        if(a[i]<=0)
        {
            count++;
        }
        }

        if(count>=k)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;

}
