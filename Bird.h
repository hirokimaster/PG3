#pragma once
class Suzume;

class Bird {
public:
    Bird() = default;
   ~Bird() = default;
    // 鳴く
   virtual void BirdSing() = 0;

};

