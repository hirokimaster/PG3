#include <stdio.h>
#include "IShape.h"
#include "Rectangle.h"
#include "Circle.h"

int main() {
	IShape* shape;

	// 何の計算をするか。今は矩形
	shape = new Rectangle;

	// 矩形の縦と横の値をセット
	shape->SetHeight(3);
	shape->SetWidth(2);

	// 計算
	shape->Size();
	// 表示
	shape->Draw();

	delete shape;

}