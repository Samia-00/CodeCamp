#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int n, c, m;
        cin>>n>>c>>m;
        int ans, x;
        ans = n / c;
        x = ans;
        int sum = 0;
        while (x >= m)
        {
            sum += (x / m);
            x = (x / m) + (x % m);
        }
        cout<< ans + sum<<endl;
    }
    return 0;
}
