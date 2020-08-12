#include "standardBird.h"
#include "uiDraw.h"

// StandardBird constructor
StandardBird :: StandardBird() : Bird()
{

}

// Draw StandardBird
void StandardBird :: draw()
{
   drawCircle( point , 15 );
}

// Apply gravity to StandardBird
void StandardBird :: applyGravity ()
{
   this->velocity.addDy ( -0.1 );
}

// Hit StandardBird
int StandardBird :: hit()
{
   kill();
   return 1;
}
