#include <stdio.h>

#pragma region ��ũ��
	// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ� ó���Ǵ� �����Դϴ�.

#define SIZE 5
	// ��ó�����?
	// ���α׷��� �����ϵǱ� ������ ���α׷��� ���� ���� ó���ϴ� �����Դϴ�.

#pragma endregion


void main()
{
#pragma region ������ ���ȭ

	float data = 99.865f;
	int* pointer = NULL;

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó���� �� �ִ� ũ��� ��������, 
	// �� ���� ó���� �� �ִ� ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�.
	// printf("pointer ������ ũ�� : %d\n", sizeof(pointer));

	// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������ �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.
	// pointer = &data;

	// ��� ���� ������
	/*
	int hp = 100;
	int mp = 50;

	const int* cPtr = &hp;

	printf("cPtr�� ����Ű�� �� : %d\n", *cPtr);
	// ������ ������ ����� �����Ͽ�, ������ ������ ����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������ �� �����ϴ�.
	// *cPtr = 999; (ERROR)

	cPtr = &mp;

	// �����ͷ� ���� �Ǿ��ִ� ������ ���ȭ�� ���� ������ ���� �ʽ��ϴ�.
	mp = 999;
	printf("cPtr�� ����Ű�� �� : %d\n", *cPtr);
	*/

	// ��� ������
	/*
	float decimal1 = 5.75f;
	float decimal2 = 9.99f;

	float* const floatPtr = &decimal1;

	// ������ ����� ������ ������ ���ȭ�Ǿ� ���ο� �ּҰ��� ������ �� �����ϴ�.
	// floatPtr = &decimal2;

	*floatPtr = 16.825f;

	printf("floatPtr�� ����Ű�� �� : %f", *floatPtr);
	*/


#pragma endregion

#pragma region ��ũ��

	// ��ũ���� ��� �ڷ����� �������� �����Ƿ� �޸� ������ ������ ���� �ʽ��ϴ�.

	for (int i = 0; i < SIZE; i++)
	{
		printf("ä�� ��...\n");
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("��ų ���� ��...\n");
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("��� ��...\n");
	}

#pragma endregion




}