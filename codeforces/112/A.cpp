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
#include <cctype>
#define ll long long int
using namespace std;

string toLowerString(string givenString) {

    for (int i = 0; i < givenString.length(); i++)
    {
        givenString[i]=tolower(givenString[i]);
    }
    
    return givenString;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string firstString, secondString;

    cin >> firstString >> secondString;

    string newFirstString= toLowerString(firstString);
    string newSecondString= toLowerString(secondString);

    int lexi = 0;

    for (int i = 0; i < newFirstString.length(); i++)
    {
        if (newFirstString[i] == newSecondString[i])
        {
            continue;
        }
        else if (newFirstString[i] > newSecondString[i])
        {

            lexi = lexi + 1;
            break;
        }
        else
        {
            lexi=lexi-1;
            break;
        }

        
    }
    cout<<lexi;

    return 0;
}