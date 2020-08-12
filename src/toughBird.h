#ifndef TOUGHBIRD_H
#define TOUGHBIRD_H

#include "bird.h"
#include "bullet.h"
class ToughBird: public Bird
{
   public:
	   ToughBird ();
	   void draw();
	   int hit();
      void applyGravity();
   private:
      int health;
};

#endif
