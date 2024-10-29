#include <functional>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef void (*PFunc)(int*);

void SetTimeOut(PFunc P, int second) {
	Sleep(second *= 600);
	P(&second);
}

//コールバック関数
void DispResult(int* s) {}

int main() {
	int playerNumber = 0;
	std::function<void(void)> hantyo = [=]() {

		int dice = rand() % 6 + 1;
		int answer;
		answer = dice % 2;

		if (answer == playerNumber) {
			printf("dice=%d\n", dice);
			printf("正解\n");
		} else {
			printf("dice=%d\n", dice);
			printf("不正解\n");
		}
	};

	printf("半なら0,丁なら1と入力する\n");
	printf("半か丁か : ");
	scanf_s("%d", &playerNumber);
	printf("\n");

	PFunc P;

	P = DispResult;
	SetTimeOut(P, 5);
	hantyo();

	return 0;
}