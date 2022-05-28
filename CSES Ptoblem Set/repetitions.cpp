#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s; cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); ) {
        int i1 = i;
        while (i < s.length() && s[i] == s[i1]) i++;
        ans = max(ans,i-i1);
    }
    cout << ans;
}