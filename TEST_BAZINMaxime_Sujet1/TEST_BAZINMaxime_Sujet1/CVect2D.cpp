#include "CVect2D.h"
#include <iostream>
#include <stdlib.h>
#include<math.h>

CVect2D::CVect2D()
{
}

CVect2D::CVect2D(float fltX, float fltY)
{
	m_fltX = fltX;
	m_fltY = fltY;
}


//Addition de Vecteur
void CVect2D::AddVect(CVect2D vec_A, CVect2D vec_B, CVect2D addvec_AB)
{
	addvec_AB.m_fltX = vec_A.m_fltX + vec_B.m_fltX;
	addvec_AB.m_fltY = vec_A.m_fltY + vec_B.m_fltY;
	std::cout << "L'Addition a pour resultat (" << addvec_AB.m_fltX << "," << addvec_AB.m_fltY << ")" << std::endl;
	
}


//Soustraction de Vecteur
void CVect2D::SousVect(CVect2D vec_A, CVect2D vec_B, CVect2D Sousvec_AB)
{
	Sousvec_AB.m_fltX = (vec_A.m_fltX - vec_B.m_fltX);
	Sousvec_AB.m_fltY = (vec_A.m_fltY - vec_B.m_fltY);
	std::cout << "La Soustraction a pour resultat (" << Sousvec_AB.m_fltX << "," << Sousvec_AB.m_fltY << ")" << std::endl;

}

//Multiplication de Vecteur par un Scalaire
void CVect2D::MultScal(CVect2D vec, float Scal, CVect2D MultScalvect)
{
	MultScalvect.m_fltX = (vec.m_fltX*Scal);
	MultScalvect.m_fltY = (vec.m_fltY*Scal);
	std::cout << "La Multiplication par un Scalaire a pour resultat (" << MultScalvect.m_fltX << "," << MultScalvect.m_fltY << ")" << std::endl;
}


//Produit scalaire de 2 vecteurs
void CVect2D::ProdScalVect(CVect2D vec_A, CVect2D vec_B, float PScal)
{
	PScal = (vec_A.m_fltX*vec_B.m_fltX) + (vec_A.m_fltY*vec_B.m_fltY);
	std::cout << "Le Prodiut Scalaire des 2 vecteur a pour resultat (" << PScal << ")" << std::endl;
}


//Norme d'un vacteur
void CVect2D::Norme(float Ax, float Ay, float Bx, float By, float Norme)
{
	float X =((Bx -Ax)*(Bx - Ax) + (By- Ay)*(By - Ay));
	Norme = sqrt(X);
	std::cout << "La Norme entre A et B a pour resultat (" << Norme << ")" << std::endl;
}


//Produit vectoriel de 2 vecteur
void CVect2D::ProdVec(CVect2D vec_A, CVect2D vec_B, CVect2D Prodvec_AB)
{
	Prodvec_AB.m_fltX = vec_A.m_fltY - vec_B.m_fltY;
	Prodvec_AB.m_fltY = vec_B.m_fltX - vec_A.m_fltX;
	std::cout << "Le produit Vectoriel des 2 vecteurs a pour resultat (" << Prodvec_AB.m_fltX << "," << Prodvec_AB.m_fltY << ")" << std::endl;
}
