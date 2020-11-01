#include<bits/stdc++.h>
#define max_size 3
using namespace std;
int main()
{
    int a[max_size],b[max_size];
    int alice=0;
    int i;
    int bob=0;
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    for(i=0;i<3;i++)
        {
         if(a[i]>b[i])
         {
             alice++;
         }
         else if(a[i]<b[i])
         {
             bob++;
         }
        }
     cout<<alice<<" "<<bob;
     return 0;
}
