#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


class Cadre
{

	private :

		//Donn�es membres
		int largeur;
		int longueur;
		char motif;
		int ancrageX;
		int ancrageY;

	public:

		//Constructeurs, Destructeur
		Cadre(); //Constructeur sans param�tres
		Cadre(int ptX, int ptY, int larg, int longu, char symb); //Constructeur avec param�tres
		~Cadre(); //Destructeur

		//Mutateurs
		void setLargeur(int larg); //Initialiser un entier pour la largeur entr� par l'utilisateu dans le main
		void setLongueur(int longu); //Initialiser un entier pour la longueur entr� par l'utilisateur dans le main
		void setMotif(char symb); //Initialiser un motif (caract�re) pour le dessin du cadre entr� par l'utilisateur dans le main
		int getLargeur()const; //Retourner un entier de la largeur du cadre actuelle
		int getLongueur()const; //Retourner un entier de la longueur du cadre actuelle
		char getMotif()const; //Retourner le caract�re d�fini pour dessiner le cadre




		void afficheCarac() const; //Afficher les diff�rents param�tres du cadre : Largeur, longueur, motif, coordonn�es d'ancrage
		int surface() const; // Calculer la surface du cadre
		int perimetre() const; //Calculer le p�rim�tre du cadre
		bool isCarre() const; //V�rifier si le cadre est un carr� ou un rectangle

};

