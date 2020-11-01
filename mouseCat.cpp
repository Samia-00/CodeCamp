#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x ,y, z,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        int s=abs(z-x);
        int d=abs(z-y);
        if(s<d)
        {
            cout<<"Cat A"<<endl;
        }
        else if(d<s)
        {
            cout<<"Cat B"<<endl;
        }
        else if(s==d)
        {
            cout<<"Mouse C"<<endl;
        }
    }
    return 0;
}
