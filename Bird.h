#pragma once
class Suzume;

class Bird {
public:
    Bird() = default;
   virtual~Bird() = default;
    // 鳴く
   virtual void BirdSing() = 0;

};

