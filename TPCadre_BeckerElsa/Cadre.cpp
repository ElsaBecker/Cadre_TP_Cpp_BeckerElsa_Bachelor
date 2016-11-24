#include "Cadre.h"



Cadre::Cadre()
{
	this->ancrageX = 10;
	this->ancrageY = 5;
	this->largeur = 5;
	this->longueur = (largeur * 2);
	this->motif = '*';
}

Cadre::Cadre(int ptX, int ptY, int larg, int longu, char symb)
{
	this->ancrageX = ptX;
	this->ancrageY = ptY;
	this->largeur = larg;
	this->longueur = longu;
	this->motif = symb;
}



void Cadre::setLargeur(int larg)
//BUT : Initialiser un entier pour la largeur entr� par l'utilisateu dans le main
//ENTREE : Un entier entr� par l'utilisateur dans le main
//SORTIE : Stockage de l'entier
{
	this->largeur = larg;
}


void Cadre::setLongueur(int longu)
//BUT : Initialiser un entier pour la longueur entr� par l'utilisateur dans le main
//ENTREE : Un entier entr� par l'utilisateur dans le main
//SORTIE : Stockage de l'entier
{
	this->longueur = longu;
}


void Cadre::setMotif(char symb)
//BUT : Initialiser un motif (caract�re) pour le dessin du cadre entr� par l'utilisateur dans le main
//ENTREE : Un caract�re entr� par l'utilisateur dans le main
//SORTIE : Stockage du caract�re
{
	this->motif = symb;
}


int Cadre::getLargeur() const
//BUT : Retourner un entier de la largeur du cadre actuelle
//ENTREE : entier pour la largeur par d�faut ou entr� par l'utilisateur
//SORTIE : Retourne un entier �gal � la largeur actuelle du cadre
{
	return this->largeur;
}


int Cadre::getLongueur() const
//BUT : Retourner un entier de la longueur du cadre actuelle
//ENTREE : Entier pour la longueur par d�faut ou entr� par l'utilisateur
//SORTIE : Retourne un entier �gal � la longueur actuelle du cadre
{
	return this->longueur;
}


char Cadre::getMotif() const
//BUT : Retourner le caract�re d�fini pour dessiner le cadre
//ENTREE : Caract�re par d�faut ou entr� par l'utilisateur
//SORTIE : Retourne le caract�re choisi pour dessiner le cadre
{
	return this->motif;
}


void Cadre::afficheCarac() const
//BUT : Afficher les diff�rents param�tres du cadre : Largeur, longueur, motif, coordonn�es d'ancrage
//ENTREE : entiers : largeur, longueur, coordon�es x et y du points d'ancrage (par d�faut, ou entr�s par l'utilisateur), caract�re : motif du cadre (par d�faut, ou entr�s par l'utilisateur)
//SORTIE : Affichage � l'utilisateur des caract�ristiques du cadre : largeur, longueur, motif, points d'ancrage
{
	cout << "La largeur du cadre est de : " << this->getLargeur() << endl;
	cout << "La longueur du cadre est de : " << this->getLongueur() << endl;
	cout << "Le motif utilise pour dessiner le cadre est : " << this->getMotif() << endl;
	cout << "Les coordonnees du point d'ancrage en x est : " << ancrageX << " et en y : " << ancrageY << endl;
	cout << endl;
	cout << "La surface du cadre est de : " << this->surface() << endl;
	cout << "Le perimetre du cadre est de : " << this->perimetre() << endl;

	if (this->isCarre() == true)
	{
		cout << "Le cadre est un carre" << endl;
	}
	else
	{
		cout << "Le cadre est un rectangle" << endl;
	}
}


int Cadre::surface() const
//BUT : Calculer la surface du cadre
//ENTREE : 2 entiers : largeur et longueur par d�faut ou entr�s par l'utilisateur
//SORTIE : Entier retournant la surface du cadre
{
	int surf = 0;
	
	surf = (largeur*longueur);
	return surf;
}


int Cadre::perimetre() const
//BUT : Calculer le p�rim�tre du cadre
//ENTREE : 2 entiers : largeur et longueur par d�faut ou entr�s par l'utilisateur
//SORTIE : Entier retournant le p�rim�tre du cadre
{
	int perim = 0;

	perim = (longueur + largeur) * 2;
	return perim;
}


bool Cadre::isCarre() const
//BUT : V�rifier si le cadre est un carr� ou un rectangle
//ENTREE : 2 entiers : largeur et longueur par d�faut ou entr�s par l'utilisateur
//SORTIE : Bool�en retournant true, si le cadre est un carr�, false si le cadre est un rectangle
{
	if (longueur == largeur) 
	{
		return true;
	}else
	return false;
}


Cadre::~Cadre()
{

}