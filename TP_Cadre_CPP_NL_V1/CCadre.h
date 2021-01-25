#pragma once
#ifndef HCADRE
#define HCADRE
//Inclusion conditionnelles pour les différents compilateurs cpp

#include <iostream>
using namespace std;

class CCadre
{
private:
	float fX, fY, fLargeur, fLongueur; //Rajouter m_ pour les données membres.
	char cMotif;

	const int XREPERE = 50;
	const int YREPERE = 50;
public :
	//constructeur
	CCadre(float X = 10.f, float Y = 5.f, float  Largeur = 5.f, float Motif = '*')
	{
		fX = X;
		fY = Y;
		fLargeur = Largeur;
		fLongueur =  2 * Largeur;
		cMotif = Motif;
	}
	//destructeur
	~CCadre()
	{
		cout << "Destruction du Cadre. "<< endl;
	}

	//Les mutateurs
	void setLongueur(float Longueur) { fLongueur = Longueur; }
	void setLargeur(float Largeur) { fLargeur = Largeur; }
	void setMotif(char Motif) { cMotif = Motif; }
	//Les assesseurs
	float getLongueur() const { return fLongueur; }
	float getLargeur() const { return fLargeur; }
	float getMotif() const { return cMotif; }

	friend ostream& operator<<(ostream& os, const CCadre& cadre);
	float Surface()const;
	float Perimetre()const;
	bool isCarre()const;

	void Rotation(float fTheta);
	void Affiche();
	void Affiche(float fbx, float fby, float fcx, float fcy);
	bool Appartient(float X, float Y) const;
	bool Appartient(float X, float Y, float fax, float fay, float fbx, float fby, float fcx, float fcy) const;
};

#endif 