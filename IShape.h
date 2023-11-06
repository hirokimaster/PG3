#pragma once
#include <stdio.h>

class IShape {
public:
	IShape() = default;
	~IShape() = default;
	// 面積を求める
	virtual void Size() = 0;
	// 表示
	virtual void Draw() = 0;


};
