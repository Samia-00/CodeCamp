#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    int total = n/2;
        int right = p/2;
        int left = total - right;
        if(right < left){
            cout<<right;
        }
        else {
            cout<<left;
        }
}
