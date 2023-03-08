
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s){
        // code here
        string ans="";
        bool flag=false;
        
        char x=s[0];
        // ans+=x;
        for(int i=0; i<s.length(); i++){
            if(s[i]!=s[i+1] && !flag)
               ans+=s[i];
            else if(s[i]!=s[i+1]) flag=false;
            if(s[i]==s[i+1]) flag=true;
        }
        cout<<ans<<endl;
        return rremove(ans);
    }
};


int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// 