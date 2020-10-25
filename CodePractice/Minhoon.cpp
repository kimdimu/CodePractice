#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int baseball[3] = { 0, 0, 0 };
	int userball[3] = { 0, 0, 0 };

	for (int i = 0; i < 3; i++)
	{
		baseball[i] = rand() % 10;
	}
	
	int ball = 0;
	int strike = 0;
	while (true)
	{
		ball = 0;
		strike = 0;

		printf("숫자 3개를 입력 하시오 : ");
		scanf("%d %d %d", &userball[0], &userball[1], &userball[2]);
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (userball[i] == baseball[j])
				{
					if (i == j) strike++;
					else ball++;
				}
			}
		}
		
		if (strike == 3) break;
		else printf("ball : %d, strike : %d\n", ball, strike);
	}

	printf("증답입니다!");

	return 0;
}