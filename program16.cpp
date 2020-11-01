#include<bits/stdc++.h>
using namespace std;

int rect(int p,int t,float r )
{
    double CI = p * pow((1 + r / 100), t);
    cout<<"Compound Interest  = "<<CI<<setprecision(4)<<endl;


}

int main()
{
    int p,t;
    float r;
    cout<<"Enter principle (amount): ";
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
