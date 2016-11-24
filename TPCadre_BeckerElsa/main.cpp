/*

1)	Quel est le r�le d�un constructeur, quand est-il ex�cut� ?
Il est ex�cut� lors de la construction d�un objet, et sert � cr�er une instance de la classe o� on initialise toutes les variables de l�objet h�rit�es de la classe.

2)	Quel est le r�le d�un destructeur, ex�cut� quand, indispensable quand ?
Un destructeur sert � d�truire l�instance de la classe. Il est ex�cut� � la fin du programme/destruction de l�objet. Il est indispensable pour lib�rer l�espace m�moire, � l�image d�un malloc/new char.

3)	Comment rep�re-t-on un constructeur d�une classe ? Peut-il y en avoir plusieurs ? Si oui, pourquoi ?
Un constructeur porte le m�me nom que la classe. Exemple : si notre classe s�appelle TestClasse, le constructeur prendra cette nomenclature : TestClasse(), ou TestClasse(int x, int y) pour un constructeur de classe avec param�tres. 
Il peut y en avoir plusieurs, pour permettre de cr�er des instances diff�rentes, par exemple avec d�autres param�tres.

4)	Qu�est-ce que la sur-d�finition de fonctions ?
La sur-d�finition de fonctions signifie qu�il existe plusieurs fonctions portant le m�me nom mais avec des param�tres diff�rents. Exemple :
int getnb (int x)
int getnb (int y, intz)

5)	Quelle est la signification de public, et de private dans une classe ?
Public signifie que les donn�es sont accessibles depuis les autres fichiers du programme, en revanche private indique que les donn�es ne sont accessibles que dans le fichier du programme dans lequel elles sont d�clar�es.

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


	pCadre.afficheCarac(); //Affichage du cadre avec param�tres
	cout << endl;
	cCadre.afficheCarac(); //Affichage du cadre sans param�tres
	cout << endl;

	//Demande de saisie utilisateur pour modifier les caract�ristiques du cadre
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