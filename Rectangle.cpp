#include "Rectangle.h"

Rectangle::Rectangle(){}

Rectangle::~Rectangle(){}

void Rectangle::Size(){
	// 計算
	area_ = height_ * width_;
}

void Rectangle::Draw(){
	// 計算結果を表示
	printf("矩形の面積 = %d", area_);
}
