#ifndef STANDARDBIRD_H
#define STANDARDBIRD_H

#include "bird.h"

class StandardBird: public Bird
{
   public:
	   StandardBird();
	   void draw();
	   int hit();
      void applyGravity();
};

#endif
