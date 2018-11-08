#include <iostream>
#include <stdlib.h>
#include"CVect2D.h"


int main() {

	CVect2D Resultat(0.0f, 0.0f);
	CVect2D Vect_Alpha(11.7f,34.3f);
	CVect2D Vect_Bravo(41.9f,93.3f);
	float resultat=0.0f;
	float  Scalaire = 2.5f;
	float Xa = 1.0f;
	float Ya = 4.0f;
	float Xb = 5.3f;
	float Yb = 8.1f;
	
	Vect_Alpha.AddVect(Vect_Alpha, Vect_Bravo, Resultat);
	

	Vect_Alpha.SousVect(Vect_Alpha, Vect_Bravo, Resultat);
	

	Vect_Alpha.MultScal(Vect_Alpha, Scalaire, Resultat);
	
	
	Vect_Alpha.ProdScalVect(Vect_Alpha, Vect_Bravo, resultat);
	

	Vect_Alpha.Norme(Xa, Ya, Xb, Yb, resultat);
	

	Vect_Alpha.ProdVec(Vect_Alpha, Vect_Bravo, Resultat);
	

	system("pause");

	return 0;
}
