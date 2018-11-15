

class CGameObjet
{
public:
	CGameObjet();
typedef struct game {

		SDL_Window *g_pWindow;
		SDL_Renderer *g_pRenderer;
		SDL_Texture *g_ptexture;
		SDL_Surface *g_psurface;
		int g_bRunning;

	}game;

	Input PressTouche();
	void CreaFenetre(game *myGame);
	void Image(game *myGame);
	void Deplace(CVect2D &player);
	int init(char *title, int xpos, int ypos, int width, int height, int flags, game *myGame);

	CVect2D VPoss(float fltX, float fltY);
	int g_bRunning;
	game MonGame;
	

private:

};

enum class Input
{
	Up, Down, Left, Right, No
};