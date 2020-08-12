#define BULLET_SPEED 10.0
#define M_PI 3.14159
#include <cmath>
#include "bullet.h"
#include "uiDraw.h"
#include <iostream>
using namespace std;

Bullet :: Bullet() : UFO()
{

}

void Bullet :: draw()
{
   drawDot( point );
}

void Bullet :: fire( Point point , float angle )
{
   float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
   float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angle));
   setPoint( point );
   setVelocity( dx , dy );
}
