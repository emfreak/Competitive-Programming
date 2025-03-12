vector<int> leaders(int a[], int n){
        // Code here
        int max=a[n-1];
        vector<int> ans;
        ans.push_back(max);
        for(int i=n-2;i>=0;i--){
            if(a[i]<max) continue;
                max=a[i];
                ans.push_back(max);

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }