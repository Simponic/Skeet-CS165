#include "UFO.h"
#include "point.h"
#include "velocity.h"
#include <iostream>
using namespace std;
// UFO Default constructor
UFO :: UFO()
{
   setAlive ( true );
}

// Get Ufo point
Point UFO :: getPoint() const
{
   return this->point;
}

// Get UFO velocity
Velocity UFO:: getVelocity() const
{
   return this->velocity;
}

// Get UFO alive
bool UFO :: isAlive() const
{
   return this->alive;
}

// Set UFO point
void UFO :: setPoint( const Point &point )
{
   this->point = point;
}

// Set UFO velocity
void UFO :: setVelocity( const Velocity &velocity)
{
   this->velocity = velocity;
}

// Set UFO velocity with dy & dx
void UFO :: setVelocity ( float dx , float dy )
{
   velocity = Velocity ( dx , dy );
}

// Set UFO alive
void UFO :: setAlive ( const bool alive )
{
   this->alive = alive;
}

// Advance UFO
void UFO :: advance()
{
   setPoint ( this->velocity.updatePoint ( this->point ) );
}


// Kill UFO
void UFO :: kill()
{
   this->alive = false;
}
