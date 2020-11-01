#include<bits/stdc++.h>
#define max_size 50
using namespace std;

int main()
{
    int t;
    //while(t--)
   //{
    int arr[max_size];
    int size;
    int i,j,temp;
    cin>>t;
    while(t--)
    {
    cin>>size;
    int count=0;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            count++;
            }
        }
    }
    cout<<"Optimal train swapping takes "<<count<<" swaps"<<endl;

   // for(i=0;i<size;i++)
    //{
    //cout<<count<<endl;
    //cout<<arr[i]<<endl;
    //}
    //}
}

//cout<<count<<endl;
}
