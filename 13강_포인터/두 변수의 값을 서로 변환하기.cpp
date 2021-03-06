#include <stdio.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x; //*x,*y에서 *는 포인터라는 의미이다. 
	*x = *y;  //*는 포인터가 특정주소를 가리키고 그 주소의 값을 받는다. 
	*y = temp;
	//포인터를 만약에 안쓰면  
	//매개변수로 이동된 x와 y는 swap 함수가 끝나면 메인으로 이동하지 
	//못하고 그대로 끝나게 된다. 
	//포인터를 사용하여 함수가 끝난 뒤 메인의 변수값을 변경해주어야한다. 
}
 
int main(void)
{
	int x,y;
	x = 1; 
	y = 2;
	swap(&x,&y); //&는 변수의 주소를 알려준다.
	//&가 변수의 주소를 포인터에게 알려주면 *는 변수의 주소를 가리키고
	// 그 주소의 값을 받는다.  
	printf("x: %d \ny: %d",x,y);
	return 0;
 } 
