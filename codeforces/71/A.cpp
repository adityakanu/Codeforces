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
#include <cstring>
#include <string>
#define ll long long int
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        string word;
        cin>>word;
    
        int l;
        l=word.length();
        // cout << "max_size: " << word.max_size() << "\n";
        // cout << "size: " << word.size() << "\n";
        // char CharArray[110];
        
        // for (int i = 0; i < l; i++)
        // {
        //     CharArray[i] = word[i];
        // }
        
        if (l>10)
        {
        	cout << word[0] << l-2 << word[l-1] << endl;
        }
        else {
        	cout<< word <<endl;
        }
    }
    return 0;
}