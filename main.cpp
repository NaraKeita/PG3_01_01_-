#include<stdio.h>

//#include<Windows.h>//追加

int Recursive(int n,int a) {
	if (n <= a) {
		return a;
	}
	return (n * a - 50);
}

int Resive(int e, int a) {
	if (e <= a) {
		return a;
	}
	return (e * a);
}

int main() {
	//----------文字コード地獄----------//
	//SetConsoleOutputCP(65001);//追加
	//printf("ばいーん");
	int a = 5;
	int e = 1072;
	int n = 100;

	printf("一般的な賃金体系 = %d円\n", Resive(e,a));
	printf("再帰的な賃金体系 = %d円\n", Recursive(n,a));

	return 0;
}