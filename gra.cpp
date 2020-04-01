#include "gra.h"
#include "menagertektur.h"
#include "objekty.h"
#include "mapa.h"
#include "Entity.h"
#include "Komponenty.h"
#define SDL_MAIN_HANDLED

objekty* gracztekstura;
objekty* kaska;//kaœka**
mapa* map;
SDL_Renderer* gra::renderer = nullptr;
Manager manager;
auto& newgracz(manager.addEntity());
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
	gracztekstura = new objekty("zasoby/sheet.png",0,0);
	kaska = new objekty("zasoby/ruch2.png", 50, 50);
	map = new mapa();

	newgracz.addComponent<positionComponent>();
	newgracz.getComponent<positionComponent>().setPos(500, 500);
}

void gra::update()
{
	gracztekstura->Update();
	kaska->Update();
	manager.update();
	std::cout << newgracz.getComponent<positionComponent>().x() << "," << newgracz.getComponent<positionComponent>().y() << std::endl;
}
void gra::render()
{

	SDL_RenderClear(renderer);
	map->drawMap();
	//TU do renderu rzeczy
	gracztekstura->Render();
	kaska->Render();
	SDL_RenderPresent(renderer);



}
void gra::handleevent()
{
	SDL_Event event;
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
