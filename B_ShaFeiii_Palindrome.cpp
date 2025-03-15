#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS;
    int t =1;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s; getline(cin,s);
        string s1="";
        for (size_t i = 0; i < s.size(); i++)
        {
            if((s[i]>='A' && s[i]<='Z') ||( s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')) s1.push_back(tolower(s[i]));
        }
       //cout<<s1<<endl;
        int n = s1.size();
        bool ok = true;
        for(int i = 0; i < n/2; i++){
            if(s1[i] != s1[n-i-1]){
                ok = false;
                break;
            }
        }
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return 0;
}