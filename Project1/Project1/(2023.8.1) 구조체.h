#pragma once
#include <stdio.h>
#include <math.h>

#pragma region ����ü
// ���� ���� ������ �ϳ��� �������� ����ȭ�� ���� 
// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

struct GameObject
{
	int health;
	double x;
	char grade;

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ�, 
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� �����ϴ�.
};

#pragma endregion

struct Player
{
	float x, y;
};

struct Enemy
{
	float x, y;
};

int main()
{
#pragma region ����ü ����

	// struct GameObject gameObject;
	// 
	// gameObject.x = 3.45;
	// gameObject.health = 100;
	// 
	// printf("gameObject.x�� �� : %lf\n", gameObject.x);
	// printf("gameObject.health�� �� : %d\n", gameObject.health);
	// 
	// struct GameObject object = { 300, 6.25 };
	// 
	// printf("gameObject.x�� �� : %lf\n", object.x);
	// printf("gameObject.health�� �� : %d\n", object.health);

#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� cpu�� ���� �� �ѹ��� ���� �� �ֵ���,
	// �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ�
	// ����ȭ �۾��Դϴ�.

	// printf("GameObject�� ũ�� : %u", sizeof(struct GameObject));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿� ũ�Ⱑ ���� ū
	// �ڷ����� ����� �ǵ��� �����մϴ�.,

#pragma endregion

#pragma region ������ �Լ�

	// int result = pow(10, 2);
	// float decimal = 100.0f;
	// 
	// // sqrt : ��ȯ�ϴ� ������ long double, double, float
	// decimal = sqrt(result);
	// 
	// printf("result ������ ��� : %d\n", result);
	// printf("decimal ������ ��� : %f\n", decimal);


#pragma endregion

#pragma region �� �� ������ �Ÿ�
	struct Player player;
	player.x = 1.0f;
	player.y = 2.0f;

	struct Enemy enemy;
	enemy.x = 3.0f;
	enemy.y = 4.0f;

	float x = player.x - enemy.x;
	float y = player.y - enemy.y;


	double distance = sqrt(pow(x, 2) + pow(y, 2));


	printf("player�� enemy�� �Ÿ� : %lf", distance);

#pragma endregion

	return 0;
}