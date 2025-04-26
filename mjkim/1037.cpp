// Project2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	int n;
	int str[50];
	while (scanf("%d", &n) != EOF)  // EOF까지 계속 반복
	{
		for (int i = 0; i < n; i++)  // n개의 약수 입력
		{
			scanf("%d", &str[i]);
		}
		int num;

		if (n == 1)  // 약수 개수가 1개일 때 -> 제곱
		{
			num = pow(str[0], 2);  
		}
		else if (n > 1) // 약수 개수 1 이상 -> 오름차순 정렬
		{
			int i, j, tmp;
			for ( i = 0; i < n-1; i++)
			{
				for (j = 1+i; j < n; j++)
				{
					if (str[i] > str[j]) 
					{
						tmp = str[i];
						str[i] = str[j];
						str[j] = tmp;
					}
				}
			}
			num = str[0] * str[n - 1];  // 제일 큰 수 * 작은 수 
		}
		printf("%d", num);
	}

	return 0;
}

