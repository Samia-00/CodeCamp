#include<bits/stdc++.h>
using namespace std;

int con(int a)
{
    float c= a/100;
    cout<<"Length in meter = " <<c<<endl;
    float d=c/1000;
    cout<<"Length in kilometer = "<<d<<endl;
}

int main()
{
    int a;
    cout<<"Enter length in centimeters = ";
    cin>>a;
    con(a);
    return EXIT_SUCCESS;
}
