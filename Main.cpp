#include "AABB.h"
#include <iostream>

using namespace std;

int main()
{

	//(x , y , width , height)

	AABB* cuadrado1 = new AABB(10, 12, 15, 9);
	AABB* cuadrado2 = new AABB(13, 10, 11, 13);

	AABB* cuadrado3 = new AABB(255, 775, 525, 55);
	AABB* cuadrado4 = new AABB(10, 12, 33, 75);

	//Prueba 1 =cuadrado 1 vs cuadrado 2

	if (cuadrado1->isIntersecting(cuadrado2))
	{
		cout << "Los cuadrado2 se estan intersectando" << endl;
	}
	else
		cout << "Los cuadrado2 no estan intersectando" << endl;

	//Prueba 2 cuadrado 3 vs cuadrado 4 

	if (cuadrado3->isIntersecting(cuadrado4))
	{
		cout << "Los cuadrado2 se estan intersectando" << endl;
	}
	else
		cout << "Los cuadrado2 no estan intersectando" << endl;

	delete cuadrado1;
	delete cuadrado2;
	delete cuadrado3;
	delete cuadrado4;

	cin.get();
	return 0;
}