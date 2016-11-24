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
//BUT : Initialiser un entier pour la largeur entré par l'utilisateu dans le main
//ENTREE : Un entier entré par l'utilisateur dans le main
//SORTIE : Stockage de l'entier
{
	this->largeur = larg;
}


void Cadre::setLongueur(int longu)
//BUT : Initialiser un entier pour la longueur entré par l'utilisateur dans le main
//ENTREE : Un entier entré par l'utilisateur dans le main
//SORTIE : Stockage de l'entier
{
	this->longueur = longu;
}


void Cadre::setMotif(char symb)
//BUT : Initialiser un motif (caractère) pour le dessin du cadre entré par l'utilisateur dans le main
//ENTREE : Un caractère entré par l'utilisateur dans le main
//SORTIE : Stockage du caractère
{
	this->motif = symb;
}


int Cadre::getLargeur() const
//BUT : Retourner un entier de la largeur du cadre actuelle
//ENTREE : entier pour la largeur par défaut ou entré par l'utilisateur
//SORTIE : Retourne un entier égal à la largeur actuelle du cadre
{
	return this->largeur;
}


int Cadre::getLongueur() const
//BUT : Retourner un entier de la longueur du cadre actuelle
//ENTREE : Entier pour la longueur par défaut ou entré par l'utilisateur
//SORTIE : Retourne un entier égal à la longueur actuelle du cadre
{
	return this->longueur;
}


char Cadre::getMotif() const
//BUT : Retourner le caractère défini pour dessiner le cadre
//ENTREE : Caractère par défaut ou entré par l'utilisateur
//SORTIE : Retourne le caractère choisi pour dessiner le cadre
{
	return this->motif;
}


void Cadre::afficheCarac() const
//BUT : Afficher les différents paramètres du cadre : Largeur, longueur, motif, coordonnées d'ancrage
//ENTREE : entiers : largeur, longueur, coordonées x et y du points d'ancrage (par défaut, ou entrés par l'utilisateur), caractère : motif du cadre (par défaut, ou entrés par l'utilisateur)
//SORTIE : Affichage à l'utilisateur des caractéristiques du cadre : largeur, longueur, motif, points d'ancrage
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
//ENTREE : 2 entiers : largeur et longueur par défaut ou entrés par l'utilisateur
//SORTIE : Entier retournant la surface du cadre
{
	int surf = 0;
	
	surf = (largeur*longueur);
	return surf;
}


int Cadre::perimetre() const
//BUT : Calculer le périmètre du cadre
//ENTREE : 2 entiers : largeur et longueur par défaut ou entrés par l'utilisateur
//SORTIE : Entier retournant le périmètre du cadre
{
	int perim = 0;

	perim = (longueur + largeur) * 2;
	return perim;
}


bool Cadre::isCarre() const
//BUT : Vérifier si le cadre est un carré ou un rectangle
//ENTREE : 2 entiers : largeur et longueur par défaut ou entrés par l'utilisateur
//SORTIE : Booléen retournant true, si le cadre est un carré, false si le cadre est un rectangle
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