#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS;
    int t =1;
    //cin>>t;
    while (t--)
    {
        string s, ns;
        cin >> s;
        int freq[26]{0};
        for (int i = 0; i < s.size(); i++)
            freq[s[i] - 'a']++;
        int Min = freq[0];
        for (int i = 1; i < 26; i++)
            if (freq[i] > 0)
                if (Min > freq[i])
                    Min = freq[i];
        int counter = 0, y = 0;
        for (int i = 0; i < 26; i++)
            if (freq[i] > 0)
            {
                y = abs(freq[i] - Min);
                counter += y;
            }
        cout << counter << endl;
        for (int i = 0; i < 26; i++)
            if (freq[i] > 0)
            {
                  for (int j = 0; j < Min; j++)
                    ns += char(i + 'a');
            }
        cout << ns;
    }
    
    return 0;
} 

