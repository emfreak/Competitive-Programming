#include<bits/stdc++.h>
#define int long long
using namespace std;
void soln()
{
    int r,c; bool temp=false;
    char canvas[101][101];
    cin>>r>>c;
    for (int i = 1; i <= r; ++i)
    {
        for (int j = 1; j <= c; ++j)
        {
            cin>>canvas[i][j];
            if (canvas[i][j]=='^')
            {
                temp=true;
            }
            
        }
        
    }
    if (r==1||c==1)
    {
        if (temp)
        {
            cout<<"Impossible"<<endl;
            return;
        }
        else{
            cout<<"Possible"<<endl;
            for(int i=1;i<=r;++i){
                for (int j = 1; j <= c; ++j)
                {
                   cout<<canvas[i][j];
                }
                cout<<endl;
            }
            return;
        }
        
    }
    
    cout<<"Possible"<<endl;
    for(int i=1;i<=r;++i){
                for (int j = 1; j <= c; ++j)
                    putchar('^');
                putchar('\n');
    }

}

signed main(){
    int tCase; cin>>tCase;
    for (int i = 1; i <= tCase; ++i)
    {
        cout<<"Case #"<<i<<": ";
        soln();
    }
    
}