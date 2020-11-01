#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,i,num,maximum ;
cin>>t;
for(i=1;i<=t;i++)
{
    cout<<"Case "<<i<<": ";
int n;
cin>>n;
maximum=0;
while(n--)
{
cin>>num;

if(num>maximum)
{
maximum=num;
}
}
cout<<maximum<<endl;
}
return 0;
}
