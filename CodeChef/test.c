#include<stdio.h>
#include<stdlib.h>
int divs(int N)
{
    int count=0;
    for(int i = 1; i <= N; i++) {
		if((N%i) == 0){
			if (i%3==0 || i%5==0 || i%6==0)
            {
                count++;
            } 
		}
	}
    return count;
}
int main(int argc, char *argv[])
{
    if (argc==1)
    {
        return -1;
    }
    
    int N,ans;
    N= atoi(argv[1]);
    ans=divs(N);
    printf("%d\n",ans);
    
}