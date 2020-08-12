###############################################################
# Program:
#     Project 09, Skeet
#     Brother MacBeth, CS165
# Author:
#     Logan Hunt
# Summary:
#     Project 09 Skeet
# Above and Beyond
# 		Added gravity
# 		Multiple Birds
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main game
###############################################################
a.out: driver.o game.o uiInteract.o uiDraw.o point.o velocity.o rifle.o UFO.o bullet.o bird.o standardBird.o toughBird.o sacredBird.o
	g++ driver.o game.o uiInteract.o uiDraw.o point.o velocity.o rifle.o UFO.o bullet.o bird.o standardBird.o toughBird.o sacredBird.o $(LFLAGS)

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h point.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

game.o: game.cpp uiDraw.h uiInteract.h point.h rifle.h bullet.h bird.h UFO.h
	g++ -c game.cpp

driver.o: game.h uiInteract.h driver.cpp
	g++ -c driver.cpp

rifle.o: rifle.h point.h uiDraw.h rifle.cpp
	g++ -c rifle.cpp

#######################################################################
# ADD YOUR ADDITIONAL RULES HERE!
#
# Then, don't forget to add them to the dependecy list for a.out above.
#######################################################################
bullet.o: bullet.h bullet.cpp UFO.h
	g++ -c bullet.cpp

bird.o: bird.h bird.cpp UFO.h standardBird.h sacredBird.h toughBird.h
	g++ -c bird.cpp

UFO.o: UFO.h UFO.cpp velocity.h
	g++ -c UFO.cpp velocity.h

velocity.o: velocity.h velocity.cpp
	g++ -c velocity.cpp

toughBird.o: toughBird.h toughBird.cpp
	g++ -c toughBird.cpp

standardBird.o: standardBird.h standardBird.cpp
	g++ -c standardBird.cpp

sacredBird.o: sacredBird.h sacredBird.cpp
	g++ -c sacredBird.cpp

###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o
