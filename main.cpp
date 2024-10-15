#include<stdio.h>

//#include<Windows.h>//追加

////再帰関数の賃金
//int Recursive(int n,int a) {
//	if (n <= a) {
//		return a;
//	}
//	return (n * a - 50);
//}
//
////一般的な賃金
//int Resive(int e, int a) {
//	if (e <= a) {
//		return a;
//	}
//	return (e * a);
//}
                 //
int Recursive(int Saikiwage, int time, int Saikitotal, int total, int wage) {
	//時給（一般的）X　今まで働いた時間
	total = wage * time;
	//時給（再帰的）X　
	Saikitotal += Saikiwage;

	if (total < Saikitotal) {
		printf("再帰のお金と時間  お金=%d,時給=%d,時間=%d\n", Saikitotal, Saikiwage, time);
		printf("一般のお金と時間  お金=%d,時給=%d,時間=%d\n", total, wage, time);
		return 0;
	} else {
		printf("再帰のお金と時間  お金=%d,時給=%d,時間=%d\n", Saikitotal, Saikiwage, time);
		printf("一般のお金と時間  お金=%d,時給=%d,時間=%d\n", total, wage, time);
		printf("\n");
		return Recursive(Saikiwage * 2 - 50, time + 1, Saikitotal, total, wage);
	}
}

int main() {
	//----------文字コード地獄----------//
	//SetConsoleOutputCP(65001);//追加
	//printf("ばいーん");
	//---------------------------------//

	//時間
	int time = 1;
	//時給（一般的）
	int wage = 1072;
	//時給（再帰的）
	int Saikiwage = 100;
	//合計（一般的）
	int total = 0;
	//合計（再帰的）
	int Saikitotal = 0;
	
   Recursive(Saikiwage, time, Saikitotal, total, wage);

	return 0;
}