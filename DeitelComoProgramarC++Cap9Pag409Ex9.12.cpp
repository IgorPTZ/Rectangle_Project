#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include "Rectangle.h"

int main()
{	
	vector<double> vertexA(2);
	vector<double> vertexB(2);
	vector<double> vertexC(2);
	vector<double> vertexD(2);
	
	vertexA[0] = 1;
	vertexA[1] = 0;
	vertexB[0] = 5;
	vertexB[1] = 0;
	vertexC[0] = 5;
	vertexC[1] = 5;
	vertexD[0] = 1;
	vertexD[1] = 5;

	Rectangle form(vertexA, vertexB, vertexC, vertexD);
	form.showInformations();
    return 0;
}

