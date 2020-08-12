#ifndef BULLET_H
#define BULLET_H

#include "velocity.h"
#include "point.h"
#include "UFO.h"

class Bullet: public UFO
{
   public:
   	Bullet();
   	void draw();
   	void fire( Point point , float angle );
};

#endif
