#include <stdio.h>

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ��Դϴ�.

void Function()
{
	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������ �޸𸮰� ��� ���̰� �ǹǷ� 
	// ���� �����÷ο찡 �߻��մϴ�.
	printf("�Լ� ȣ��\n");
	Function();
}



#pragma endregion

void CountDown(int count)
{
		


}

int Factorial(int count)
{
	if (count <= 1)
		return 1;
	
	return count * Factorial(count - 1);
}


int main()
{
	// CountDown(3);
	
	int data = 10;

	int* ptr = &data;
	
	// 0a 00 00 00

	// [] [] [] []

	// ��Ʋ ����� ���
	// ���� �ּҿ� �������� ���� ����Ʈ���� �����ϴ� ����Դϴ�.
		
	// ���α׷��� ���������� ����Ǿ��� �� 0�̶�� ���� ��ȯ�մϴ�.
	return 0;




}