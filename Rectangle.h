#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:

	Rectangle();
	~Rectangle();
	void Size()override;
	void Draw()override;

	// setter
	void SetHeight(int height)override {height_ = height; }
	void SetWidth(int width)override {width_ = width; }

private:
	int height_ = 0;
	int width_ = 0;
	int area_ = 0;
};
