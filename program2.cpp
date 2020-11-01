#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b)
{
    int c=a+b;
    cout<< "sum = " <<c<<endl;
    return c;

}

int main()
{
    int a,b;
    cout<<"Input first number: ";
    cin>>a;
    cout<<endl;
    cout<<"Input second number: ";
    cin>>b;
    sum(a,b);

    return EXIT_SUCCESS;
}
