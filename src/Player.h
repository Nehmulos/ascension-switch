#pragma once
#include "Constants.h"
#include "Entity.h"

CLASS(Player) {
	Entity* entity;
};

Player* Player_create(Sprite* sprite);
void Player_destroy(void* context);
void Player_update(void* context, RawTime dt);
void Player_draw(void* context, SDL_Surface* screen, Camera* camera);

void Player_processInput(Player* this);
