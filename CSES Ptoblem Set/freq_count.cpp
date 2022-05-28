#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    string st;
    int i=0;
    int freq[26]={0};
    cin>>st;
    //sort(st.begin(),st.end());
    while (st[i] != '\0') { 
        freq[st[i] - 'A']++;
        i++; 
    } 
    /*for (int j = 0; j < 26; j++) { 
        if (freq[j] != 0) { 
            printf("%c - %d\n", 
                   j + 'A', freq[j]); 
        } 
    }*/
    int max=0;
    for (int j = 0; j < 26; j++)
    {
        if(max<freq[j]) max=freq[j];
    }
    cout<<max<<"\n";
}