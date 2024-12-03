#include "Enemy.h"

//staticで宣言したメンバ関数ポインタテーブルの実態
void (Enemy::*Enemy::thirdTable[])() = {
	&Enemy::Approach,     //接近
	&Enemy::Shooting,     //射撃
	&Enemy::Withdrawal,   //離脱
};

void Enemy::Approach() {
	printf("接近\n");
	phase_ = Phase::Shooting;
}

void Enemy::Shooting() {
	printf("射撃\n");
	phase_ = Phase::Withdrawal;
}

void Enemy::Withdrawal() {
	printf("離脱\n");
	phase_ = Phase::Approach;
}

void Enemy::Update() {
	
	
		(this->*thirdTable[static_cast<size_t>(phase_)])();
	
	

	//現在フェーズの関数を実行

}
