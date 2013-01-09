#include "Player.h"

Player* Player_create(Scene* scene, Sprite* sprite, Input* input) {
	Player* this = malloc(sizeof(Player));
	this->entity = Entity_create(this, scene, sprite);
	this->entity->draw = Player_draw;
	this->entity->update = Player_update;
	this->input = input;
	return this;
}

void Player_destroy(void* context) {
	Player* this = context;
	free(this);
}

void Player_update(void* context, RawTime dt) {
	Player* this = context;
	Player_processInput(this);
}

void Player_processInput(Player* this) {
	int x = Input_getAxis(this->input, horizontal);
	int y = Input_getAxis(this->input, vertical);
	if (x != 0 || 0 != y) {
		this->entity->physics.dx += (x*5 * PHYSICS_SCALE) / AXIS_MAX;
		this->entity->physics.dy += (y*5 * PHYSICS_SCALE) / AXIS_MAX;
		printf("%d, %d\n", this->entity->physics.dx,this->entity->physics.dy);
	}
}

void Player_draw(void* context, SDL_Surface* screen, Camera* camera) {
	Player* this = context;
	Sprite_drawOnCamera(this->entity->sprite, screen, camera);
}
