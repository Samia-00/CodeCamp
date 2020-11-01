#include<bits/stdc++.h>
using namespace std;

void tempt(double fahrenheit)
{

    double celsius =(fahrenheit - 32) * 5 / 9;
    cout<<"Temperature in celsius = "<<setprecision(4)<<celsius<<" C"<<endl;
}

int main()
{
    double fahrenheit;
    cout<<"Enter temperature in fahrenheit = ";
    cin>>fahrenheit;
    tempt(fahrenheit);
    return EXIT_SUCCESS;

}
