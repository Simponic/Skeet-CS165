#ifndef SACREDBIRD_H
#define SACREDBIRD_H

#include "bird.h"

class SacredBird: public Bird
{
   public:
	   SacredBird ();
	   void draw();
	   int hit();
      void applyGravity();
};

#endif
