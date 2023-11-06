#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:

	Rectangle();
	~Rectangle();
	void Size()override;

	void Draw()override;

private:
	int height = 2;
	int width = 3;
	int area = 0;
};
