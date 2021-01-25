#include <iostream>
#include "CCadre.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //Pour mettre les accents dans la console.

	cout << "Un constructeur est une fonction permettant d'initialiser l'objet, elle est appelée lorsque l'objet est créé." << endl;
	cout << "Un destructeur est une fonction permettant de supprimer un objet de la mémoire, elle est exécutée lorsque l'objet quitte le scope ou lorsqu'il est détruit, elle est indispensable quand l'objet contient un élément demandant une allocation de mémoire dynamique." << endl;
	cout << "Un constructeur de classe porte le même nom que la classe, il peut y en avoir plusieurs avec plusieurs signatures, différent nombre et/ou type d'arguments, pour gérer les différentes initialisations possibles de l'objet." << endl;
	cout << "La surdéfinition de fonction est lorsqu'on définit une autre fonction de même nom avec une signature différente." << endl;
	cout << "Dans une classe un élément public est disponible partout dans le programme, un élément private n'est disponible qu'à l'intérieur de la classe." << endl;

	CCadre cadre;
	cadre.Affiche();
	cout << "PASSAGE A LA ROTATION" << endl;

	cout << "ROTATION 90°" << endl;
	cadre.Rotation(90.0f);

	return 0;
}