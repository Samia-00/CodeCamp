#include<bits/stdc++.h>
using namespace std;

int rect(int p,int t,float r )
{
    double SI = (p*t*r) / 100;
    cout<<"Simple Interest  = "<<SI<<endl;


}

int main()
{
    int p,t;
    float r;
    cout<<"Enter principle: ";
    cin>>p;
    cout<<endl;
    cout<<"Enter time: ";
    cin>>t;
    cout<<endl;
    cout<<"Enter rate: ";
    cin>>r;
    rect(p,t,r);

    return EXIT_SUCCESS;
}
