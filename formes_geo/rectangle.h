#ifndef rectangleH
#define rectangleH
#include "figure.h"

class FormeRectangle:public Figure
{
  protected:
    int largeur;
	int hauteur;
  public:
	FormeRectangle();
	FormeRectangle(int x, int y, int largeu, int hauteur);
	FormeRectangle(const FormeRectangle&);
	~FormeRectangle();
	void setLargeur(int);
	void setHauteur(int);
	int getLargeur() const;
	int getHauteur() const;
	string getType() const;
	virtual float calculerAire();
	virtual float calculerperimetre();
	virtual void Selectionner(int,int);
};
#endif
