#include <stdio.h>
#include "IShape.h"
#include "Rectangle.h"
#include "Circle.h"

int main() {
	IShape* shape;

	// 何の計算をするか。今は円
	shape = new Circle(2.0f);

	// 計算
	shape->Size();

	// 表示
	shape->Draw();

	delete shape;

}