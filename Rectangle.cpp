#include "Rectangle.h"

Rectangle::Rectangle(){}

Rectangle::~Rectangle(){}

void Rectangle::Size(){
	// �v�Z
	area = height * width;
}

void Rectangle::Draw(){

	printf("%d", area);
}
