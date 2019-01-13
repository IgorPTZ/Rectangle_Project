#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include "Rectangle.h"
#include <locale.h>

Rectangle::Rectangle(const vector<double> &A, const vector<double> &B, const vector<double> &C, const vector<double> &D)
{
	setlocale(LC_ALL, "");
	if (A.size() == 2 && B.size() == 2 && C.size() == 2 && C.size() == 2) {
		if (setValidate(A, B, C, D)) {
			calculateWidth(A,D);
			calculateLength(C,D);
		}
		else {
			cout << "As coordenadas apresentadas estão fora do primeiro quadrante e/ou não representam um retângulo" << endl;
			exit(0);
		}
	}
	else {
		cout << "As coordenadas passadas não estão corretas!" << endl;
		exit(0);
	}
}

int Rectangle::setValidate(const vector<double> &A, const vector<double> &B, const vector<double> &C, const vector<double> &D)
{
	if ((isValuesCorrectly(A, B, C, D) && isRectangle(A, B, C, D))){
		return 1;
	}
	else {
		return 0;
	}
}

int Rectangle::isValuesCorrectly(const vector<double> &A, const vector<double> &B, const vector<double> &C, const vector<double> &D)
{
	if ((A[0] >= 0.0 && A[0] < 20.0) && (A[1] >= 0.0 && A[1] < 20.0)) {
		;
	}
	else {
		return 0;
	}

	if ((B[0] >= 0.0 && B[0] < 20.0) && ( B[1] >= 0.0 && B[1] < 20.0)) {
		;
	}
	else {
		return 0;
	}

	if ((C[0] >= 0.0 && C[0] < 20.0) && (C[1] >= 0.0 && C[1] < 20.0)) {
		;
	}
	else {
		return 0;
	}

	if ((D[0] >= 0.0 && D[0] < 20.0) && (D[1] >= 0.0 && D[1] < 20.0)) {
		;
	}
	else {
		return 0;
	}

	return 1;
}

int Rectangle::isRectangle(const vector<double> &A, const vector<double> &B, const vector<double> &C, const vector<double> &D)
{
	if ((A[0] == D[0] && B[0] == C[0]) && (A[1] == B[1] && C[1] == D[1])) {
		return 1;
	}
	else {
		return 0;
	}
}

int Rectangle::isSquare()
{
	return (getLength() == getWidth());
}

void Rectangle::calculateWidth(const vector<double> &A, const vector<double> &D)
{
	double width = D[1] - A[1];
	setWidth(width);
}

void Rectangle::calculateLength(const vector<double> &C,const vector<double> &D)
{
	double length = C[0] - D[0];
	setLength(length);
}

double Rectangle::calculateArea()
{
	return getLength() * getWidth();
}

double Rectangle::calculatePerimeter()
{
	return (2 * (getLength() + getWidth()));
}

void Rectangle::setLength(double len) {
	length = len;
}

double Rectangle::getLength()
{
	return length;
}

void Rectangle::setWidth(double wid)
{
	width = wid;
}

double Rectangle::getWidth()
{
	return width;
}

void Rectangle::setVertexA(const vector<double> &A)
{
	vertexA = A;
}

 const vector<double>& Rectangle::getVertexA()
{	
	return vertexA;
}

void Rectangle::setVertexB(const vector<double> &B)
{
	vertexB = B;
}

const vector<double>& Rectangle::getVertexB()
{
	return vertexB;
}

void Rectangle::setVertexC(const vector<double> &C)
{
	vertexC = C;
}

const vector<double>& Rectangle::getVertexC()
{
	return vertexC;
}

void Rectangle::setVertexD(const vector<double> &D)
{
	vertexD = D;
}

const vector<double>& Rectangle::getVertexD()
{
	return vertexD;
}

void Rectangle::showInformations()
{	
	cout << "Informações do retângulo:\n" << endl;
	cout << "Altura:    " << getWidth() << endl;
	cout << "Largura:   " << getLength() << endl;
	cout << "Área:      " << calculateArea() << endl;
	cout << "Perímetro: " << calculatePerimeter() << endl;
	if (isSquare()) {
		cout << "Esse retangulo também é um quadrado" << endl;
	}
	else {
		cout << "Esse retângulo não é um quadrado" << endl;
	}
}
