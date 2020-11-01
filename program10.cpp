#include<bits/stdc++.h>
using namespace std;

int con(int days)

{
    int year = days / 365;
    int weeks = (days - (year * 365)) / 7;
    int dayss = days - ((year * 365) + (weeks * 7));

    cout<<days<<" days = "<<year<<" year/s, "<<weeks<<" week/s and "<<dayss<<" day/s ";

}

int main()
{
    int days;
    cout<<"Enter days = ";
    cin>>days;
    con(days);
    return EXIT_SUCCESS;
}
