#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int comStr(string s1, string s2)
{
    int n1, n2;
    for (int i = 0; i < s1.length(); i++)
    {
        int ch=int(s1[i])-'a';
        n1=n1|(1<<ch);
    }
    for (int i = 0; i < s2.length(); i++)
    {
        int ch=int(s2[i])-'a';
        n2=n2|(1<<ch);
    }
    string s="";
    int uncom=n1^n2;
    int i=0;
    while (i<26){
        if (uncom%2==1)
        {
            /*char st=char('a'+i);
            s.push_back(st);*/
            
        }
        uncom=uncom/2;
        i++;
    }
    //cout<<s<<"\n";
    //return (s.length());
    
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s1, s2;
        cin>>s1;
        cin>>s2;
        int ln=comStr(s1,s2);
        cout<<ln<<"\n";
    }
}