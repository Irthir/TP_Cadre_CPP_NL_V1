#include <iostream>
#include "CCadre.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //Pour mettre les accents dans la console.

	cout << "Un constructeur est une fonction permettant d'initialiser l'objet, elle est appel�e lorsque l'objet est cr��." << endl;
	cout << "Un destructeur est une fonction permettant de supprimer un objet de la m�moire, elle est ex�cut�e lorsque l'objet quitte le scope ou lorsqu'il est d�truit, elle est indispensable quand l'objet contient un �l�ment demandant une allocation de m�moire dynamique." << endl;
	cout << "Un constructeur de classe porte le m�me nom que la classe, il peut y en avoir plusieurs avec plusieurs signatures, diff�rent nombre et/ou type d'arguments, pour g�rer les diff�rentes initialisations possibles de l'objet." << endl;
	cout << "La surd�finition de fonction est lorsqu'on d�finit une autre fonction de m�me nom avec une signature diff�rente." << endl;
	cout << "Dans une classe un �l�ment public est disponible partout dans le programme, un �l�ment private n'est disponible qu'� l'int�rieur de la classe." << endl;

	CCadre cadre;
	cadre.Affiche();
	cout << "PASSAGE A LA ROTATION" << endl;

	cout << "ROTATION 90�" << endl;
	cadre.Rotation(90.0f);

	return 0;
}