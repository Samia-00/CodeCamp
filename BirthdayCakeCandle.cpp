#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    int count=0;
    int big=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(big<arr[i])
        {
            big=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
      if(arr[i]==big)
      {
        count++;
      }
    }

    cout<<count<<endl;
    return 0;
}
