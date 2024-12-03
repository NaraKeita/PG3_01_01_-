#include <stdio.h>
#include "Enemy.h"

int main() {
	Enemy enemy_ ;
	int i = 0;
	while (true) {
		enemy_.Update();
		printf("続けるなら0,終わるなら1を入力:");
		scanf_s("%d", &i);
	}
	
	return 0;
}