#ifndef FigureH
#define FigureH

#include <string>
using namespace std;

const float Pi=(float)3.1416;

class Figure
{
protected:
	int x;	//coin sup�rieur gauche
	int y;
	bool estSelectionne;

public:
	Figure();
	Figure(int x, int y);
	Figure(const Figure&);
	virtual ~Figure();
	int getX() const;
	int getY() const;
	void setPoint(int X, int Y);
	void setX(int);
	void setY(int);
	bool EstSelectionne();
	 void Deselectionner();

	virtual void setCote(int);
	virtual int getCote() const;

	virtual void setRayon(int);
	virtual int getRayon() const;

	virtual void setLargeur(int);
	virtual void setHauteur(int);
	virtual int getLargeur() const;
	virtual int getHauteur() const;

	virtual string getType() const;

	virtual float calculerperimetre()=0;
	virtual float calculerAire()=0;

	virtual void Selectionner(int,int)=0;
	
};

#endif