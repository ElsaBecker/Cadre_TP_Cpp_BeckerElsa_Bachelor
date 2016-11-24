#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


class Cadre
{

	private :

		//Données membres
		int largeur;
		int longueur;
		char motif;
		int ancrageX;
		int ancrageY;

	public:

		//Constructeurs, Destructeur
		Cadre(); //Constructeur sans paramètres
		Cadre(int ptX, int ptY, int larg, int longu, char symb); //Constructeur avec paramètres
		~Cadre(); //Destructeur

		//Mutateurs
		void setLargeur(int larg); //Initialiser un entier pour la largeur entré par l'utilisateu dans le main
		void setLongueur(int longu); //Initialiser un entier pour la longueur entré par l'utilisateur dans le main
		void setMotif(char symb); //Initialiser un motif (caractère) pour le dessin du cadre entré par l'utilisateur dans le main
		int getLargeur()const; //Retourner un entier de la largeur du cadre actuelle
		int getLongueur()const; //Retourner un entier de la longueur du cadre actuelle
		char getMotif()const; //Retourner le caractère défini pour dessiner le cadre




		void afficheCarac() const; //Afficher les différents paramètres du cadre : Largeur, longueur, motif, coordonnées d'ancrage
		int surface() const; // Calculer la surface du cadre
		int perimetre() const; //Calculer le périmètre du cadre
		bool isCarre() const; //Vérifier si le cadre est un carré ou un rectangle

};

