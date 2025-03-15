#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS;
    int t =1;
    //cin>>t;
    while (t--)
    {
        int n, q;
        cin>>n>>q;
        string s; cin>>s;
        string freq[n];
        int mx_generation = 0;
        for(int i = 0; i < n; ++i){
            int generation = 0;
            while(s[i] == '-'){
                generation++;
                i++;
            }
            string num = "";
            while(i < n && s[i] != '-') {
                num += s[i];
                i++;
            }
            i--;
            freq[generation] = num;
            mx_generation = generation;
        }
        while(q--){
            int x; cin>>x;
            if(x <= mx_generation)
                cout<<freq[x]<<"\n";
            else
                cout<<"-1\n";
        }
    }
    
    return 0;
}