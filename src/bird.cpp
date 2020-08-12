#include "bird.h"
#include "point.h"
#include "velocity.h"
#include "uiDraw.h"
#include <iostream>
using namespace std;
// Default constructor
Bird :: Bird()
{
   point.setX( -200.0 );
   point.setY( -200 ); // (float)random ( -100 , 100 )
   setRandomDx();
   setRandomDy( 5.0 , 8.7 );
}

void Bird :: draw() {}

void Bird :: setRandomDx()
{
   float dx = random ( 1.0 , 3.0 );
   velocity.setDx ( dx );
}

void Bird :: setRandomDy( const float minDy , const float maxDy )
{
   velocity.setDy ( random ( minDy , maxDy ) * ( point.getY() > 0 ? 1 : 1 ) );
}
