#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS;
    int t =1;
    //cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        
        int a[256] = {};
        a['I'] = 1;
        a['V'] = 5;
        a['X'] = 10;
        a['L'] = 50;
        a['C'] = 100;
        a['D'] = 500;
        a['M'] = 1000;
    
        int n = s.length();
        int result = 0;
    
        for (int i = 0; i < n; i++) {
            if (a[s[i]] == 0) {
                cout << "Invalid";
                return 0;
            }
        }
    
        for (int i = 0; i < n - 3; i++) {
            if (s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == s[i + 3]) {
                cout << "Invalid";
                return 0;
            }
        }
    
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && a[s[i]] < a[s[i + 1]]) {
                if ((s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) ||
                    (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) ||
                    (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))) {
                    result -= a[s[i]];
                } else {
                    cout << "Invalid";
                    return 0;
                }
            } else {
                result += a[s[i]];
            }
        }
    
        cout << result;
    }
    
    return 0;
}
