#include "Rectangle.h"

Rectangle::Rectangle(){}

Rectangle::~Rectangle(){}

void Rectangle::Size(){
	// �v�Z
	area_ = height_ * width_;
}

void Rectangle::Draw(){
	// �v�Z���ʂ�\��
	printf("%d", area_);
}
