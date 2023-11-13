#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:

	Rectangle(float height,float width);
	~Rectangle();
	void Size()override;
	void Draw()override;
private:

	float height_ = 0.0f;
	float width_ = 0.0f;
};
