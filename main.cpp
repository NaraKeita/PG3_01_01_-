#include<stdio.h>
#include<Windows.h>//16ページ
#include<stdlib.h>//追加

//#include<Windows.h>//追加

//-----------6ページまで----------------//
//void PrintHelloWorld(void) {
//	printf("HelloWorld\n");
//}
//---------------------------------------//

//--------------7ページまで-----------------//
//int add(int a, int b) { 
//	return a + b;
//}
//
//int sub(int a, int b) { 
//	return a - b;
//}
//---------------------------------------//

//----------------------11ページまで--------------------------//
//int addition(int a, int b) { return a + b; }
//
//int subtranction(int a, int b) { return a - b; }
//
//int multiplication(int a, int b) { return a * b; }
//
//int division(int a, int b) { return a / b; }
//---------------------------------------------------------//

//---------------------14ページまで--------------------//
//typedef int (*newType)(int a);
//
//int twice(int a) { return a * 2; }
//
//int triple(int a) { return a * 3; }
//-----------------------------------------------------//

//--------------最後の方----------------//
typedef void (*PFunc)(int*,int,int);
//
//コールバック関数
//void DispResult(int* s) {
// printf("%d以上もって実行されたよ\n", *s);
// }
//課題用コールバック関数
void DispResult(int* s, int dice, int Number) {
	int answer;
	answer = dice % 2;
	if (answer == Number) {
		printf("dice=%d\n", dice);
		printf("正解\n");
	} else {
		printf("dice=%d\n", dice);
		printf("不正解\n");
	}
}

//void setTimeout(PFunc p, int second) { 
//	Sleep(second * 1000); 
//p(&second);
//}
//----------------------------------------//

void SetTimeOut(PFunc P, int second, int dice, int Number) {
	Sleep(second *= 600);
	P(&second, dice, Number);
}

int main() {
	//課題
	int Number = 0;
	int dice = 0;
	printf("半なら0,丁なら1と入力する\n");
	printf("半か丁か : ");
	scanf_s("%d", &Number);
	printf("\n");
	PFunc P;
	dice = rand() % 6 + 1;
	P = DispResult;
	SetTimeOut(P, 5, dice, Number);

	//-----------6ページまで----------------//
	//関数ポインタを宣言
	 //void (*pfunc)();

	 //pfunc = PrintHelloWorld;//ここで中身を入れる
	 //printf("PrintHelloWorldのアドレス = %p\n", PrintHelloWorld);
	 //printf("main = %p\n", main);
	 //pfunc();
	//---------------------------------------//

	//--------------7ページまで-----------------//
	 //int l = 114;
	 //int h = 514;

	 //int (*calc)(int, int);

	 //calc = add;
	 //printf("%d\n", calc(l, h));

	 //calc = sub;//ここで関数を切り替え
	 //printf("%d\n", calc(l, h));
	//-------------------------------------------//

	//----------------------11ページまで--------------------------//
	// int l = 33;
	// int h = 4;

	////実行する関数を配列でまとめられる
	// int (*funcArr[4])(int, int) = {
	//     addition,
	//     subtranction,
	//     multiplication,
	//     division
	// };

	// for (int i = 0; i < 4; i++) {
	//	printf("%d\n", funcArr[i](l, h));
	// }
	//---------------------------------------------------------//

	//---------------------14ページまで--------------------//
	// newType calc;
	////ちょっとclassのインスタンスに似ている

	// int h = 4;

	// calc = &twice;
	// printf("%d\n", calc(h));

	// calc = &triple;
	// printf("%d\n", calc(h));
	//-----------------------------------------------------//

	/*printf("start\n");

	PFunc p;
	p = DispResult;
	setTimeout(p, 5);*/

	return 0;
}