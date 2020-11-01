#include<bits/stdc++.h>
using namespace std;

int main()

{
    int a,b,c,i,t;
    cin>>t;

    for(i=1; i<=t ; i++)
    {
        cin>>a>>b>>c;
        cout<<"Case "<<i<<": ";
        if( b>a && a>c || c>a && a>b )
        {
            cout<<a<<endl;
        }
        if( a>b && b>c || c>b && b>a )
        {
            cout<<b<<endl;
        }
        if( a>c && c>b || b>c && c>a )
        {
            cout<<c<<endl;
        }
    }

   return 0;
}
