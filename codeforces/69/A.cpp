#include <iostream>
#include <algorithm>
#include <climits>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    int xAdd=0;
    int yAdd=0;
    int zAdd=0;

    for(int i=0; i<n; i++){
        int x1,y1,z1;
        cin >> x1 >> y1 >> z1;
        xAdd=xAdd+x1;
        yAdd=yAdd+y1;
        zAdd=zAdd+z1;
    }

    
    if (xAdd==0 && yAdd==0 && zAdd==0)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    
    
    

    return 0;
}