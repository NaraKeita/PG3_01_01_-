#pragma once
#include <stdio.h>
enum class Phase {
	Approach,
	Shooting,
	Withdrawal

};

class Enemy {
public:
	//敵メンバ関数
	void Approach();
	void Shooting();
	void Withdrawal();
	
	void Update();
	//thirdTable = &Enemy
private:
	//メンバ変数はここに作る
	Phase phase_ = Phase::Approach;
	//メンバ関数ポインタのテーブル
	static void(Enemy::*thirdTable[])();


};
