#include <iostream>
#include <SDL.h>
#include<SDL_image.h>
#include <stdlib.h>
#include"CVect2D.h"
#include"CGameObjet.h"

typedef struct game {


	SDL_Window *g_pWindow;
	SDL_Renderer *g_pRenderer;
	SDL_Texture *g_ptexture;
	SDL_Surface *g_psurface;


}game;



using namespace std;


int main(int argc, char * argv[]) {

	game myGame;
	CVect2D Resultat(0.0f, 0.0f);

	


	CGameObjet fenetre();
	
	fenetre.CreaFenetre(&myGame);
	fenetre.init("Chapter 1 setting up SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 760, SDL_WINDOW_SHOWN, &myGame);
	fenetre.Image(&myGame);
	fenetre.Deplace(Resultat);

	

	system("pause");

	return 0;
}
