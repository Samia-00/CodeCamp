#include<bits/stdc++.h>
#define max_size 50
using namespace std;

int main()
{
    int t,L,a[max_size],i,j,temp,count=0;
    cin>>t;
    while(t--)
    {
        cin>>L;
        for(i=0;i<L;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<L;i++)
        {
            for(j=i+1;j<L;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    count++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps"<<endl;
    }
    return 0;
}
