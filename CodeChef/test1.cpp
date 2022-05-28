#include<iostream>
int main(int argc, char *argv[]) {
	// your code goes here
	for (int i = 2; i < atoi(argv[1]); i++)
	{
	    int num,ans=0;
	    num=atoi(argv[i]);
	    while(num>0)
	    {
	        ans+=num/10;
	        num%=10;
	    }
	    printf("%d\n",ans);
	}
	return 0;
}