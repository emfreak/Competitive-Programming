int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long sum=0;
        for(long long i=0;i<n;i++){
            sum+=a[i];
        }
        long long leftsum=0, rightsum=sum;
        for(long long i=0;i<n;i++){
            rightsum-=a[i];
            if(rightsum==leftsum) return i+1;
            leftsum+=a[i];
        }
        return -1;
    }