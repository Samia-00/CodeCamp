#include<bits/stdc++.h>
using namespace std;

int marks(int a,int b,int c,int d ,int e)
{
    int h=(a+b+c+d+e);
    cout<<"Total = " <<h<<endl;
    float j=(a+b+c+d+e)/5;
    cout<<"average = "<<j<<endl;
    cout<<"percentage = "<<j<<endl;
    return c;

}

int main()
{
    int a,b,c,d,e;
    cout<<"Enter marks of five subjects : ";
    cin>>a>>b>>c>>d>>e;
    marks(a,b,c,d,e);

    return EXIT_SUCCESS;
}
