#include "Rectangle.h"

Rectangle::Rectangle(){}

Rectangle::~Rectangle(){}

void Rectangle::Size(){
	// ŒvŽZ
	area = height * width;
}

void Rectangle::Draw(){

	printf("%d", area);
}
