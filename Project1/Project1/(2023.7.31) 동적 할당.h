#pragma once
#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region ���� �Ҵ��̶�?
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾��Դϴ�.

	int* ptr = (int*)malloc(sizeof(int));

	// ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦ �����ų �� ������, 
	// �������� �޸��� ũ�⸦ �Ҵ��� �� ����Ʈ ������ �����մϴ�.

	// printf("ptr�� �� : %p\n", ptr);

	*ptr = 100;

	// printf("ptr�� ����Ű�� �� : %d\n", *ptr);

	// �޸𸮸� ���� �Ҵ��� �� �ּҸ� ���� �����ͷ� ��ȯ�ϱ� ������
	// �ڷ����� ��ȯ�� ���� �޸𸮿� �Ҵ��ؾ� �մϴ�.

	free(ptr); // �޸� ����

	// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�
	// ����� ������ ���� ������ ���־�� �մϴ�.



#pragma endregion

#pragma region ��� ������
// �̹� ������ �޸� ������ ����Ű�� �������Դϴ�.

	// printf("ptr�� �� : %p\n", ptr);
	// printf("ptr�� ����Ű�� �� : %d\n", *ptr);

	// �̹� ������ �����ʹ� �ʱ�ȭ�� �մϴ�.
	ptr = NULL;

	int size = 0;

	// scanf_s("%d", &size);


	if (ptr == NULL)
	{
		// ���� �迭
		ptr = (int*)malloc(size);
	}
	*ptr = 300;
	ptr[1] = 200;

	// printf("ptr[0]�� �� : %d\n", ptr[0]);
	// printf("ptr[1]�� �� : %d\n", ptr[1]);

#pragma endregion

	return 0;
}