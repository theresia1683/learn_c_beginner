#include <stdio.h>

void print(int count)
{
	if(count==0)
	{
		return;
	}
	else
	{
		printf("문자열을 출력합니다.\n");
		print(count-1); 
	}
}

int main(void)
{
	printf("문자열을 몇번 출력할까요?\n");
	
	int count;
	scanf("%d",&count);
	
	print(count); 
	return 0;
}
