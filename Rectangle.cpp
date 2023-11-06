#include "Rectangle.h"

Rectangle::Rectangle(){}

Rectangle::~Rectangle(){}

void Rectangle::Size(){
	// ŒvŽZ
	area_ = height_ * width_;
}

void Rectangle::Draw(){
	// ŒvŽZŒ‹‰Ê‚ð•\Ž¦
	printf("%d", area_);
}
