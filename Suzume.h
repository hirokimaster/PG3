#pragma once
#include "Bird.h"

class Suzume : public Bird {
public:
	Suzume();
	~Suzume();
	// 鳴く
	void BirdSing()override;
};
