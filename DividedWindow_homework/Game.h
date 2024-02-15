//Game.h
#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"

class Game {
public:
	Game();
	~Game();
	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning();
	bool isClickableTextureClicked(SDL_Texture* t, SDL_Rect* r, int xDown, int yDown, int xUp, int yUp);
private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;
	int currentFrame;
	SDL_Texture* texture1;
	SDL_Texture* texture2;
	SDL_Texture* texture3;
	SDL_Texture* texture4;

	// The destination rectangle for the texture above
	SDL_Rect clickableRect1 = { 0, 0, 300, 200 };
	SDL_Rect clickableRect2 = { 300, 0, 300, 200 };
	SDL_Rect clickableRect3 = { 0, 200, 300, 200 };
	SDL_Rect clickableRect4 = { 300, 200, 300, 200 };
	int mouseDownX, mouseDownY;
};
