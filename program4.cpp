#include<bits/stdc++.h>
using namespace std;

int perimeter(int a,int b)
{
    int c=2*(a+b);
    cout<<"Perimeter of rectangle = " <<c<<" units"<<endl;
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
    perimeter(a,b);

    return EXIT_SUCCESS;
}
