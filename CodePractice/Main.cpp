#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int dimu = 0;
	int mumu = 0;

//	�� 10�оȿ� �������� ������ 9 x 9  ��ܱ��� ����Ҳ��� �Է¹޾Ƽ� �������� �������//

// ���� �Է¹޾Ƽ� 3�ǹ���̳� 4�ǹ���� �ƴѰ� �� ���ض�.

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

	// �ϳ� ��� �ٹٱ��� �ϳ���� �ϳ���� �ٹٱ���
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