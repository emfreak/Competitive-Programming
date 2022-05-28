#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int calch(string t, int n)
{
    int mh;
    mh = 10 *(t[0+n] - '0') + 1* (t[1+n] - '0');
    if(t[6+n] == 'P'){if(mh != 12) mh += 12;}
    if(t[6+n] == 'A') {if(mh == 12) mh-= 12;}
    return mh;
}
int calcm(string t, int n)
{
    int mm;
    mm = 10 *(t[3+n] - '0') + (t[4+n] - '0');
    return mm;
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    cin.ignore();
    while(T>0)
    {
        string shT;
        getline(cin, shT);
        int mh = calch(shT,0);
        int mm = calcm(shT,0);
        int N;
        int sT=mh*100+mm;
        cin>>N;
        cin.ignore();
        string ans="";
        while (N>0)
        {
            string avT;
            getline(cin, avT);
            int fsh = calch(avT, 0);
            int fsm = calcm(avT, 0);
            int fsT=fsh*100+fsm;
            int feh = calch(avT, 9);
            int fem = calcm(avT, 9);
            int feT=feh*100+fem;
            if(sT>=fsT && sT<=feT) {ans.push_back('1');}
            else ans.push_back('0');
            N--;
        }
        cout<<ans<<"\n";
        T--;
    }
    return 0;
}