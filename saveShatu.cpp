#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k=0,rep=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if (s=="donate")
        {
            cin>>k;
            rep= rep+k;
        }
        else
            cout<<rep<<endl;
    }
    return 0;
}

