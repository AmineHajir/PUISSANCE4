/**
 * \file affichageJeu.h
 * \brief ce fichier contient les en-tete des fonctions définies dans le fichier source affichageJeu.c
 * \brief ce fichier contient aussi la déclaration, des variables globales et des structures de données utilisées (matrcie,typedef)
 * */

/**
 * \def N nombre de lignes de la grille qui représente le jeu puissance 4++.
 * \brief représente le nombre de lignes de la grille qui représente le jeu puissance 4++.
 */
#define N 6

/**
 * \def M nombre de colonens de la grille qui représente le jeu puissance 4++.
 * \brief représente le nombre de colonnes de la grille qui représente le jeu puissance 4++.
 */
#define M 7

/**
 * \def BLOCANTE 
 * \brief une pièce blocante du jeu est représentée par le caractère 'X'.
 */
#define BLOCANTE 'X'

/**
 * \def CREUSE 
 * \brief une pièce creuse du jeu est représentée par le caractère ASCII dont le code décimal est 169.
 */
#define CREUSE   'C'

/**
 * \def PLEINE 
 * \brief une pièce pleine du jeu est représentée par le caractère ASCII dont le code décimal est 216.
 */
#define PLEINE   'P'

/**
 * \def VIDE 
 * \brief une case libre de la grille est représentée par la variable VIDE(espace).
 */
#define VIDE      ' '

/**
 * \struct pion affichageJeu.h
 * \brief Définition du type pion contenant les différents types de pièces nécessaire pour jouer au puissance4++.
 */
typedef struct
{
	char bloc;  // champ de la structure qui représente une pièce bloquante
	char creux; // champ de la structure qui représente une pièce creuse
	char plein; // champ de la structure qui représente une pièce pleine
}pion;

/**
 * \var pion grille[N][M];
 * \brief structure de données utilisé pour le jeu puissance4++
 * \brief matrice de type pion et de taille N*M (6*7=42 cases dans le cas de deux joueurs). 
 * \brief chaque case de la matrice peut contenir deux pièces(pions) au maximum. 
 * \brief une case peut contenir une pièce "bloquante" ou "pleine" ou "creuse" ou deus pièces "creuse/pleine" ou peut etre vide(espace). 
*/
pion grille[N][M];

/**
 * \var hauteurColonne[M];
 * \brief structure de données utilisé pour mémoriser la hauteur (ou profondeur ou niveau) de chaque colonne de la grille du jeu.
 * \brief la taille de ce tableau est égale au nombres de colonnes de colonnes de la grille (M)
 * \brief ce tableau permet de stocker dans chacune de ses cases l'indice de la première case vide de la colonne correspondante 
 * \brief dans le cas ou la colonne est pleine, la valeur de la case correspondante à cette colonne dans le tableau est égale à 0. 
 * \brief au début du jeu toutes les cases du tableau sont initialisées à N-1(5) car l'indice de la premiere case vide de chaque colonne 
 * \brief est égale à l'indice de la dernière ligne de la grille.  
*/
int hauteurColonne[M];

void afficher_titre_jeu();
void initialiser_jeu(pion T[N][M]);
void initialiser_hauteurColonne(int V[M]);
void afficher_jeu(pion T[N][M]);
void afficher_numColonne_jeu(int nbre_colonne);