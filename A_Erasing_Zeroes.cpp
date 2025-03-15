#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS;
    int t =1;
    cin>>t;
    while (t--)
    {
        string s;  cin >> s;
        //int first=s.find('1');
        //int last=s.rfind('1');
        int first =-1,last=-1;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == '1') {
                if (first == -1) first = i;
                last = i;
            }
        }
        //0 0 1 0 0 1 1 0
       // 
        
        int Zeros=0;
        for (int i = first; i <= last; i++)
        {
            if(s[i]=='0') Zeros++;
        }
        cout << Zeros << endl;
    }
    
    return 0;
}




          


