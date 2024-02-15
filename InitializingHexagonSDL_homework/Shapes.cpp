#include "Shapes.h"

void Shapes::drawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius) {
	const int diameter = radius * 2;

	int x = (radius - 1);
	int y = 0;
	int tx = 1;
	int ty = 1;
	int error = tx - diameter;

	while (x >= y) {
		SDL_RenderDrawPoint(renderer, centerX + x, centerY - y);
		SDL_RenderDrawPoint(renderer, centerX + x, centerY + y);
		SDL_RenderDrawPoint(renderer, centerX - x, centerY - y);
		SDL_RenderDrawPoint(renderer, centerX - x, centerY + y);
		SDL_RenderDrawPoint(renderer, centerX + y, centerY - x);
		SDL_RenderDrawPoint(renderer, centerX + y, centerY + x);
		SDL_RenderDrawPoint(renderer, centerX - y, centerY - x);
		SDL_RenderDrawPoint(renderer, centerX - y, centerY + x);

		if (error <= 0) {
			y++;
			error += ty;
			ty += 2;
		}

		if (error > 0) {
			x--;
			tx += 2;
			error += tx - diameter;
		}
	}
}

void Shapes::drawPentagon(SDL_Renderer* renderer, int centerX, int centerY, int sideLength)
{
	float angle = 360.0f / 5;
	float angleRad = angle * 3.14 / 180.0f;
	int x[5], y[5];
	for (int i = 0; i < 5; ++i) {
		x[i] = static_cast<int>(centerX + sideLength * cos(i * angleRad));
		y[i] = static_cast<int>(centerY + sideLength * sin(i * angleRad));
	}

	for (int i = 0; i < 5; ++i) {
		int next = (i + 1) % 5;
		SDL_RenderDrawLine(renderer, x[i], y[i], x[next], y[next]);
	}
}

void Shapes::drawHexagon(SDL_Renderer* renderer, int centerX, int centerY, int sideLength)
{
	int x, y;

	double angle = (2 * M_PI) / 6;
	double radius = sideLength / (2 * sin(M_PI / 6));

	SDL_Point points[7];
	
	for (int i = 0; i < 7; ++i) {
		y = (int)round(sin(angle * i) * radius);
		x = (int)round(cos(angle * i) * radius);
		points[i] = { x + centerX, y + centerY };
	}

	const SDL_Point* pts = points;
	SDL_RenderDrawLines(renderer, pts, 7);
		
}

