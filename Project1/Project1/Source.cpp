#include <stdio.h>
#include <limits.h>

#pragma region ������
	// ���� ������ ����� ����

enum State
{
	IDLE,
	ATTACK = 100,
	DIE

	// enum�� ������ ���� ������ �� ������, �߰��� ���� �������� �� 
	// �� �������� ������ ���� ������ ������ ���� +1�� �����˴ϴ�.
};



#pragma endregion

int main()
{
#pragma region ������


	enum State state;

	// state = IDLE;

	// printf("state�� IDLE�� �� : %d\n", state);

	// state = ATTACK;

	// printf("state�� ATTACK�� �� : %d\n", state);

	//	state = DIE;
	//	
	//	switch (state)
	//	{
	//	case IDLE: printf("��� ����\n");
	//		break;
	//	case ATTACK: printf("���� ����\n");
	//		break;
	//	case DIE: printf("���� ����\n");
	//		break;
	//	}

#pragma endregion

#pragma region �� ����ϱ�
	
	//	for (int i = 0; i < 5; i++)
	//	{
	//		for (int j = 0; j <= i; j++)
	//		{
	//			printf("*");
	//		}
	//		printf("\n");
	//	
	//	}


#pragma endregion

#pragma region 1~10������ ��

	//	int result = 0;
	//	for (int i = 1; i <= 10; i++)
	//	{
	//		result += i;
	//	}
	//	printf("result ������ �� : %d\n", result);

#pragma endregion

#pragma region ASCII �ڵ�
	// 1963�� �̱� ANSI���� ǥ��ȭ�� ������ȯ�� 7��Ʈ ��ȣü���Դϴ�.

	// 128���� ����, ����, Ư������, ����ڰ� ǥ���˴ϴ�.

	char alphabet = 65;

	// printf("alphabet ������ ASCII �ڵ��� �� : %c\n", alphabet);
	// printf("alphabet ������ �� : %d\n", alphabet);

	//	for (alphabet; alphabet <= 90; alphabet++)
	//	{
	//		printf("%c\n", alphabet);
	//	}

#pragma endregion

#pragma region �ּҰ��� �ִ밪

	// [10] [5] [11] [1] [3]
	
	int array[5] = { 10, 5, 11, 1, 3 };

	int max = 0;
	int min = INT_MAX;



	for (int i = 0; i < 5; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
		if (min > array[i])
		{
			min = array[i];
		}
	}
	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);



#pragma endregion



	return 0;
}