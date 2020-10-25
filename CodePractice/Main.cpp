#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int dimu = 0;
	int mumu = 0;

//	자 10분안에 만들어야해 구구단 9 x 9  몇단까지 출력할껀지 입력받아서 구구단을 출력하자//

// 숫자 입력받아서 3의배수이나 4의배수가 아닌걸 다 더해라.

	//scanf("%d", &dimu);
	//

	//for (int i = 0; i < dimu; i++)
	//{
	//	if ((dimu-i) % 3 == 0 && (dimu-i)%4 !=0)
	//	{
	//		mumu += dimu - i;
	//	}
	//}

	//printf("%d\n", mumu);
	
	//	*
	//	**
	//	***
	//	****
	//	*****

	// 하나 찍고 줄바구기 하나찍고 하나찍고 줄바구기
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}