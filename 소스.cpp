#include <stdio.h>

int main()
{
	int n;
	
	printf("주민등록번호 7번째 수");
	scanf("%d", &n);

	switch (n)
	{
		case 1: printf("2000년 이전 남자"); break;

		case 2: printf("2000년 이전 여자"); 
			break;
		case 3: printf("2000년 이후 남자");
			break;

		case 4: printf("2000년 이후 여자");
			break;
		
		default: printf("외국인");
	}
		
}