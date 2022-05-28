#include <stdio.h>
#include<stdlib.h>
int sum_sq(int n)
    {
        int x,num=0,sum=0;
        while(n>0)
        {
            x=n%10;
            sum+=(x*x);
            n=n/10;
        }
        int y=sum;
        while (y>0)
          {
            num++;
            y=y/10;
        }
        if(num>1 && sum!=1)
            sum_sq(sum);
        else
            return sum;
    }
    
    int nextSmallHappy(int n){
        n=n+1;
        if(sum_sq(n)==1)
            return n;
        else
            nextSmallHappy(n);
    }

int main(int argc, char* argv[])
{
    int num, ans;
    num=atoi(argv[1]);
    if (argc<1)
    {
        return -1;
    }
    ans= nextSmallHappy(num);
    printf("%d\n",ans);
    return 0;
}