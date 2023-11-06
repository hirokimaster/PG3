#include <stdio.h>
#include "IShape.h"
#include "Rectangle.h"

int main() {
	IShape* shape;

	shape = new Rectangle;

	shape->Size();

	shape->Draw();
}