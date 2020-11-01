#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    int i,j;
    int arr[100];
    int t=0,temp=0,f=0;
    double s,v,g;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            t++;
            s=t/n;
        }
        else if(arr[i]<0)
        {
            temp++;
            v=temp/n;
        }
        else
        {
            f++;
            g=f/n;
        }
    }
    printf("%.6f",s);
    cout<<endl;
    cout<<setprecision(6)<<v<<endl;
    cout<<setprecision(6)<<g<<endl;
}
