#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double a,b,c;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
         long double value=cos(c);
         long double bc=a/value;
         long double mid=bc/2;
         long double height=sqrt((a*a)-(mid*mid));
         long double area=.5*bc*height;
        cout<<area<<endl;
    }
}
