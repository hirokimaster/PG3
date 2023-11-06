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

	// 計算に使う数値のsetter
	virtual void SetHeight(int height) { height_ = height; }
	virtual void SetWidth(int width) {width_ = width; }
	virtual void SetRadius(float radius) { radius_ = radius; }

private:
	int height_ = 0;
	int width_ = 0;
	float radius_ = 0.0f;
};
