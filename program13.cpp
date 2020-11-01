#include<bits/stdc++.h>
using namespace std;

int equ(int r)
{
    float s=(sqrt(3)/4)*(r*r);
    cout<<"Area of equilateral triangle = "<<s<<" sq. units"<<endl;

}

int main()
{
    int r;
    cout<<"Enter side of the equilateral triangle : ";
    cin>>r;
    equ(r);

    return EXIT_SUCCESS;
}
