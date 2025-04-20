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


// 형성평가 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

struct data
{
	char name[100];
	char num[100];
	char add[100];
};

int main()
{
	struct data self;
	scanf("%s %s %s", self.name, self.num, self.add);
	printf("name : %s \n", self.name);
	printf("tel : %s \n", self.num);
	printf("addr : %s \n", self.add);
	return 0;
}


// 형성평가 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct data
{
	char name[100];
	char num[100];
	char add[100];
}stu[3];

void input()
{
	int i;
	for (i = 0; i < 3; i++)
	{
		scanf("%s %s %s", stu[i].name, stu[i].num, stu[i].add);
	}
}

void sort()
{
	int i, j;
	struct data tmp;
	for (i = 0; i < 2; i++)
	{
		for (j = 1 + i; j < 3; j++)
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

int main()
{
	input();
	sort();	
	printf("name : %s \n", stu[0].name);
	printf("tel : %s \n", stu[0].num);
	printf("addr : %s \n", stu[0].add);
	return 0;
}

// 형성평가 3
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct data
{
	int x1, y1;
	int x2, y2;

}squ[3];

void input()
{
	int i;
	for (i = 0; i < 2; i++)
	{
		scanf("%d %d %d %d", &squ[i].x1, &squ[i].y1, &squ[i].x2, &squ[i].y2);
	}
}

void sort()
{
	int i, j;
	squ[0].x1 < squ[1].x1 ? squ[2].x1 = squ[0].x1 : squ[2].x1 = squ[1].x1;
	squ[0].y1 < squ[1].y1 ? squ[2].y1 = squ[0].y1 : squ[2].y1 = squ[1].y1;
	squ[0].x2 > squ[1].x2 ? squ[2].x2 = squ[0].x2 : squ[2].x2 = squ[1].x2;
	squ[0].y2 > squ[1].y2 ? squ[2].y2 = squ[0].y2 : squ[2].y2 = squ[1].y2;
}

void output()
{
	printf("%d %d %d %d", squ[2].x1, squ[2].y1, squ[2].x2, squ[2].y2);
}


int main()
{
	input();
	sort();
	output();
	return 0;
}



// 형성평가 4
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct data
{
	int he;
	double we;

}n[3];

void input()
{
	int i;
	for (i = 0; i < 2; i++)
	{
		scanf("%d %lf", &n[i].he, &n[i].we);
	}
}

void child()
{
	n[2].he = (n[0].he + n[1].he) / 2 + 5;
	n[2].we = (n[0].we + n[1].we) / 2.0 - 4.5;
}

int main()
{
	input();
	child();
	printf("height : %dcm \n", n[2].he);
	printf("weight : %.1fkg \n", n[2].we);
}


// 형성평가 5
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct data
{
	char name[20];
	int a, b, c, sum;

}stu[10];

void input(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", stu[i].name, &stu[i].a, &stu[i].b, &stu[i].c);
		stu[i].sum = stu[i].a + stu[i].b + stu[i].c;
	}
}

void sort(int n)
{
	int i, j;
	struct data tmp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 1 + i; j < n; j++)
		{
			if (stu[i].sum < stu[j].sum)
			{
				tmp = stu[i];
				stu[i] = stu[j];
				stu[j] = tmp;
			}
		}
	}
}

void output(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%s %d %d %d %d \n", stu[i].name, stu[i].a, stu[i].b, stu[i].c, stu[i].sum);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	input(n);
	sort(n);
	output(n);
}
