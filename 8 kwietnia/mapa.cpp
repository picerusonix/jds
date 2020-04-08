#include "mapa.h"
#include "menagertektur.h"
#include <stdlib.h> 
#include <time.h> 
#include <stdio.h>  
 
int lvl1[20][25] = {
	{rand()%3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},
	{rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3,rand() % 3},



};

mapa::mapa()
{
	podloga1 = menagerTestur::LoadTexture("zasoby/p1.png");
	podloga2 = menagerTestur::LoadTexture("zasoby/p2.png");
	podloga3 = menagerTestur::LoadTexture("zasoby/p3.png");
	podloga4 = menagerTestur::LoadTexture("zasoby/p4.png");

	loadMap(lvl1);
	src.x = src.y = 0;
	src.w = dest.w = 32;
	src.h = dest.h = 32;
	dest.x = dest.y = 0;
}

void mapa::loadMap(int arr[20][25])
{
	for (int i = 0; i < 20;i++)
	{
		for (int j = 0;j < 25;j++)
		{
			map[i][j] = arr[i][j];
		}
	}
}

void mapa::drawMap()
{
	int type = 0;

	for (int i = 0; i < 20;i++)
	{
		for (int j = 0;j < 25;j++)
		{
			type = map[i][j];
			dest.x = j * 32;
			dest.y = i * 32;
			switch (type)
			{
			case 0:
				menagerTestur::Draw(podloga3, src, dest);
				break;
			case 1:
				menagerTestur::Draw(podloga2, src, dest);
				break;
			case 2:
				menagerTestur::Draw(podloga1, src, dest);
				break;
			case 3:
				menagerTestur::Draw(podloga4, src, dest);
				break;
			default:
				break;
			}

		}
	}
}
