#include<bits/stdc++.h>
using namespace std;
int pap_gen(vector<pair<int,int>> p, vector<pair<int,int>> q ,vector<pair<int,int>> r)
{
    /*vector<pair<int,int>> dist;
    if (N==2) return 1;
    dist.push_back(h[0]);
    dist.push_back(h[1]);
    int min=1, dif=dist.size();
    for (int i = 2; i < N; i++)
    {
        while (dist.size()>=2)
        {
            double s1 = ((double)dist[dif-1].second - (double)dist[dif-2].second)/((double)dist[dif-1].first - (double)dist[dif-2].first);
            double s2 = ((double)h[i].second - (double)dist[dif-1].second)/((double)h[i].first - (double)dist[dif-1].first);
            if (s1<=s2)
            {
                dist.pop_back();
                dif--;
            }
            else break;
        }
        dist.push_back(h[i]); dif++;
        min= max(min,dist[dif-1].first - dist[dif-2].first);
    }*/
    int val=(q.second - p.second)*(r.first-q.first)-(q.first-p.first)*(r.second-q.second);
    if(val==0) return 0;
    if (val>0) return 1;
    
    return 2;
}
pair<int,int> secTop(stack<pair<int,int>> &s)
{
    pair<int, int> p=s.top();
    s.pop();
    pair<int, int> r=s.top();
    s.push(p);
    return r;
}
int absl(int a, int b)
{
    if (a>b) return a-b;
    return b-a;
    
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        vector<pair<int,int>> h(N);
        cin>>N;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin>>x;
            h.push_back({i+1,x});
        }
        vector<pair<int,int>> st;
        st.push_back(h[0]);
        st.push_back(h[1]);
        for (int i = 2; i < N; i++)
        {
            if(st.size()<2) st.push_back(h[i]);
            else{
                if (pap_gen(secTop(st),st.top(), h[i]==1))
                {
                    st.push_back(h[i]);
                }
                else{
                    while (st.size()>=2 && pap_gen(secTop(st),st.top(),h[i]!=1))
        
                    {
                        st.pop();
                    }
                    st.push(h[i]);
                }
            }
        }
        int ans=1;
        while (st.size()>=2)
        {
            pair<int,int> pt=st.top();
            st.pop();
            pair<int,int> qt=st.top();
            ans=max(ans,absl(pt.first,qt.first));
        }
        cout<<ans<<"\n";
    }
}