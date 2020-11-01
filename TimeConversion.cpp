#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hh,mm,ss;
    char s[3];
    cin>>hh;
    cout<<":";
    cin>>mm;
    cout<<":";
    cin>>ss>>s;

    if(hh="PM" && hh!=12)
    {
        hh=hh+12;
        cout<<hh;
    }
    else if (hh="AM" && hh==0)
    {
        hh=hh+0;
        cout<<hh;
    }
    return 0;

}
