#pragma once
#include <stdio.h>
#include "Bird.h"

class Hato : public Bird {
public:
	Hato();
	~Hato();
	// 鳴く
	void BirdSing()override;
};
