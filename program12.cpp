#include<bits/stdc++.h>
using namespace std;

int rect(int a,int b)
{
    float c =.5*(a*b);
    cout<<"Area of triangle = "<<c<<" sq. units"<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter the base of the triangle: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the height of the triangle: ";
    cin>>b;
    rect(a,b);

    return EXIT_SUCCESS;
}

