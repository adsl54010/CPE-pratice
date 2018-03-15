#include <stdio.h>
#include <stdlib.h>

int cal(int input);
int main(void)
{
	int input=0;
	while(scanf(" %d",&input)!=EOF)
	{
		if (input==0)
			break;
		printf("%d\n",cal(input));
	}
return 0;
}

int cal(int input)
{
	int ans=0;
	while (input>0)
	{
		ans=ans+(input%10);
		input=input/10;
	}
	if (ans>=10)
		cal(ans);
	else
		return ans;
}