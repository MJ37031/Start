// Project2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	while (1)
	{
		scanf("%d %d", &n1, &n2);

		if (n1 == n2) break;

		if (n2 % n1 == 0)
			printf("factor \n");
		else if (n1 % n2 == 0)
			printf("multiple \n");
		else
			printf("neither \n");
	}

	return 0;
}