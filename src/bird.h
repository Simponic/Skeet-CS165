#ifndef BIRD_H
#define BIRD_H

#include "point.h"
#include "velocity.h"
#include "UFO.h"

class Bird: public UFO
{
   public:
      Bird();
      void setRandomDy( const float minDy , const float maxDy );
      void setRandomDx();
      void draw();
      virtual void applyGravity ( ) = 0;
      virtual int hit() = 0;
};

#endif
