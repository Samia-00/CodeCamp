#include<bits/stdc++.h>
using namespace std;

int main()
{

   int t,i,num,maxs ;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        cout<<"Case "<<i<<": ";
   while(n--)
      //for(j=0;j<n;j++)
    {
        cin>>num;

         maxs=-1;
        if(num>maxs)
        {
            // maxs=num;
             maxs = max(maxs,num);
           //cout<<maxx<<endl;

        }
        //cout<<maxx<<endl;
    }

    cout<<maxs<<endl;
    }
    return 0;
}
