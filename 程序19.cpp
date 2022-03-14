#include<stdio.h>

int main()
{
    int i, j, sum;   /* i表示要判断的数，j表示因子，sum表示因子之和*/ 

	for (i = 2; i <= 1000; i++)
	{
		sum = 1;
		for (j = 2; j <= i / 2; j++)
			if (i%j == 0)        /* 判断i能否被j整除，能的话j即为因子  因子不包括自身 */ 
				sum += j;

		if (sum == i)   /* 判断此数是否等于因子之和 */ 
		{
			printf("%d its factors are 1, ", i);    /* 输出该数 */ 

			for (j = 2; j <= i / 2; j++)
				if (i%j == 0)printf("%d, ", j);    /* 输出因子 */ 

			printf("\n");
		}
	}

	return 0;
}

