#ifndef PLAYERSHIP_H
#define PLAYERSHIP_H

// ************************************************************************************************
// ******************************* INTERACTION WITH ANOTHER MODULES *******************************
// ************************************************************************************************
#include "pixel.h"
#include "../Display/Nokia5110.h"
#include "../Sounds/Sound.h"
#include "../Display/Nokia5110.h"
#include "../Controls/Switches.h"
#include "../Controls/SlidePot.h"

// ************************************************************************************************
// *********************************** DECLARATION OF "CLASS" *************************************
// ************************************************************************************************

// *************** Structure used for the ship ***************************
typedef struct PlayerShipVariables
{
	unsigned char posX; 				//Position X of the ship
	unsigned char posY; 				//Position Y of the ship
	PixelType shoots[5];				//Array of shoots of the ship
	unsigned char shCounter; 		//Counter of shoots
	unsigned char healthPoints; //Health points of the ship
	unsigned short score;				//Score of the ship
	unsigned char dead;					// (0: Alive, 1: Dying, 2: Dead)
	unsigned char curStatus;		// Current status of the ship
	unsigned char *image[6];
}PlayerShip;

// ************************************************************************************************
// ******************************** DECLARATION OF PUBLIC FUNCTIONS *******************************
// ************************************************************************************************

//**********************PlayerShip_ControlShip***********************
// This function do the following tasks:
// - Draws the ship and moves it on dependance of the slide pot
// - Generate the shoots of the ship on dependance of the shoot switch
// inputs: this: Corresponds to the structure including the parameters of the class, in this case the ship
//				 intCounter: Indicates how many cycles of the game engine have occurred
// outputs: none
void PlayerShip_ControlShip(PlayerShip* this, unsigned char intCounter);


//**********************PlayerShip_InitShip***********************
// This function do the following tasks:
// - Draws the ship and moves it on dependance of the slide pot
// - Generate the shoots of the ship on dependance of the shoot switch
// inputs: this: Corresponds to the structure including the parameters of the class, in this case the ship
//				 img0: image of the ship centered
//				 img1: image of the ship going up
//				 img2: image of the ship going down
// 				 img3: image 1 of destruction animation
//				 img4: image 2 of destruction animation
// 				 img5: image 3 of destruction animation
// outputs: none
void PlayerShip_InitShip(PlayerShip* this, const unsigned char *img0, const unsigned char *img1, const unsigned char *img2,
												 const unsigned char *img3, const unsigned char *img4, const unsigned char *img5);


#endif