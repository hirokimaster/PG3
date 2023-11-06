#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:

	Rectangle();
	~Rectangle();
	void Size()override;
	void Draw()override;

	// setter
	int SetHeight(int height)const { height = height_; }
	int SetWidth(int width)const { width = width_; }

private:
	int height_ = 0;
	int width_ = 0;
	int area_ = 0;
};
