#pragma once
#include <stdio.h>

void main()
{
#pragma region 실수를 저장하는 방법

	float pi = 3.5f;
	double doubleData = 3.1;

	// printf() 함수로 소수를 출력할 때 4 byte 크기의 실수형 자료형은 소수점 이하 6자리까지만 표기합니다.

	// printf() 함수로 소수를 출력할 때 8 byte 크기의 실수형 자료형은 소수점 이하 15자리까지만 표기합니다.

	// 10 == 10 <- 참
	// 3.1 == 3.1 <- 거짓

	// printf("pi 변수의 값 : %.15f\n", pi);
	// printf("doubleData 변수의 값 : %.16lf\n", doubleData);

	// 소수점 이하의 값은 정확하지만, 소수점 이상의 값은 반올림하여 표현하므로 정확하게 표기되지 않습니다.

	// 2  진수 -> 0 ~ 1
	// 8  진수 -> 0 ~ 7 ("%o")
	// 16 진수 -> 0 ~ F ("%x")

	// A -> (10)
	// B -> (11)
	// C -> (12)
	// D -> (13)
	// E -> (14)
	// F -> (15)




#pragma endregion

#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을 수행하도록 실행하는 명령문입니다.

	// 관계 연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는 1 이라는 값으로 나타내는 연산자입니다.

	// A < B (B가 A보다 크다.)
	// A > B (A가 B보다 크다.)
	// A <= B (B가 A보다 크거나 같다.)
	// A >= B (A가 B보다 크거나 같다.)
	// A == B (A와 B가 같다.)
	// A != B (A와 B는 같지 않다.)

	// int result = 10 != 10;

	// 관계 연산자는 조건이 맞을 때 1이라는 값으로 반환되며, 조건이 틀릴 때 0이라는 값으로 반환합니다.
	//printf("result 변수의 값 : %d\n", result);

	// if 문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 명령문입니다.


	// if (10 != 10) // <- 0 (거짓), 0 이외의 값이 들어오면 '참'으로 처리합니다.
	// {
	// 	printf("if문의 결과가 '참' 입니다.\n");
	// 
	// }

	// else if 문
	// if 문의 조건이 틀릴 때 else if문의 조건이 맞다면 실행되는 명령문입니다.

	// if (10 != 10)
	// {
	// 	printf("if문의 결과가 '참'입니다.\n");
	// 
	// }
	// else if (10 == 10)
	// {
	// 	printf("else if문의 결과가 '참'입니다.\n");
	// }
	// else if문은 계속 연결해서 사용할 수 있습니다.

	// else 문
	// if 문과 else if 문의 조건이 다 틀리면 실행되는 명령문입니다.

	 // int a = 10;
	 // int b = 20;
	 // 
	 // if (a == b)
	 // {
	 // 	printf("if문의 결과가 '참'입니다.\n");
	 // 
	 // }
	 // else if (a > b)
	 // {
	 // 	printf("else if문의 결과가 '참'입니다.\n");
	 // }
	 // else
	 // {
	 // 	 printf("if문의 결과와 else if문의 결과가 모두 '거짓'입니다.\n");
	 // }

	 // if문의 연결된 모든 조건문의 조건이 맞을 때 가장 위에 있는 조건문만 실행됩니다.

#pragma endregion

#pragma region 논리 연산자

	// && (AND)
	// if (5 == 5 && 1 < 5)
	// {
	// 	printf("AND\n");
	// }
	// // || (OR)
	// if (5 != 5 || 1 <= 5)
	// {
	// 	printf("OR\n");
	// }
	// // ! (NOT)
	// if (!(0 == 1))
	// {
	// 	printf("NOT\n");
	// }



#pragma endregion

#pragma region 사분면
/*
	int x = 3;
	int y = 6;

	if (x > 0 && y > 0)
	{
		printf("제 1 사분면\n");
	}
	else if (x < 0 && y > 0)
	{
		printf("제 2 사분면\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("제 3 사분면\n");
	}
	else if (x > 0 && y < 0)
	{
		printf("제 4 사분면\n");
	}
	else if (x == 0 && y == 0)
	{
		printf("원점\n");
	}
	else if (x == 0 && y != 0)
	{
		printf("X 절편\n");
	}
	else (x != 0 && y == 0)
	{
		printf("Y 절편\n");
	}


*/
#pragma endregion
}