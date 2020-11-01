#include<bits/stdc++.h>
using namespace std;

int main()

{
    int a,b,c,i,t,middle;
    cin>>t;

    for(i=1; i<=t ;i++)
    {
        cin>>a>>b>>c;
        cout<<"case "<<i<<": ";

    //middle =(c>a?a:(b>c?b:c)):(c>b?b:(a>c?a:c));
    //int largest = a > b ? (a > c ? a : c) : (b > c ? b : c);
    if(a>1000 && a<=10000 || b>1000 && b<=10000 || c>10000 && c<=10000){
    if( b>a && a>c || c>a && a>b )
		{
			cout<<a<<endl;
		}

        //Checking for b is middle number or not
		if( a>b && b>c || c>b && b>a )
		{
			cout<<b<<endl;
		}

        //Checking for c is middle number or not
		if( a>c && c>b || b>c && c>a )
		{
			cout<<c<<endl;
		}

      //cout<<(c>a?a:(b>c?b:c)):(c>b?b:(a>c?a:c))<<endl;
    }
    }
    return 0;
}
