#include "gra.h"
#include "menagertektur.h"
#include "vektor.h"
#include "mapa.h"
#include "Komponenty.h"
#define SDL_MAIN_HANDLED

mapa* map;
SDL_Renderer* gra::renderer = nullptr;
SDL_Event gra::event;
Manager manager;
auto& gracz(manager.addEntity());
gra::~gra()
{}
gra::gra()
{}

void gra::init(const char* title, int xpos, int ypos, int szer, int wysoko, bool pelenekran)
{
	int flags = 0;
	if (pelenekran)
	{
		flags = SDL_WINDOW_FULLSCREEN;

	}
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		
		window = SDL_CreateWindow(title, xpos, ypos, szer, wysoko, flags);
		
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 25, 25, 10, 10);
			
		}

		dziala = true;
	}
	 else
	{
		dziala = false;


	}

	map = new mapa();
	gracz.addComponent<transformComponent>(100, 500);
	gracz.addComponent<Sprite>("zasoby/sheet.png");
	gracz.addComponent<kalwaitura>();
}

void gra::update()
{
	manager.refresh();
	manager.update();
	

}
void gra::render()
{

	SDL_RenderClear(renderer);
	map->drawMap();
	//TU do renderu rzeczy
	manager.draw();
	SDL_RenderPresent(renderer);



}
void gra::handleevent()
{
	

	SDL_PollEvent(&event);
	switch (event.type)
	{
	case SDL_QUIT:
			dziala = false;
			break;
	default:
		break;
	}


}

void gra::clear()
{

	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	

}
