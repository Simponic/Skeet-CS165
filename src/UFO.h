#ifndef UFO_H
#define UFO_H

#include "point.h"
#include "velocity.h"

class UFO
{
   public:
	   UFO();
	   Point getPoint() const;
	   Velocity getVelocity() const;
	   bool isAlive() const;
      void setAlive ( bool isAlive );
	   void setPoint( const Point &point );
 	   void setVelocity( const Velocity &velocity );
      void setVelocity ( float dx , float dy );
	   void advance();
	   void kill();
      virtual void draw() = 0;
   protected:
       bool alive;
       Point point;
       Velocity velocity;
};

#endif
