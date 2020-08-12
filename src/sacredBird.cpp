#include "sacredBird.h"
#include "uiDraw.h"
#include "UFO.h"
// SacredBird constructor
SacredBird :: SacredBird() : Bird()
{
}

// Draw SacredBird
void SacredBird :: draw()
{
   drawSacredBird( point , 15 );
}

// Apply gravity to SacredBird
void SacredBird :: applyGravity ()
{
   this->velocity.addDy ( -0.1 );
}

// Hit SacredBird
int SacredBird :: hit()
{
   kill();
   return -10;
}
