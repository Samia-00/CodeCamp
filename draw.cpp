
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,s;
    cin>>n>>p;
        s = n/2 - p/2;
        if(p/2 < s)
        {
            cout<<p/2;
        }
        else {
            cout<<s;
        }
}
