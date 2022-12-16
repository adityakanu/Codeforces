#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int problems, count=0;
    cin >> problems;
    

    for (int i=0; i < problems; i++){
        int x,y,z=0;

        cin >> x >> y >> z;

        if ((x+y+z) > 1)
        count++;
    }

    cout << count;
}