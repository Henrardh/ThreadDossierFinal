#ifndef RESSOURCES_H
#define RESSOURCES_H
//Gestion graphique de l'application 
int  OuvertureFenetreGraphique();
int  FermetureFenetreGraphique();

void DessineVaisseau(int l,int c);
void DessineMissile(int l,int c);
void DessineBombe(int l,int c);
void DessineBouclier(int l,int c,int type); // type = vert ou rouge 
void DessineAlien(int l,int c);
void DessineExplosion(int l,int c);
void DessineVaisseauAmiral(int l,int c);
void DessineGameOver(int l,int c);
void DessineChiffre(int l,int c,int val); // val = 0 -> 9


#endif
