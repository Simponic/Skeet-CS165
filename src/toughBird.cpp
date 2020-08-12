#include "toughBird.h"
#include "bullet.h"
#include "uiDraw.h"
#include <math.h>

// ToughBird default constructor
ToughBird  :: ToughBird() : Bird()
{
   health = 3;
   setRandomDy( 4.5 , 6.5 );
}

// Hit ToughBird
int ToughBird :: hit()
{
   if ( health > 1 )
   {
      health -= 1;
      return 1;
   }
   else
   {
      kill();
      return 2;
   }
   return 0;
}


// Apply gravity to ToughBird
void ToughBird :: applyGravity ()
{
   this->velocity.addDy ( -0.05 );
}


// Draw ToughBird
void ToughBird :: draw()
{
   drawToughBird( point , 15 , health );
}
