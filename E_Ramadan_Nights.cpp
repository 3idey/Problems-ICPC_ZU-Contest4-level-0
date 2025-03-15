#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS;
    int t =1;
    //cin>>t;
    while (t--)
    {
        string name;
        cin >> name;
        int count = 1;  
        for (size_t i = 1; i < name.length(); i++) {
            if (name[i] == name[i - 1]) {
                count++;
                if (count == 7) {
                    cout << "YES" << endl;
                    return 0;
                }
            } else {
                count = 1; 
            }
        }
    
        cout << "NO" << endl;
    }
    
    return 0;
}








/*
if (name.contains("1111111") || name.contains("0000000"))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
*/

