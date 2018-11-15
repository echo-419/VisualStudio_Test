#pragma once
#include <iostream>
#include <SDL.h>
#include<SDL_image.h>
#include <stdlib.h>
#include"CVect2D.h"
#include"CGameObjet.h"





CGameObjet::CGameObjet()
{

}

Input CGameObjet::PressTouche()
{
	Input direction;
	SDL_Event event;

	if (SDL_PollEvent(&event)) {

		switch (event.type) {

		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_LEFT:  direction = Input::Left; break;
			case SDLK_RIGHT: direction = Input::Right; break;
			case SDLK_UP:    direction = Input::Up; break;
			case SDLK_DOWN:  direction = Input::Down; break;
			}
			break;

		case SDL_KEYUP:	direction = Input::No;; break;

		default:break;
		}
		return direction;
	}
}

void CGameObjet::CreaFenetre(game*myGame)

{

	myGame->g_ptexture = SDL_CreateTexture(myGame->g_pRenderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET,1024,780);

	myGame->g_bRunning = 1;
}

void CGameObjet::Image(game * myGame)
{
	myGame->g_psurface = SDL_CreateRGBSurface(0, 100, 400, 32, 0, 0, 0, 0);
	SDL_Surface* image = IMG_Load("Img.png");
}

void CGameObjet::Deplace(CVect2D &player)
{
	switch (PressTouche()) {


	case Input::Left:	player.m_fltX--; break;
	case Input::Right:	player.m_fltX++; break;
	case Input::Up:		player.m_fltY--; break;
	case Input::Down:	player.m_fltY++; break;

	default:break;
	}
}

int CGameObjet::init(char * title, int xpos, int ypos, int width, int height, int flags, game * myGame)
{
	myGame->g_pWindow = NULL;
	myGame->g_pRenderer = NULL;
	myGame->g_psurface = NULL;
	myGame->g_ptexture = NULL;


	//initialize SDL

	if (SDL_Init(SDL_INIT_EVERYTHING) >= 0)
	{
		//if succeeded create our window
		myGame->g_pWindow = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		//if succeeded create window, create our render
		if (myGame->g_pWindow != NULL) {
			myGame->g_pRenderer = SDL_CreateRenderer(myGame->g_pWindow, -1, SDL_RENDERER_PRESENTVSYNC);


		}


	}
	else {


		return 0;
	}
	return 1;
}

CVect2D CGameObjet::VPoss(float, float)
{
	return CVect2D();
}










	

