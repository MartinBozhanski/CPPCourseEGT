//Game.cpp
#include "Game.h"
#include <iostream>

bool isValid1 = false;
bool isValid2 = false;
bool isValid3 = false;
bool isValid4 = false;

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) //window init success
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

				// use the TextureManager to load textures
				TextureManager::Instance()->loadTexture("assets/blue.bmp", "blue", renderer);
				TextureManager::Instance()->loadTexture("assets/red.bmp", "red", renderer);
				TextureManager::Instance()->loadTexture("assets/Yellow.bmp", "yellow", renderer);
				TextureManager::Instance()->loadTexture("assets/green.bmp", "green", renderer);

				SDL_Surface* surface1 = SDL_LoadBMP("assets/blue.bmp");
				texture1 = SDL_CreateTextureFromSurface(renderer, surface1);
				SDL_FreeSurface(surface1);

				SDL_Surface* surface2 = SDL_LoadBMP("assets/red.bmp");
				texture2 = SDL_CreateTextureFromSurface(renderer, surface2);
				SDL_FreeSurface(surface2);

				SDL_Surface* surface3 = SDL_LoadBMP("assets/yellow.bmp");
				texture3 = SDL_CreateTextureFromSurface(renderer, surface3);
				SDL_FreeSurface(surface3);

				SDL_Surface* surface4 = SDL_LoadBMP("assets/green.bmp");
				texture4 = SDL_CreateTextureFromSurface(renderer, surface4);
				SDL_FreeSurface(surface4);
			}
			else {
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else {
			std::cout << "window init failed\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail\n";
		return false;
	}
	std::cout << "init success\n";
	running = true;
	return true;
}

void Game::render() {
	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 255); // sets the window bg color needs to sit before SDL_RenderClear()
	SDL_RenderClear(renderer);


	//TextureManager::Instance()->drawTexture("blue", 0, 0, 300, 200, renderer, SDL_FLIP_VERTICAL);
	//TextureManager::Instance()->drawTexture("red", 300, 0, 300, 200, renderer, SDL_FLIP_VERTICAL);
	//TextureManager::Instance()->drawTexture("yellow", 0, 200, 300, 200, renderer, SDL_FLIP_VERTICAL);
	if (isValid1 == true) {
		SDL_RenderCopy(renderer, texture1, NULL, &clickableRect1);
	}
	else if (isValid2 == true) {
		SDL_RenderCopy(renderer, texture2, NULL, &clickableRect2);
	}
	else if (isValid3 == true) {
		SDL_RenderCopy(renderer, texture3, NULL, &clickableRect3);
	}
	else if (isValid4 == true) {
		SDL_RenderCopy(renderer, texture4, NULL, &clickableRect4);
	}
	
	//SDL_RenderCopy(renderer, texture1, NULL, &clickableRect1);
	//SDL_RenderCopy(renderer, texture2, NULL, &clickableRect2);
	//SDL_RenderCopy(renderer, texture3, NULL, &clickableRect3);
	//SDL_RenderCopy(renderer, texture4, NULL, &clickableRect4);
	//TextureManager::Instance()->drawTexture("yellow", 0, 0, 300, 200, renderer, SDL_FLIP_VERTICAL);
	//TextureManager::Instance()->drawTexture("green", 0, 0, 300, 200, renderer, SDL_FLIP_VERTICAL);
	/*int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh); // assigns the window's width and height to ww and wh
	SDL_Rect fillRect = { ww / 4, wh / 4, ww / 2, wh / 2 };
	SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
	SDL_RenderFillRect(renderer, &fillRect);

	SDL_Rect outlineRect = { ww / 6, wh / 6, ww * 2 / 3, wh * 2 / 3 };
	SDL_SetRenderDrawColor(renderer, 0x00, 0xFF, 0x00, 0xFF);
	SDL_RenderDrawRect(renderer, &outlineRect);

	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF);
	SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);

	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0x00, 0xFF); // renders dashed line
	for (int i = 0; i < wh; i += 4) {
		SDL_RenderDrawPoint(renderer, ww / 2, i);
	}

	SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0xFF, 0xFF);

	// animates the sprite sheet with the help of the update() function
	TextureManager::Instance()->drawOneFrameFromTexture("sprite_sheet", 0, 0, 60, 70, 1, currentFrame, renderer);

	// NOTICE: the textures rendered later overlap the previosly rendered textures
	*/
	SDL_RenderPresent(renderer);
}

bool Game::isClickableTextureClicked(SDL_Texture* t, SDL_Rect* r, int xDown, int yDown, int xUp, int yUp) {
	int tw, th;
	SDL_QueryTexture(t, 0, 0, &tw, &th);

	// 't' is rendered on the screen and lies within the coordinates below
	//(r->x)--------(r->x + tw)
	//     |        |
	//     |        |
	//(r->y)--------(r->y + th)

	// checks if the cursor position during the click time is inside the coordinates
	if ((xDown > r->x && xDown < (r->x + tw)) && (xUp > r->x && xUp < (r->x + tw)) &&
		(yDown > r->y && yDown < (r->y + th)) && (yUp > r->y && yUp < (r->y + th))) {
		// if all coordinates fall inside the rendered texture, the texture is clicked
		return true;
	}
	// the click was outside the texture
	return false;
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; 
			break;
		case SDL_MOUSEBUTTONDOWN: {
			int msx, msy;
			if (event.button.button == SDL_BUTTON_LEFT) {
				// When the left mouse button is pressed down, record the cursor position
				// to be used when checking if a texture was clicked;
				SDL_GetMouseState(&msx, &msy);
				mouseDownX = msx;
				mouseDownY = msy;
			}
		}; break;
		case SDL_MOUSEBUTTONUP: {
			int msx, msy;
			if (event.button.button == SDL_BUTTON_LEFT) {
				// When the left mouse button is let go, check if the texture was pressed and log the result
				SDL_GetMouseState(&msx, &msy);
				if (isClickableTextureClicked(texture1, &clickableRect1, mouseDownX, mouseDownY, msx, msy)) {
					std::cout << msx << ":" << msy << std::endl;
					isValid1 = true;
				}
				else if (isClickableTextureClicked(texture2, &clickableRect2, mouseDownX, mouseDownY, msx, msy))
				{
					std::cout << msx << ":" << msy << std::endl;
					isValid2 = true;
				}
				else if (isClickableTextureClicked(texture3, &clickableRect3, mouseDownX, mouseDownY, msx, msy))
				{
					std::cout << msx << ":" << msy << std::endl;
					isValid3 = true;
				}
				else if (isClickableTextureClicked(texture4, &clickableRect4, mouseDownX, mouseDownY, msx, msy))
				{
					std::cout << msx << ":" << msy << std::endl;
					isValid4 = true;
				}
				else
				{
					std::cout << "NOT CLICKED" << std::endl;
				}

			}
		}; break;
		default: break;
		}
	}
}

void Game::update() {

	//Logs the different stages of 'currentFrame' formula,
	//if you have trouble understanding how it works try uncommenting the couts and study the output 
	//std::cout << "SDL_TICKS           :" << SDL_GetTicks() << "\n";
	//std::cout << "SDL_TICKS / 100     :" << int(SDL_GetTicks() / 100) << "\n";
	//std::cout << "SDL_TICKS / 100 % 10:" << int(((SDL_GetTicks() / 100) % 10)) << "\n\n";


	//int numberOfFramesInSpriteSheet = 10;
	//int animationSpeed = 100; // lower is faster, min = 1
	//currentFrame = int(((SDL_GetTicks() / animationSpeed) % numberOfFramesInSpriteSheet));
}

void Game::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning() {
	return Game::running;
}

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::currentFrame = 0;
}

Game::~Game() {

}
