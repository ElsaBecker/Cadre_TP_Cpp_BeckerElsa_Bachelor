/*

1)	Quel est le rôle d’un constructeur, quand est-il exécuté ?
Il est exécuté lors de la construction d’un objet, et sert à créer une instance de la classe où on initialise toutes les variables de l’objet héritées de la classe.

2)	Quel est le rôle d’un destructeur, exécuté quand, indispensable quand ?
Un destructeur sert à détruire l’instance de la classe. Il est exécuté à la fin du programme/destruction de l’objet. Il est indispensable pour libérer l’espace mémoire, à l’image d’un malloc/new char.

3)	Comment repère-t-on un constructeur d’une classe ? Peut-il y en avoir plusieurs ? Si oui, pourquoi ?
Un constructeur porte le même nom que la classe. Exemple : si notre classe s’appelle TestClasse, le constructeur prendra cette nomenclature : TestClasse(), ou TestClasse(int x, int y) pour un constructeur de classe avec paramètres. 
Il peut y en avoir plusieurs, pour permettre de créer des instances différentes, par exemple avec d’autres paramètres.

4)	Qu’est-ce que la sur-définition de fonctions ?
La sur-définition de fonctions signifie qu’il existe plusieurs fonctions portant le même nom mais avec des paramètres différents. Exemple :
int getnb (int x)
int getnb (int y, intz)

5)	Quelle est la signification de public, et de private dans une classe ?
Public signifie que les données sont accessibles depuis les autres fichiers du programme, en revanche private indique que les données ne sont accessibles que dans le fichier du programme dans lequel elles sont déclarées.

*/

#include "Cadre.h"

int main()
{
	Cadre cCadre;
	Cadre pCadre(0, 0, 12, 20, 'x');
	int uLong = 0;
	int uLarg = 0;
	char uMotif = NULL;
	int uAncX = 0;
	int uAncY = 0;


	pCadre.afficheCarac(); //Affichage du cadre avec paramètres
	cout << endl;
	cCadre.afficheCarac(); //Affichage du cadre sans paramètres
	cout << endl;

	//Demande de saisie utilisateur pour modifier les caractéristiques du cadre
	cout << "Veuillez saisir la longueur du cadre souhaitee : " << endl;
	cin >> uLong;
	cCadre.setLongueur(uLong);

	cout << "Veuillez saisir la largeur du cadre souhaitee : " << endl;
	cin >> uLarg;
	cCadre.setLargeur(uLarg);

	cout << "Veuillez saisir le motif souhaite pour dessiner le cadre : " << endl;
	cin >> uMotif;
	cCadre.setMotif(uMotif);

	cout << endl;
	cCadre.afficheCarac(); //affichage du cadre
	cout << endl;


	system("pause");
	return 0;
}