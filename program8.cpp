#include<bits/stdc++.h>
using namespace std;

void tempt(int celsius)
{

    float fahrenheit=(celsius * 9 / 5) + 32;
    cout<<"Temperature in Fahrenheit = "<<fahrenheit<<" F"<<endl;
}

int main()
{
    int celsius;
    cout<<"Enter temperature in Celsius = ";
    cin>>celsius;
    tempt(celsius);
    return EXIT_SUCCESS;

}
