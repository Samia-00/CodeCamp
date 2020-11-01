#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;

bool myfunc(int a ,int b)
{
    return a>b;
}

int main()
{
    vector<int>vec;
    vec.push_back(8);
    vec.push_back(7);
    vec.push_back(22);
    vec.push_back(5);
    vec.push_back(11);

    sort(vec.begin(),vec.end(),myfunc);

    for(int i=0;i<5;i++)
    {
        cout<<vec[i]<<endl;

    }
     cout<<vec[0]<<endl;
    vector<int>::iterator it;
    it=vec.begin();

    cout<<*it<<endl;

      for(it=vec.begin();it!=vec.end();it++)
      {
          cout<<*it<<endl;
      }
      puts(" ");

}
