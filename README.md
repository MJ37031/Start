# Start
// 연습문제 05
#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

struct money
{
	int number;
	int won;
};

struct money max(money arr[], int n)
{
	money maxdata = arr[0];

	int i;
	for (i = 1; i < n; i++)
	{
		if (maxdata.won < arr[i].won)
			maxdata = arr[i];
	}
	return maxdata;
}

int main()
{
	money saving[5], king;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d번 저축금액은? ", i + 1);
		saving[i].number = i + 1;
		scanf("%d", &saving[i].won);
	}

	king = max(saving, 5);
	printf("저축왕 %d번 %d원 \n", king.number, king.won);

	return 0;
}



// 자가진단 5
#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

struct ki
{
	char name[20];
	int hight;
};

struct ki min(ki arr[], int n)
{
	ki mindata = arr[0];

	int i;
	for (i = 1; i < n; i++)
	{
		if (mindata.hight > arr[i].hight)
			mindata = arr[i];
	}

	return mindata;
}

int main()
{
	ki saving[5], king;
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%s %d", saving[i].name, & saving[i].hight);
	}

	king = min(saving, 5);
	printf("%s %d \n", king.name, king.hight);

	return 0;
}


//연습문제 06

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

struct data
{
	char name[20];
	int he;
	double we;
}stu[5];

void input()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%s %d %lf", stu[i].name, &stu[i].he, &stu[i].we);
	}
}

void sort()
{
	int i, j;

	struct data tmp;

	for (i = 0; i < 4; i++)
	{
		for (j = 1 + i; j < 5; j++)
		{
			if (stu[i].he > stu[j].he)
			{
				tmp = stu[i];
				stu[i] = stu[j];
				stu[j] = tmp;
			}
		}
	}
}

void output()
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%s %d %.1f \n", stu[i].name, stu[i].he, stu[i].we);
	}
}

int main()
{
	input();
	sort();
	output();

	return 0;
}



// 자가진단 6
#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

struct data
{
	char name[20];
	int he;
	double we;
}stu[5];

void input()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%s %d %lf", stu[i].name, &stu[i].he, &stu[i].we);
	}
}

void sortname()
{
	int i, j;

	struct data tmp;

	for (i = 0; i < 4; i++)
	{
		for (j = 1 + i; j < 5; j++)
		{
			if (stu[i].name[0] > stu[j].name[0])
			{
				tmp = stu[i];
				stu[i] = stu[j];
				stu[j] = tmp;
			}
		}
	}
}

void sortwe()
{
	int i, j;

	struct data tmp;

	for (i = 0; i < 4; i++)
	{
		for (j = 1 + i; j < 5; j++)
		{
			if (stu[i].we < stu[j].we)
			{
				tmp = stu[i];
				stu[i] = stu[j];
				stu[j] = tmp;
			}
		}
	}
}

void outputname()
{
	int i;

	printf("name \n");

	for (i = 0; i < 5; i++)
	{
		printf("%s %d %.1f \n", stu[i].name, stu[i].he, stu[i].we);
	}
	printf("\n");
}

void outputwe()
{
	int i;

	printf("weight \n");

	for (i = 0; i < 5; i++)
	{
		printf("%s %d %.1f \n", stu[i].name, stu[i].he, stu[i].we);
	}
	printf("\n");
}

int main()
{
	input();
	sortname();
	outputname();

	sortwe();
	outputwe();

	return 0;
}


