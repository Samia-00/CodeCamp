#include<bits/stdc++.h>
using namespace std;

int circle(int r)
{
    float const pi=3.1416;
    int d=2*r;
    float e=2*(pi*r);
    float f=pi*(r*r);


    cout<<"Diameter = "<<d<<" units"<<endl;
    cout<<"Circumference = "<<e<<" units"<<endl;
    cout<<"Area = "<<f<<" sq. units"<<endl;

}

int main()
{
    int r;
    cout<<"Enter radius: ";
    cin>>r;
    circle(r);

    return EXIT_SUCCESS;
}

