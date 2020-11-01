#include<bits/stdc++.h>
using namespace std;
int main()
{
            int i,j,n;
            cin>>n;
            int a[60];
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
          for(i=0;i<n;i++)
            {
          int c=1;
          for (j=1;j<=a[i];j++)
          {
              if(j%2==0)
          {
              c=c+1;
          }
           else
           {
               c=c*2;
           }
          }
            cout<<c<<endl;
          }
          return 0;
}
