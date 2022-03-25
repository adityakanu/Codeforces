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


// Function for removing vowel
bool IsVowel(char c)
{
    switch(c)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
    case 'y':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    default:
        return false;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        string w;
        cin >> w;
       
       // Vowel remover
        w.erase(std::remove_if(w.begin(), w.end(), &IsVowel), w.end());

        // Consonants to lowercase
        for (int i = 0; i < w.length(); i++)
        {
            if (w[i]<97)
            {
                w[i]= w[i]+32;
            }
            
        }

        // adding '.' before all consonant
        for (int i = 0; i < w.length(); i++)
        {
            cout<< '.' << w[i];
        }
        


        cout<< endl;

   

    return 0;
}