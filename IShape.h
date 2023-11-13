#pragma once
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

class IShape {
public:
	IShape() = default;
	~IShape() = default;
	// 面積を求める
	virtual void Size() = 0;
	// 表示
	virtual void Draw() = 0;

protected:
	float area_ = 0.0f;
};
