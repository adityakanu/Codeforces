#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();
    
    vector <int> vectorSum;

    
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '+')
        vectorSum.push_back(s[i]-'0');
    }

    sort(vectorSum.begin(), vectorSum.end());

    for (int i = 0; i < vectorSum.size(); i++)
    {
        if(i)
        cout<<'+';
        cout<< vectorSum[i];
    }
    
    

    // int min_idx;
    // for (int i = 0; i < n-1; i++)
    // {
    //     if (s[i] == '+')
    //         continue;

    //     min_idx = i;

    //     for (int j = 0; j < n; j++)
    //     {
    //         if (s[i] == '+')
    //             continue;

    //         else if ((s[min_idx]-'0') > (s[j]-'0'))
    //         {
    //             min_idx = j;
    //         }
    //     }
    //     if (min_idx != i)
    //     {
    //         swap(s[min_idx], s[i]);
    //     }
    // }

    // cout << s;
}