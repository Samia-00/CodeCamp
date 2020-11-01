#include<bits/stdc++.h>
using namespace std;

int rect(int a,int b)
{
    int c=a*b;
    cout<<"Area of rectangle = " <<c<<" sq. units"<<endl;
    return c;

}

int main()
{
    int a,b;
    cout<<"Enter length: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter width: ";
    cin>>b;
    rect(a,b);

    return EXIT_SUCCESS;
}
