#pragma once
class MyClass {
public:
	//自作メンバ関数
	void Func1();
	void Func2();

private:
	//メンバ関数ポインタのテーブル
	void (MyClass::*spFuncTable[])() = {
	
	}
};
