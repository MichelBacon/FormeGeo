#include "cercle.h"

Cercle::Cercle():Figure()
{
	rayon = 0;
}

Cercle::Cercle(int inX, int inY, int inRayon) : Figure(inX, inY)
{
	rayon = inRayon;
}

Cercle::Cercle(const Cercle& inCercle):Figure(inCercle)
{
	rayon = inCercle.rayon;
}

Cercle::~Cercle() 
{


}


void Cercle::setRayon(int inRayon)
{
  rayon = inRayon;
}

int Cercle::getRayon() const
{
	return rayon;
}

float Cercle::calculerperimetre() {

	return (2 * Pi*rayon);

}

float Cercle::calculerAire() {

	return (Pi * (rayon^2));

}


void Cercle::Selectionner(int inX, int inY) {
	

	int a = x + rayon;
	int b = y + rayon;
	float lerayon= rayon;
	if ((((inX-a)*(inX - a)) +((inY-b)*(inY - b)))/(lerayon*lerayon)<=1){

		estSelectionne = true;

	}
	else
	{
		estSelectionne = false;
	}

	
	

}

