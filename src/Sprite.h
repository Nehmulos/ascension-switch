#pragma once
#include "Constants.h"
#include "Camera.h"

typedef struct Sprite {
	SDL_Surface* image;
	SDL_Rect bounds;
	SDL_Rect frame;
	float scrollX, scrollY; // camera scroll multipliers
} Sprite;

Sprite* Sprite_create();
void Sprite_destroy(Sprite* this);
void Sprite_destroyWithImage(Sprite* this);
void Sprite_draw(Sprite* this, SDL_Surface* surface);
void Sprite_drawRelative(Sprite* this, SDL_Surface* surface, SDL_Rect* container);
void Sprite_drawOnCamera(Sprite* this, SDL_Surface* surface, Camera* camera);

void Sprite_setFrameSize(Sprite* this, int w, int h);
