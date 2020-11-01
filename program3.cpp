#include<bits/stdc++.h>
using namespace std;


int opt(int a,int b)
{
    int c=a+b;
    cout<<"sum = " <<c<<endl;
    int s=a-b;
    cout<<"Difference = " <<s<<endl;
    int w=a*b;
    cout<<"product = " <<w<<endl;
    int e=a/b;
    cout<<"Quotient = "<<e<<endl;
    int g=a%b;
    cout<<"Modulus = "<<g<<endl;


}

int main()
{
    int a,b;
    cout<<"Input first number: ";
    cin>>a;
    cout<<endl;
    cout<<"Input second number: ";
    cin>>b;
    opt(a,b);

    return EXIT_SUCCESS;
}

