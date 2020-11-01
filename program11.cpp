#include<bits/stdc++.h>
using namespace std;

int angle(int a,int b)
{
    int c=180-(a+b);
    cout<<"Third angle of the triangle = " <<c<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter one angle : ";
    cin>>a;
    cout<<endl;
    cout<<"Enter another angle : ";
    cin>>b;
    angle(a,b);

    return EXIT_SUCCESS;
}
