#include "Circle.h"

Circle::Circle(){}

Circle::~Circle(){}

void Circle::Size(){
	// 計算
	area_ = radius_ * radius_ * pi;
}

void Circle::Draw(){
	// 計算結果を表示
	printf("円の面積 = %lf", area_);
}
