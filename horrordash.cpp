#include<bits/stdc++.h>
using namespace std;

int main()
{

   int t,i,num,maximum ;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        cout<<"Case "<<i<<": ";
   for(int j=0;j<n;j++)
    {
        cin>>num;
        maximum=0;
        if(num>maximum)
        {
             maximum=num;
        }
    }
    cout<<maximum<<endl;
    }
    return 0;
}
