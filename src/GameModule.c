/*
 * GameModule.c
 *
 *  Created on: 24.12.2012
 *      Author: nehmulos
 */

#include "GameModule.h"

GameModule* GameModule_create(void) {
	GameModule* this = malloc(sizeof(GameModule));
	this->draw = emptyDraw;
	this->update = emptyUpdate;
	return this;
}

void emptyUpdate(RawTime dt) {}
void emptyDraw(SDL_Surface* surface) {}
