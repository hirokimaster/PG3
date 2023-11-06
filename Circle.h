#pragma once
#include "IShape.h"
class Circle : public IShape {
public:

	Circle();
	~Circle();
	void Size()override;
	void Draw()override;

	// setter
	void SetRadius(float radius)override { radius_ = radius; }

private:
	
	float radius_ = 0.0f;
	float area_ = 0.0f;
	float pi = (float)M_PI;
};
