#pragma once

#include "UiNode.h"
#include "../Sprite.h"
#include "../List.h"

CLASS(UiMenuElement) {
	Sprite* icon;
	Sprite* label;
	void (*actionCallback)(UiNode*);
	UiNode* node;
};

CLASS(UiMenuList) {
	List* elements;
	UiNode* node;
};

UiMenuList* UiMenuList_create(UiNode* parent);
void UiMenuList_destroy(void* context);

void UiMenuList_addElement(UiMenuList* this, UiMenuElement* element);

UiMenuElement* UiMenuElement_create(UiMenuList* list, const char* text, Sprite* icon, void (*clickCallback)(UiNode* node), void* callbackContext);
void UiMenuElement_destroy(void* context);

void UiMenuElement_draw(void* context, SDL_Surface* screen);
